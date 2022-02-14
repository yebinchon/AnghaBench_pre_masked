
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int monitorsCount; int scale; int width; int height; int native; int surface; TYPE_3__** monitors; } ;
struct TYPE_13__ {TYPE_4__ wl; } ;
typedef TYPE_5__ _GLFWwindow ;
struct TYPE_9__ {int wl_compositor_version; } ;
struct TYPE_14__ {TYPE_1__ wl; } ;
struct TYPE_10__ {int scale; } ;
struct TYPE_11__ {TYPE_2__ wl; } ;


 TYPE_8__ VAR_0 ;
 int FUNC_0 (TYPE_5__*,int,int) ;
 int FUNC_1 (int ,int,int,int ,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(_GLFWwindow* VAR_1)
{
    int VAR_2, VAR_3;
    int VAR_4 = 1;
    int VAR_5;
    int VAR_6;


    if (VAR_0.wl.wl_compositor_version < 3)
        return;


    for (VAR_5 = 0; VAR_5 < VAR_1->wl.monitorsCount; ++VAR_5)
    {
        VAR_6 = VAR_1->wl.monitors[VAR_5]->wl.scale;
        if (VAR_4 < VAR_6)
            VAR_4 = VAR_6;
    }


    if (VAR_4 != VAR_1->wl.scale)
    {
        VAR_1->wl.scale = VAR_4;
        VAR_2 = VAR_1->wl.width * VAR_4;
        VAR_3 = VAR_1->wl.height * VAR_4;
        FUNC_2(VAR_1->wl.surface, VAR_4);
        FUNC_1(VAR_1->wl.native, VAR_2, VAR_3, 0, 0);
        FUNC_0(VAR_1, VAR_2, VAR_3);
    }
}
