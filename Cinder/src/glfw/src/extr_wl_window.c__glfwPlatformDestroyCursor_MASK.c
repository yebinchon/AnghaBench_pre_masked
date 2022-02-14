
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ buffer; scalar_t__ image; } ;
struct TYPE_5__ {TYPE_1__ wl; } ;
typedef TYPE_2__ _GLFWcursor ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(_GLFWcursor* VAR_0)
{

    if (VAR_0->wl.image)
        return;

    if (VAR_0->wl.buffer)
        FUNC_0(VAR_0->wl.buffer);
}
