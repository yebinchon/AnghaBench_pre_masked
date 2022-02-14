
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int handle; } ;
struct TYPE_12__ {TYPE_1__ x11; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_11__ {int display; int restoreCursorPosY; int restoreCursorPosX; TYPE_3__* disabledCursorWindow; int cursor; } ;
struct TYPE_13__ {TYPE_2__ x11; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_9__ VAR_7 ;
 int FUNC_3 (TYPE_3__*,int *,int *) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;

void FUNC_7(_GLFWwindow* VAR_8, int VAR_9)
{
    if (VAR_9 == VAR_3)
    {
        VAR_7.x11.disabledCursorWindow = VAR_8;
        FUNC_3(VAR_8,
                                  &VAR_7.x11.restoreCursorPosX,
                                  &VAR_7.x11.restoreCursorPosY);
        FUNC_5(VAR_8);
        FUNC_1(VAR_7.x11.display, VAR_8->x11.handle, VAR_6,
                     VAR_0 | VAR_1 | VAR_5,
                     VAR_4, VAR_4,
                     VAR_8->x11.handle, VAR_7.x11.cursor, VAR_2);
    }
    else if (VAR_7.x11.disabledCursorWindow == VAR_8)
    {
        VAR_7.x11.disabledCursorWindow = ((void*)0);
        FUNC_2(VAR_7.x11.display, VAR_2);
        FUNC_4(VAR_8,
                                  VAR_7.x11.restoreCursorPosX,
                                  VAR_7.x11.restoreCursorPosY);
    }

    FUNC_6(VAR_8);
    FUNC_0(VAR_7.x11.display);
}
