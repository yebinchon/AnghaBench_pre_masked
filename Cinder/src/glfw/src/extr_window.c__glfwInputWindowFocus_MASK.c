
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* focus ) (int *,scalar_t__) ;} ;
struct TYPE_7__ {scalar_t__* keys; scalar_t__* mouseButtons; TYPE_1__ callbacks; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int GLFWwindow ;
typedef scalar_t__ GLFWbool ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int,int ,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__) ;

void FUNC_4(_GLFWwindow* VAR_4, GLFWbool VAR_5)
{
    if (VAR_5)
    {
        if (VAR_4->callbacks.focus)
            VAR_4->callbacks.focus((GLFWwindow*) VAR_4, VAR_5);
    }
    else
    {
        int VAR_6;

        if (VAR_4->callbacks.focus)
            VAR_4->callbacks.focus((GLFWwindow*) VAR_4, VAR_5);


        for (VAR_6 = 0; VAR_6 <= VAR_0; VAR_6++)
        {
            if (VAR_4->keys[VAR_6] == VAR_2)
                FUNC_0(VAR_4, VAR_6, 0, VAR_3, 0);
        }


        for (VAR_6 = 0; VAR_6 <= VAR_1; VAR_6++)
        {
            if (VAR_4->mouseButtons[VAR_6] == VAR_2)
                FUNC_1(VAR_4, VAR_6, VAR_3, 0);
        }
    }
}
