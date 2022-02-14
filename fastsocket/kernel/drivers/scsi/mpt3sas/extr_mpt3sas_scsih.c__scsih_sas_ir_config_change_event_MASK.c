
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct fw_event_work {TYPE_2__* event_data; } ;
struct MPT3SAS_ADAPTER {int logging_level; scalar_t__ shost_recovery; } ;
struct TYPE_10__ {int NumElements; int * ConfigElement; int Flags; } ;
struct TYPE_9__ {int ReasonCode; int VolDevHandle; int PhysDiskNum; int PhysDiskDevHandle; } ;
typedef TYPE_1__ Mpi2EventIrConfigElement_t ;
typedef TYPE_2__ Mpi2EventDataIrConfigChangeList_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,int ,int ) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,TYPE_2__*) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*,TYPE_1__*) ;
 int FUNC_3 (struct MPT3SAS_ADAPTER*,TYPE_1__*) ;
 int FUNC_4 (struct MPT3SAS_ADAPTER*,TYPE_1__*) ;
 int FUNC_5 (struct MPT3SAS_ADAPTER*,TYPE_1__*) ;
 int FUNC_6 (struct MPT3SAS_ADAPTER*,TYPE_1__*) ;
 int FUNC_7 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct MPT3SAS_ADAPTER *VAR_2,
 struct fw_event_work *VAR_3)
{
 Mpi2EventIrConfigElement_t *VAR_4;
 int VAR_5;
 u8 VAR_6;
 Mpi2EventDataIrConfigChangeList_t *VAR_7 = VAR_3->event_data;







 VAR_6 = (FUNC_9(VAR_7->Flags) &
     VAR_0) ? 1 : 0;

 VAR_4 = (Mpi2EventIrConfigElement_t *)&VAR_7->ConfigElement[0];
 if (VAR_2->shost_recovery) {

  for (VAR_5 = 0; VAR_5 < VAR_7->NumElements; VAR_5++, VAR_4++) {
   if (VAR_4->ReasonCode == 134)
    FUNC_0(VAR_2,
     FUNC_8(VAR_4->PhysDiskDevHandle),
     VAR_4->PhysDiskNum);
  }
  return;
 }
 for (VAR_5 = 0; VAR_5 < VAR_7->NumElements; VAR_5++, VAR_4++) {

  switch (VAR_4->ReasonCode) {
  case 129:
  case 135:
   if (!VAR_6)
    FUNC_6(VAR_2, VAR_4);
   break;
  case 128:
  case 131:
   if (!VAR_6)
    FUNC_7(VAR_2,
        FUNC_8(VAR_4->VolDevHandle));
   break;
  case 133:
   FUNC_5(VAR_2, VAR_4);
   break;
  case 132:
   FUNC_4(VAR_2, VAR_4);
   break;
  case 134:
   FUNC_2(VAR_2, VAR_4);
   break;
  case 130:
   FUNC_3(VAR_2, VAR_4);
   break;
  }
 }
}
