
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int8_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static inline void FUNC_1(const int8_t *VAR_1, int *VAR_2)
{
    *VAR_2 = VAR_1[*VAR_2];
    if (*VAR_2 < 0) {
        FUNC_0(((void*)0), VAR_0, "Illegal intra prediction mode\n");
        *VAR_2 = 0;
    }
}
