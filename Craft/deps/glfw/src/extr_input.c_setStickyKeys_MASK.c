
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stickyKeys; scalar_t__* keys; } ;
typedef TYPE_1__ _GLFWwindow ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(_GLFWwindow* VAR_3, int VAR_4)
{
    if (VAR_3->stickyKeys == VAR_4)
        return;

    if (!VAR_4)
    {
        int VAR_5;


        for (VAR_5 = 0; VAR_5 <= VAR_0; VAR_5++)
        {
            if (VAR_3->keys[VAR_5] == VAR_2)
                VAR_3->keys[VAR_5] = VAR_1;
        }
    }

    VAR_3->stickyKeys = VAR_4;
}
