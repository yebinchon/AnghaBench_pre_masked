
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char const* name; } ;
typedef TYPE_2__ _GLFWjoystickLinux ;
struct TYPE_5__ {TYPE_2__* js; } ;
struct TYPE_7__ {TYPE_1__ linux_js; } ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

const char* FUNC_1(int VAR_1)
{
    _GLFWjoystickLinux* VAR_2 = VAR_0.linux_js.js + VAR_1;
    if (!FUNC_0(VAR_2))
        return ((void*)0);

    return VAR_2->name;
}
