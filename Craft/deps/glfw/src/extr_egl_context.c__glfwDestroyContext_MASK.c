
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ context; scalar_t__ surface; int * visual; int * client; } ;
struct TYPE_7__ {scalar_t__ api; } ;
struct TYPE_10__ {TYPE_3__ egl; TYPE_1__ context; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_8__ {int display; } ;
struct TYPE_11__ {TYPE_2__ egl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_6__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

void FUNC_4(_GLFWwindow* VAR_4)
{





    {
        if (VAR_4->egl.client)
        {
            FUNC_1(VAR_4->egl.client);
            VAR_4->egl.client = ((void*)0);
        }
    }
    if (VAR_4->egl.surface)
    {
        FUNC_3(VAR_3.egl.display, VAR_4->egl.surface);
        VAR_4->egl.surface = VAR_1;
    }

    if (VAR_4->egl.context)
    {
        FUNC_2(VAR_3.egl.display, VAR_4->egl.context);
        VAR_4->egl.context = VAR_0;
    }
}
