
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* data; } ;
struct TYPE_5__ {TYPE_1__ desc; int pedestrian; } ;
typedef TYPE_2__ icf_context_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(void* VAR_0)
{
 icf_context_t* VAR_1 = (icf_context_t*)VAR_0;
 FUNC_0(VAR_1->pedestrian);
 FUNC_1(VAR_1->desc.data);
 FUNC_1(VAR_1);
}
