
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_5__ {int BlockCount; int * Completion; int DmaDirection; int SegmentCount; int cmd_sglist; TYPE_1__* Controller; struct request* Request; } ;
struct TYPE_4__ {int PCIDevice; } ;
typedef TYPE_2__ DAC960_Command_T ;


 int VAR_0 ;
 int FUNC_0 (struct request*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static inline bool FUNC_3(DAC960_Command_T *VAR_1,
       bool VAR_2)
{
 struct request *VAR_3 = VAR_1->Request;
 int VAR_4 = VAR_2 ? 0 : -VAR_0;

 FUNC_2(VAR_1->Controller->PCIDevice, VAR_1->cmd_sglist,
  VAR_1->SegmentCount, VAR_1->DmaDirection);

  if (!FUNC_0(VAR_3, VAR_4, VAR_1->BlockCount << 9)) {
  if (VAR_1->Completion) {
   FUNC_1(VAR_1->Completion);
   VAR_1->Completion = ((void*)0);
  }
  return 1;
 }
 return 0;
}
