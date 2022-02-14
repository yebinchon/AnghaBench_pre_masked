
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct fw_event_work {TYPE_2__* event_data; } ;
struct MPT2SAS_ADAPTER {int logging_level; int is_warpdrive; scalar_t__ shost_recovery; int hide_ir_msg; } ;
struct TYPE_10__ {int NumElements; int * ConfigElement; int Flags; } ;
struct TYPE_9__ {int ReasonCode; int VolDevHandle; } ;
typedef TYPE_1__ Mpi2EventIrConfigElement_t ;
typedef TYPE_2__ Mpi2EventDataIrConfigChangeList_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct MPT2SAS_ADAPTER*,TYPE_2__*) ;
 int FUNC_1 (struct MPT2SAS_ADAPTER*,TYPE_1__*) ;
 int FUNC_2 (struct MPT2SAS_ADAPTER*,TYPE_1__*) ;
 int FUNC_3 (struct MPT2SAS_ADAPTER*,TYPE_1__*) ;
 int FUNC_4 (struct MPT2SAS_ADAPTER*,TYPE_1__*) ;
 int FUNC_5 (struct MPT2SAS_ADAPTER*,TYPE_1__*) ;
 int FUNC_6 (struct MPT2SAS_ADAPTER*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct MPT2SAS_ADAPTER *VAR_2,
    struct fw_event_work *VAR_3)
{
 Mpi2EventIrConfigElement_t *VAR_4;
 int VAR_5;
 u8 VAR_6;
 Mpi2EventDataIrConfigChangeList_t *VAR_7 = VAR_3->event_data;
 if (VAR_2->shost_recovery)
  return;

 VAR_6 = (FUNC_8(VAR_7->Flags) &
     VAR_0) ? 1 : 0;

 VAR_4 = (Mpi2EventIrConfigElement_t *)&VAR_7->ConfigElement[0];
 for (VAR_5 = 0; VAR_5 < VAR_7->NumElements; VAR_5++, VAR_4++) {

  switch (VAR_4->ReasonCode) {
  case 129:
  case 135:
   if (!VAR_6)
    FUNC_5(VAR_2, VAR_4);
   break;
  case 128:
  case 131:
   if (!VAR_6)
    FUNC_6(VAR_2,
        FUNC_7(VAR_4->VolDevHandle));
   break;
  case 133:
   if (!VAR_2->is_warpdrive)
    FUNC_4(VAR_2, VAR_4);
   break;
  case 132:
   if (!VAR_2->is_warpdrive)
    FUNC_3(VAR_2, VAR_4);
   break;
  case 134:
   if (!VAR_2->is_warpdrive)
    FUNC_1(VAR_2, VAR_4);
   break;
  case 130:
   if (!VAR_2->is_warpdrive)
    FUNC_2(VAR_2, VAR_4);
   break;
  }
 }
}
