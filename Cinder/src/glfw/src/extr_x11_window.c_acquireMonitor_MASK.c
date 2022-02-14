
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_17__ {int handle; scalar_t__ overrideRedirect; } ;
struct TYPE_18__ {TYPE_7__* monitor; TYPE_3__ x11; int videoMode; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_20__ {int window; } ;
struct TYPE_19__ {int height; int width; } ;
struct TYPE_15__ {scalar_t__ count; int exposure; int blanking; int interval; int timeout; } ;
struct TYPE_16__ {int display; TYPE_1__ saver; } ;
struct TYPE_14__ {TYPE_2__ x11; } ;
typedef TYPE_5__ GLFWvidmode ;
typedef int GLFWbool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int,int,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 TYPE_13__ VAR_2 ;
 int FUNC_3 (TYPE_7__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_7__*,int*,int*) ;
 int FUNC_5 (TYPE_7__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_7__*,int *) ;

__attribute__((used)) static GLFWbool FUNC_7(_GLFWwindow* VAR_3)
{
    GLFWbool VAR_4;

    if (VAR_2.x11.saver.count == 0)
    {

        FUNC_0(VAR_2.x11.display,
                        &VAR_2.x11.saver.timeout,
                        &VAR_2.x11.saver.interval,
                        &VAR_2.x11.saver.blanking,
                        &VAR_2.x11.saver.exposure);


        FUNC_2(VAR_2.x11.display, 0, 0, VAR_1,
                        VAR_0);
    }

    if (!VAR_3->monitor->window)
        VAR_2.x11.saver.count++;

    VAR_4 = FUNC_6(VAR_3->monitor, &VAR_3->videoMode);

    if (VAR_3->x11.overrideRedirect)
    {
        int VAR_5, VAR_6;
        GLFWvidmode VAR_7;


        FUNC_4(VAR_3->monitor, &VAR_5, &VAR_6);
        FUNC_5(VAR_3->monitor, &VAR_7);

        FUNC_1(VAR_2.x11.display, VAR_3->x11.handle,
                          VAR_5, VAR_6, VAR_7.width, VAR_7.height);
    }

    FUNC_3(VAR_3->monitor, VAR_3);
    return VAR_4;
}
