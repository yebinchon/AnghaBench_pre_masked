
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,size_t,size_t) ;

void FUNC_1(void *VAR_0, size_t VAR_1, size_t VAR_2, size_t VAR_3)
{
    size_t VAR_4;
    for(VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4){
        size_t VAR_5 = VAR_1*VAR_4/VAR_3;
        size_t VAR_6 = VAR_1*(VAR_4+1)/VAR_3;
        size_t VAR_7 = VAR_6-VAR_5;
        FUNC_0(VAR_0+(VAR_5*VAR_2), VAR_7, VAR_2);
    }
}
