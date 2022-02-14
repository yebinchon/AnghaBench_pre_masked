
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cl_platform_info ;
typedef int cl_platform_id ;
typedef scalar_t__ cl_int ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (int ,int ,size_t,char*,size_t*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static char *FUNC_5(cl_platform_id VAR_1,
                                        cl_platform_info VAR_2)
{
    char *VAR_3;
    size_t VAR_4;
    cl_int VAR_5;
    VAR_5 = FUNC_3(VAR_1, VAR_2, 0, ((void*)0), &VAR_4);
    if (VAR_5 != VAR_0)
        return ((void*)0);
    VAR_3 = FUNC_2(VAR_4);
    if (!VAR_3)
        return ((void*)0);
    VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_4, VAR_3, &VAR_4);
    if (VAR_5 != VAR_0) {
        FUNC_1(VAR_3);
        return ((void*)0);
    }
    FUNC_0(FUNC_4(VAR_3) + 1 == VAR_4);
    return VAR_3;
}
