
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (void*,size_t,size_t) ;
 int FUNC_2 (void*,void**,int) ;

int FUNC_3(void *VAR_1, size_t VAR_2, size_t VAR_3)
{
    void *VAR_4;

    FUNC_2(&VAR_4, VAR_1, sizeof(VAR_4));
    VAR_4 = FUNC_1(VAR_4, VAR_2, VAR_3);
    FUNC_2(VAR_1, &VAR_4, sizeof(VAR_4));
    if (!VAR_4 && VAR_2 && VAR_3)
        return FUNC_0(VAR_0);

    return 0;
}
