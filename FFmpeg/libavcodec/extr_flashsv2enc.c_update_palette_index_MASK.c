
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int* index; } ;
typedef TYPE_1__ Palette ;


 unsigned int FUNC_0 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static int FUNC_1(Palette * VAR_0)
{
    int VAR_1, VAR_2, VAR_3;
    unsigned int VAR_4, VAR_5, VAR_6;
    for (VAR_1 = 4; VAR_1 < 256; VAR_1 += 8) {
        for (VAR_2 = 4; VAR_2 < 256; VAR_2 += 8) {
            for (VAR_3 = 4; VAR_3 < 256; VAR_3 += 8) {
                VAR_4 = VAR_3 | (VAR_2 << 8) | (VAR_1 << 16);
                VAR_5 = (VAR_3 >> 3) | ((VAR_2 & 0xf8) << 2) | ((VAR_1 & 0xf8) << 7);
                VAR_6 = FUNC_0(VAR_0, VAR_4);

                VAR_0->index[VAR_5] = VAR_6;
            }
        }
    }
    return 0;
}
