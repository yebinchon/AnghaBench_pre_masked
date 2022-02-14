
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; int native; } ;
struct TYPE_5__ {TYPE_1__ wl; } ;
typedef TYPE_2__ _GLFWwindow ;


 int FUNC_0 (int ,int,int,int ,int ) ;

void FUNC_1(_GLFWwindow* VAR_0, int VAR_1, int VAR_2)
{
    FUNC_0(VAR_0->wl.native, VAR_1, VAR_2, 0, 0);
    VAR_0->wl.width = VAR_1;
    VAR_0->wl.height = VAR_2;
}
