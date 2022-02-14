
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int error; } ;
typedef TYPE_1__ DiracArith ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int* VAR_2 ;

__attribute__((used)) static inline int FUNC_2(DiracArith *VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6 = 1;
    while (!FUNC_1(VAR_3, VAR_4)) {
        if (VAR_6 >= 0x40000000) {
            FUNC_0(((void*)0), VAR_1, "dirac_get_arith_uint overflow\n");
            VAR_3->error = VAR_0;
            return -1;
        }
        VAR_6 <<= 1;
        VAR_6 += FUNC_1(VAR_3, VAR_5);
        VAR_4 = VAR_2[VAR_4];
    }
    return VAR_6-1;
}
