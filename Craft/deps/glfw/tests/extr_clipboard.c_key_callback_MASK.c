
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4(GLFWwindow* VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    if (VAR_6 != VAR_0)
        return;

    switch (VAR_4)
    {
        case 129:
            FUNC_2(VAR_3, VAR_1);
            break;

        case 128:
            if (VAR_7 == VAR_2)
            {
                const char* VAR_8;

                VAR_8 = FUNC_0(VAR_3);
                if (VAR_8)
                    FUNC_3("Clipboard contains \"%s\"\n", VAR_8);
                else
                    FUNC_3("Clipboard does not contain a string\n");
            }
            break;

        case 130:
            if (VAR_7 == VAR_2)
            {
                const char* VAR_9 = "Hello GLFW World!";
                FUNC_1(VAR_3, VAR_9);
                FUNC_3("Setting clipboard to \"%s\"\n", VAR_9);
            }
            break;
    }
}
