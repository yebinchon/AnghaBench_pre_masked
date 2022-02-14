
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _GLFWwindow ;
typedef int MirKeyboardEvent ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,long const,int const,int const) ;
 int FUNC_1 (int *,int ,int const,int const,int const) ;
 long FUNC_2 (int const) ;
 int FUNC_3 (int const) ;
 int const VAR_4 ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int const) ;

__attribute__((used)) static void FUNC_9(const MirKeyboardEvent* VAR_5, _GLFWwindow* VAR_6)
{
    const int VAR_7 = FUNC_4 (VAR_5);
    const int VAR_8 = FUNC_7(VAR_5);
    const int VAR_9 = FUNC_5 (VAR_5);
    const int VAR_10 = FUNC_6(VAR_5);

    const int VAR_11 = VAR_7 == VAR_4 ? VAR_3 : VAR_2;
    const int VAR_12 = FUNC_3(VAR_10);
    const long VAR_13 = FUNC_2(VAR_9);
    const int VAR_14 = !(VAR_12 & (VAR_1 | VAR_0));

    FUNC_1(VAR_6, FUNC_8(VAR_8), VAR_8, VAR_11, VAR_12);

    if (VAR_13 != -1)
        FUNC_0(VAR_6, VAR_13, VAR_12, VAR_14);
}
