
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;







 int VAR_0 ;
 int VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,float) ;

__attribute__((used)) static void FUNC_2(GLFWwindow* VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    if (VAR_7 != VAR_0)
        return;

    switch (VAR_5)
    {
        case 132:
        {
            FUNC_0(VAR_4, VAR_1);
            break;
        }

        case 131:
        case 129:
        {
            FUNC_1(VAR_4, VAR_3 + VAR_2);
            break;
        }

        case 130:
        case 128:
        {
            if (VAR_3 - VAR_2 > 0.f)
                FUNC_1(VAR_4, VAR_3 - VAR_2);

            break;
        }
    }
}
