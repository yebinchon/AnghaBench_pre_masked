
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cl_platform_id ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (char*,char const*) ;

__attribute__((used)) static int FUNC_3(cl_platform_id VAR_1,
                                           const char *VAR_2)
{
    char *VAR_3;
    int VAR_4 = 0;
    VAR_3 = FUNC_1(VAR_1,
                                     VAR_0);
    if (VAR_3 && FUNC_2(VAR_3, VAR_2))
        VAR_4 = 1;
    FUNC_0(VAR_3);
    return VAR_4;
}
