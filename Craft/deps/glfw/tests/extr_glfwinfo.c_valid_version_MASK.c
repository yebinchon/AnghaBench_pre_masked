
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*,int*,int*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static GLboolean FUNC_2(void)
{
    int VAR_5, VAR_6, VAR_7;
    FUNC_0(&VAR_5, &VAR_6, &VAR_7);

    if (VAR_5 != VAR_0)
    {
        FUNC_1("*** ERROR: GLFW major version mismatch! ***\n");
        return VAR_3;
    }

    if (VAR_6 != VAR_1 || VAR_7 != VAR_2)
        FUNC_1("*** WARNING: GLFW version mismatch! ***\n");

    return VAR_4;
}
