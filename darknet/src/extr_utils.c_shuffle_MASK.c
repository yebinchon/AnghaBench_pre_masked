
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 void* FUNC_0 (int,size_t) ;
 int FUNC_1 (void*,void*,size_t) ;
 size_t FUNC_2 () ;

void FUNC_3(void *VAR_1, size_t VAR_2, size_t VAR_3)
{
    size_t VAR_4;
    void *VAR_5 = FUNC_0(1, VAR_3);
    for(VAR_4 = 0; VAR_4 < VAR_2-1; ++VAR_4){
        size_t VAR_6 = VAR_4 + FUNC_2()/(VAR_0 / (VAR_2-VAR_4)+1);
        FUNC_1(VAR_5, VAR_1+(VAR_6*VAR_3), VAR_3);
        FUNC_1(VAR_1+(VAR_6*VAR_3), VAR_1+(VAR_4*VAR_3), VAR_3);
        FUNC_1(VAR_1+(VAR_4*VAR_3), VAR_5, VAR_3);
    }
}
