
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {unsigned int* colors; } ;
typedef TYPE_1__ Palette ;


 int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (int const*) ;
 unsigned int FUNC_2 (int const*) ;
 int FUNC_3 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static int FUNC_4(Palette * VAR_0, uint8_t * VAR_1, const uint8_t * VAR_2,
                            int VAR_3)
{
    unsigned VAR_4 = FUNC_2(VAR_2);
    unsigned VAR_5 = FUNC_1(VAR_2);
    int VAR_6 = FUNC_0(VAR_5, VAR_5 & 0x00f8f8f8);
    int VAR_7 = FUNC_3(VAR_0, VAR_4);
    int VAR_8 = FUNC_0(VAR_5, VAR_0->colors[VAR_7]);
    if (VAR_3 + VAR_6 >= VAR_8) {
        VAR_1[0] = VAR_7;
        return 1;
    } else {
        VAR_1[0] = 0x80 | (VAR_4 >> 8);
        VAR_1[1] = VAR_4 & 0xff;
        return 2;
    }
}
