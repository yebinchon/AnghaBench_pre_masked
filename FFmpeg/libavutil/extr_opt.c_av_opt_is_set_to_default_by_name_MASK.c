
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVOption ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (void*,char const*,int *,int ,int,void**) ;
 int FUNC_2 (void*,int const*) ;

int FUNC_3(void *VAR_2, const char *VAR_3, int VAR_4)
{
    const AVOption *VAR_5;
    void *VAR_6;
    if (!VAR_2)
        return FUNC_0(VAR_1);
    VAR_5 = FUNC_1(VAR_2, VAR_3, ((void*)0), 0, VAR_4, &VAR_6);
    if (!VAR_5)
        return VAR_0;
    return FUNC_2(VAR_6, VAR_5);
}
