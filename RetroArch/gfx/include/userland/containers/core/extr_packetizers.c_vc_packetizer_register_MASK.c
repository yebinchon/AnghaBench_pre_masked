
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; int name; } ;
typedef TYPE_1__ VC_PACKETIZER_REGISTRY_ENTRY_T ;


 int FUNC_0 (int ,char*,int ) ;
 TYPE_1__* VAR_0 ;

void FUNC_1(VC_PACKETIZER_REGISTRY_ENTRY_T *VAR_1)
{
   FUNC_0(0, "registering packetizer %s", VAR_1->name);
   VAR_1->next = VAR_0;
   VAR_0 = VAR_1;
}
