
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;




 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,double,char*) ;

__attribute__((used)) static void FUNC_4(GLFWwindow* VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    FUNC_3("%0.2f Key %s\n",
           FUNC_0(),
           VAR_5 == VAR_0 ? "pressed" : "released");

    if (VAR_5 != VAR_0)
        return;

    switch (VAR_3)
    {
        case 128:
            FUNC_1(VAR_2);
            break;
        case 129:
            FUNC_2(VAR_2, VAR_1);
            break;
    }
}
