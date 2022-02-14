
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int **,unsigned int*,size_t,int) ;
 int FUNC_2 (int *,int ,size_t) ;

void FUNC_3(void *VAR_2, unsigned int *VAR_3, size_t VAR_4)
{
    uint8_t **VAR_5 = VAR_2;
    if (VAR_4 > VAR_1 - VAR_0) {
        FUNC_0(VAR_5);
        *VAR_3 = 0;
        return;
    }
    if (!FUNC_1(VAR_5, VAR_3, VAR_4 + VAR_0, 1))
        FUNC_2(*VAR_5 + VAR_4, 0, VAR_0);
}
