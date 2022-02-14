
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* data; } ;
struct TYPE_5__ {TYPE_1__ desc; int semaphore; int tlds; } ;
typedef TYPE_2__ tld_context_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(void* VAR_0)
{
 tld_context_t* VAR_1 = (tld_context_t*)VAR_0;
 FUNC_0(VAR_1->tlds);
 FUNC_1(VAR_1->semaphore);
 FUNC_2(VAR_1->desc.data);
 FUNC_2(VAR_1);
}
