
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* focus ) (int *,scalar_t__) ;} ;
struct TYPE_8__ {scalar_t__* keys; scalar_t__* mouseButtons; TYPE_1__ callbacks; } ;
typedef TYPE_2__ _GLFWwindow ;
struct TYPE_9__ {TYPE_2__* cursorWindow; } ;
typedef scalar_t__ GLboolean ;
typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_6__ VAR_4 ;
 int FUNC_0 (TYPE_2__*,int,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int,int ,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__) ;

void FUNC_4(_GLFWwindow* VAR_5, GLboolean VAR_6)
{
    if (VAR_6)
    {
        VAR_4.cursorWindow = VAR_5;

        if (VAR_5->callbacks.focus)
            VAR_5->callbacks.focus((GLFWwindow*) VAR_5, VAR_6);
    }
    else
    {
        int VAR_7;

        VAR_4.cursorWindow = ((void*)0);

        if (VAR_5->callbacks.focus)
            VAR_5->callbacks.focus((GLFWwindow*) VAR_5, VAR_6);


        for (VAR_7 = 0; VAR_7 <= VAR_0; VAR_7++)
        {
            if (VAR_5->keys[VAR_7] == VAR_2)
                FUNC_0(VAR_5, VAR_7, 0, VAR_3, 0);
        }


        for (VAR_7 = 0; VAR_7 <= VAR_1; VAR_7++)
        {
            if (VAR_5->mouseButtons[VAR_7] == VAR_2)
                FUNC_1(VAR_5, VAR_7, VAR_3, 0);
        }
    }
}
