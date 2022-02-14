
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int crtc; } ;
struct TYPE_4__ {TYPE_1__ x11; } ;
typedef TYPE_2__ _GLFWmonitor ;
typedef int RRCrtc ;
typedef int GLFWmonitor ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

RRCrtc FUNC_1(GLFWmonitor* VAR_1)
{
    _GLFWmonitor* VAR_2 = (_GLFWmonitor*) VAR_1;
    FUNC_0(VAR_0);
    return VAR_2->x11.crtc;
}
