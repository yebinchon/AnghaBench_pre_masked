
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (size_t,size_t) ;
 void* FUNC_1 (size_t) ;
 int VAR_2 ;
 void* FUNC_2 (size_t,size_t) ;
 int FUNC_3 (void*,int ,size_t) ;
 scalar_t__ FUNC_4 (void**,size_t,size_t) ;

void *FUNC_5(size_t VAR_3)
{
    void *VAR_4 = ((void*)0);


    if (VAR_3 > (VAR_2 - 32))
        return ((void*)0);
    VAR_4 = FUNC_1(VAR_3);

    if(!VAR_4 && !VAR_3) {
        VAR_3 = 1;
        VAR_4= FUNC_5(1);
    }




    return VAR_4;
}
