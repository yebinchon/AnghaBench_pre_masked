
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef unsigned int const uint16_t ;
typedef int int16_t ;
struct TYPE_4__ {int* D; } ;
typedef TYPE_1__ Q68State ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 unsigned int FUNC_2 (TYPE_1__*,int,int ,int ,int*) ;
 size_t VAR_2 ;

__attribute__((used)) static int FUNC_3(Q68State *VAR_3, uint32_t VAR_4)
{
    VAR_0;
    const int VAR_5 = VAR_4 & (1<<8);

    int VAR_6;
    const uint16_t VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_1, 0, &VAR_6);
    if (VAR_6 < 0) {
        return 0;
    }

    if (VAR_5) {
        VAR_3->D[VAR_2] = (int16_t)VAR_3->D[VAR_2] * (int16_t)VAR_7;
    } else {
        VAR_3->D[VAR_2] = (uint16_t)VAR_3->D[VAR_2] * VAR_7;
    }
    FUNC_0();
    FUNC_1(VAR_3->D[VAR_2]);
    return 54 + VAR_6;

}
