
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cursorPosX; int cursorPosY; } ;
typedef TYPE_1__ _GLFWwindow ;
typedef int MirPointerEvent ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int const*,int ) ;

__attribute__((used)) static void FUNC_3(_GLFWwindow* VAR_4,
                                const MirPointerEvent* VAR_5)
{
    int VAR_6 = VAR_4->cursorPosX;
    int VAR_7 = VAR_4->cursorPosY;
    int VAR_8 = FUNC_2(VAR_5, VAR_2);
    int VAR_9 = FUNC_2(VAR_5, VAR_3);
    int VAR_10 = FUNC_2(VAR_5, VAR_0);
    int VAR_11 = FUNC_2(VAR_5, VAR_1);

    if (VAR_6 != VAR_8 || VAR_7 != VAR_9)
      FUNC_0(VAR_4, VAR_8, VAR_9);
    if (VAR_10 != 0 || VAR_11 != 0)
      FUNC_1(VAR_4, VAR_10, VAR_11);
}
