
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (size_t,size_t) ;
 size_t FUNC_1 (int,int ) ;
 void* FUNC_2 (void*,size_t) ;
 int VAR_0 ;

void *FUNC_3(void *VAR_1, unsigned int *VAR_2, size_t VAR_3)
{
    if (VAR_3 <= *VAR_2)
        return VAR_1;

    if (VAR_3 > VAR_0 - 32) {
        *VAR_2 = 0;
        return ((void*)0);
    }

    VAR_3 = FUNC_1(VAR_0 - 32, FUNC_0(VAR_3 + VAR_3 / 16 + 32, VAR_3));

    VAR_1 = FUNC_2(VAR_1, VAR_3);



    if (!VAR_1)
        VAR_3 = 0;

    *VAR_2 = VAR_3;

    return VAR_1;
}
