
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int warpPosX; int warpPosY; int handle; } ;
struct TYPE_8__ {TYPE_2__ x11; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_6__ {int display; } ;
struct TYPE_9__ {TYPE_1__ x11; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int,int) ;
 TYPE_5__ VAR_1 ;

void FUNC_1(_GLFWwindow* VAR_2, double VAR_3, double VAR_4)
{

    VAR_2->x11.warpPosX = (int) VAR_3;
    VAR_2->x11.warpPosY = (int) VAR_4;

    FUNC_0(VAR_1.x11.display, VAR_0, VAR_2->x11.handle,
                 0,0,0,0, (int) VAR_3, (int) VAR_4);
}
