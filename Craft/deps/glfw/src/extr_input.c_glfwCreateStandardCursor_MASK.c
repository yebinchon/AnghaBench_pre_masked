
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ _GLFWcursor ;
struct TYPE_6__ {TYPE_1__* cursorListHead; } ;
typedef int GLFWcursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 TYPE_4__ VAR_7 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;

GLFWcursor* FUNC_5(int VAR_8)
{
    _GLFWcursor* VAR_9;

    FUNC_0(((void*)0));

    if (VAR_8 != VAR_0 &&
        VAR_8 != VAR_4 &&
        VAR_8 != VAR_1 &&
        VAR_8 != VAR_2 &&
        VAR_8 != VAR_3 &&
        VAR_8 != VAR_6)
    {
        FUNC_1(VAR_5, "Invalid standard cursor");
        return ((void*)0);
    }

    VAR_9 = FUNC_3(1, sizeof(_GLFWcursor));
    VAR_9->next = VAR_7.cursorListHead;
    VAR_7.cursorListHead = VAR_9;

    if (!FUNC_2(VAR_9, VAR_8))
    {
        FUNC_4((GLFWcursor*) VAR_9);
        return ((void*)0);
    }

    return (GLFWcursor*) VAR_9;
}
