
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*,int*) ;
 int FUNC_1 (int *,int*,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 double VAR_5 ;
 double VAR_6 ;

__attribute__((used)) static void FUNC_2(GLFWwindow* VAR_7, double VAR_8, double VAR_9)
{
    int VAR_10, VAR_11, VAR_12, VAR_13;
    double VAR_14;

    FUNC_1(VAR_7, &VAR_10, &VAR_11);
    FUNC_0(VAR_7, &VAR_12, &VAR_13);

    VAR_14 = (double) VAR_12 / (double) VAR_10;

    VAR_8 *= VAR_14;
    VAR_9 *= VAR_14;


    switch (VAR_0)
    {
        case 1:
            VAR_2 += (int) (VAR_9 - VAR_6);
            VAR_4 += (int) (VAR_8 - VAR_5);
            VAR_1 = 1;
            break;
        case 3:
            VAR_2 += (int) (VAR_9 - VAR_6);
            VAR_3 += (int) (VAR_8 - VAR_5);
            VAR_1 = 1;
            break;
        case 4:
            VAR_3 += (int) (VAR_8 - VAR_5);
            VAR_4 += (int) (VAR_9 - VAR_6);
            VAR_1 = 1;
            break;
        default:

            break;
    }


    VAR_5 = VAR_8;
    VAR_6 = VAR_9;
}
