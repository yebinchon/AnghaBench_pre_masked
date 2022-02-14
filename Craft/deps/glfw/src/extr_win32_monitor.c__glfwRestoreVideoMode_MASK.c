
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ modeChanged; int adapterName; } ;
struct TYPE_5__ {TYPE_1__ win32; } ;
typedef TYPE_2__ _GLFWmonitor ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int ,int *) ;
 scalar_t__ VAR_1 ;

void FUNC_1(_GLFWmonitor* VAR_2)
{
    if (VAR_2->win32.modeChanged)
    {
        FUNC_0(VAR_2->win32.adapterName,
                                 ((void*)0), ((void*)0), VAR_0, ((void*)0));
        VAR_2->win32.modeChanged = VAR_1;
    }
}
