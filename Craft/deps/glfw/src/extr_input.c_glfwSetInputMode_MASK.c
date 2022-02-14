
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _GLFWwindow ;
typedef int GLFWwindow ;



 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(GLFWwindow* VAR_3, int VAR_4, int VAR_5)
{
    _GLFWwindow* VAR_6 = (_GLFWwindow*) VAR_3;

    FUNC_0();

    switch (VAR_4)
    {
        case 130:
            FUNC_2(VAR_6, VAR_5);
            break;
        case 129:
            FUNC_3(VAR_6, VAR_5 ? VAR_2 : VAR_1);
            break;
        case 128:
            FUNC_4(VAR_6, VAR_5 ? VAR_2 : VAR_1);
            break;
        default:
            FUNC_1(VAR_0, "Invalid input mode");
            break;
    }
}
