
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SUINT ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int) ;
 int* VAR_1 ;
 unsigned int* VAR_2 ;

__attribute__((used)) static inline int FUNC_1(int VAR_3, int VAR_4)
{
    unsigned int VAR_5;
    int VAR_6;

    VAR_6 = VAR_1 [4 * VAR_3 + (VAR_4 & 3)];
    VAR_5 = VAR_2[4 * VAR_3 + (VAR_4 & 3)];
    VAR_6 -= VAR_4 >> 2;




    if (VAR_6 > (SUINT)31)
        return 0;
    VAR_5 = (VAR_5 + ((1U << VAR_6)>>1)) >> VAR_6;

    return VAR_5;
}
