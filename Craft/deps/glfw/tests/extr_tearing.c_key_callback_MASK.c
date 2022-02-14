
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;





 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(GLFWwindow* VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    if (VAR_6 != VAR_0)
        return;

    switch (VAR_4)
    {
        case 128:
        {
            if (VAR_1 + 1 > VAR_1)
                FUNC_1(VAR_3, VAR_1 + 1);
            break;
        }

        case 130:
        {
            if (VAR_2)
            {
                if (VAR_1 - 1 < VAR_1)
                    FUNC_1(VAR_3, VAR_1 - 1);
            }
            else
            {
                if (VAR_1 - 1 >= 0)
                    FUNC_1(VAR_3, VAR_1 - 1);
            }
            break;
        }

        case 129:
            FUNC_0(VAR_3, 1);
            break;
    }
}
