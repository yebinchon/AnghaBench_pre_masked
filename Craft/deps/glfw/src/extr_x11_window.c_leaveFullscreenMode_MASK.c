
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int monitor; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_7__ {scalar_t__ count; int exposure; int blanking; int interval; int timeout; } ;
struct TYPE_6__ {TYPE_2__ saver; int display; } ;
struct TYPE_9__ {TYPE_1__ x11; } ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 TYPE_5__ VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(_GLFWwindow* VAR_1)
{
    FUNC_1(VAR_1->monitor);

    VAR_0.x11.saver.count--;

    if (VAR_0.x11.saver.count == 0)
    {

        FUNC_0(VAR_0.x11.display,
                        VAR_0.x11.saver.timeout,
                        VAR_0.x11.saver.interval,
                        VAR_0.x11.saver.blanking,
                        VAR_0.x11.saver.exposure);
    }
}
