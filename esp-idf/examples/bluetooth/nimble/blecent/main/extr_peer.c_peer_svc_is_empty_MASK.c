
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ end_handle; scalar_t__ start_handle; } ;
struct peer_svc {TYPE_1__ svc; } ;



int
FUNC_0(const struct peer_svc *VAR_0)
{
    return VAR_0->svc.end_handle <= VAR_0->svc.start_handle;
}
