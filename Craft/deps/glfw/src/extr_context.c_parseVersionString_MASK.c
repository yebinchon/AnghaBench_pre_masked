
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* GetString ) (int ) ;} ;
typedef TYPE_1__ _GLFWwindow ;
typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (char const*,char*,int*,int*,int*) ;
 size_t FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*,size_t const) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static GLboolean FUNC_6(int* VAR_6, int* VAR_7, int* VAR_8, int* VAR_9)
{
    int VAR_10;
    _GLFWwindow* VAR_11;
    const char* VAR_12;
    const char* VAR_13[] =
    {
        "OpenGL ES-CM ",
        "OpenGL ES-CL ",
        "OpenGL ES ",
        ((void*)0)
    };

    *VAR_6 = VAR_0;

    VAR_11 = FUNC_1();

    VAR_12 = (const char*) VAR_11->GetString(VAR_5);
    if (!VAR_12)
    {
        FUNC_0(VAR_2,
                        "Failed to retrieve context version string");
        return VAR_3;
    }

    for (VAR_10 = 0; VAR_13[VAR_10]; VAR_10++)
    {
        const size_t VAR_14 = FUNC_3(VAR_13[VAR_10]);

        if (FUNC_4(VAR_12, VAR_13[VAR_10], VAR_14) == 0)
        {
            VAR_12 += VAR_14;
            *VAR_6 = VAR_1;
            break;
        }
    }

    if (!FUNC_2(VAR_12, "%d.%d.%d", VAR_7, VAR_8, VAR_9))
    {
        FUNC_0(VAR_2,
                        "No version found in context version string");
        return VAR_3;
    }

    return VAR_4;
}
