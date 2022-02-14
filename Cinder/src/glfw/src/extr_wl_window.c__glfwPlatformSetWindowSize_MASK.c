
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int scale; int width; int height; int native; } ;
struct TYPE_7__ {TYPE_1__ wl; } ;
typedef TYPE_2__ _GLFWwindow ;


 int FUNC_0 (TYPE_2__*,int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int,int,int ,int ) ;

void FUNC_3(_GLFWwindow* VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3 = VAR_1 * VAR_0->wl.scale;
    int VAR_4 = VAR_2 * VAR_0->wl.scale;
    VAR_0->wl.width = VAR_1;
    VAR_0->wl.height = VAR_2;
    FUNC_2(VAR_0->wl.native, VAR_3, VAR_4, 0, 0);
    FUNC_1(VAR_0);
    FUNC_0(VAR_0, VAR_3, VAR_4);
}
