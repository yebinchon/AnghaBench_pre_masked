
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int cursorMode; int cursorPosX; int cursorPosY; } ;
typedef TYPE_1__ _GLFWwindow ;
struct TYPE_9__ {int cursorPosX; int cursorPosY; TYPE_1__* cursorWindow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_7__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int*,int*) ;
 int FUNC_3 (TYPE_1__*,int*,int*) ;
 int FUNC_4 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_5(_GLFWwindow* VAR_5, int VAR_6)
{
    const int VAR_7 = VAR_5->cursorMode;

    if (VAR_6 != VAR_2 &&
        VAR_6 != VAR_1 &&
        VAR_6 != VAR_0)
    {
        FUNC_0(VAR_3, "Invalid cursor mode");
        return;
    }

    if (VAR_7 == VAR_6)
        return;

    VAR_5->cursorMode = VAR_6;

    if (VAR_4.cursorWindow == VAR_5)
    {
        if (VAR_7 == VAR_0)
        {
            FUNC_4(VAR_5,
                                      VAR_4.cursorPosX,
                                      VAR_4.cursorPosY);
        }
        else if (VAR_6 == VAR_0)
        {
            int VAR_8, VAR_9;

            FUNC_2(VAR_5,
                                      &VAR_4.cursorPosX,
                                      &VAR_4.cursorPosY);

            VAR_5->cursorPosX = VAR_4.cursorPosX;
            VAR_5->cursorPosY = VAR_4.cursorPosY;

            FUNC_3(VAR_5, &VAR_8, &VAR_9);
            FUNC_4(VAR_5, VAR_8 / 2, VAR_9 / 2);
        }

        FUNC_1(VAR_5);
    }
}
