
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int shell_surface; } ;
struct TYPE_11__ {TYPE_2__ wl; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_9__ {int output; } ;
struct TYPE_12__ {TYPE_1__ wl; } ;
typedef TYPE_4__ _GLFWmonitor ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(_GLFWwindow* VAR_1,
                                   _GLFWmonitor* VAR_2,
                                   int VAR_3, int VAR_4,
                                   int VAR_5, int VAR_6,
                                   int VAR_7)
{
    if (VAR_2)
    {
        FUNC_1(
            VAR_1->wl.shell_surface,
            VAR_0,
            VAR_7 * 1000,
            VAR_2->wl.output);
    }
    else
    {
        FUNC_2(VAR_1->wl.shell_surface);
    }
    FUNC_0(VAR_1, VAR_2);
}
