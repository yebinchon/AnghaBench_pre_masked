
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _GLFWwindow ;
typedef int MirPointerEvent ;
typedef int MirPointerButton ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,int,int const) ;
 int FUNC_1 (int) ;





 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;

__attribute__((used)) static void FUNC_4(_GLFWwindow* VAR_5,
                              int VAR_6,
                              const MirPointerEvent* VAR_7)
{
    MirPointerButton VAR_8 = FUNC_2 (VAR_7);
    int VAR_9 = FUNC_3(VAR_7);
    const int VAR_10 = FUNC_1(VAR_9);
    int VAR_11;

    switch (VAR_8)
    {
        case 130:
            VAR_11 = VAR_2;
            break;
        case 129:
            VAR_11 = VAR_4;
            break;
        case 128:
            VAR_11 = VAR_3;
            break;
        case 131:

            VAR_11 = VAR_0;
            break;
        case 132:

            VAR_11 = VAR_1;
            break;
        default:
            break;
    }

    FUNC_0(VAR_5, VAR_11, VAR_6, VAR_10);
}
