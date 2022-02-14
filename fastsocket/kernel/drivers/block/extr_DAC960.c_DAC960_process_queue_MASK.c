
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {TYPE_1__* rq_disk; int end_io_data; } ;
struct TYPE_10__ {long LogicalDriveNumber; int DmaDirection; int SegmentCount; int cmd_sglist; struct request* Request; int BlockCount; int BlockNumber; int Completion; int CommandType; } ;
struct TYPE_9__ {int PCIDevice; } ;
struct TYPE_8__ {scalar_t__ private_data; } ;
typedef TYPE_2__ DAC960_Controller_T ;
typedef TYPE_3__ DAC960_Command_T ;


 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct request* FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request_queue*,struct request*,int ) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (struct request*) ;
 int FUNC_6 (struct request*) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (struct request*) ;

__attribute__((used)) static int FUNC_9(DAC960_Controller_T *VAR_5, struct request_queue *VAR_6)
{
 struct request *VAR_7;
 DAC960_Command_T *VAR_8;

   while(1) {
 VAR_7 = FUNC_2(VAR_6);
 if (!VAR_7)
  return 1;

 VAR_8 = FUNC_0(VAR_5);
 if (VAR_8 == ((void*)0))
  return 0;

 if (FUNC_8(VAR_7) == VAR_4) {
  VAR_8->DmaDirection = VAR_2;
  VAR_8->CommandType = VAR_0;
 } else {
  VAR_8->DmaDirection = VAR_3;
  VAR_8->CommandType = VAR_1;
 }
 VAR_8->Completion = VAR_7->end_io_data;
 VAR_8->LogicalDriveNumber = (long)VAR_7->rq_disk->private_data;
 VAR_8->BlockNumber = FUNC_4(VAR_7);
 VAR_8->BlockCount = FUNC_5(VAR_7);
 VAR_8->Request = VAR_7;
 FUNC_6(VAR_7);
 VAR_8->SegmentCount = FUNC_3(VAR_6,
    VAR_8->Request, VAR_8->cmd_sglist);

 VAR_8->SegmentCount = FUNC_7(VAR_5->PCIDevice, VAR_8->cmd_sglist,
   VAR_8->SegmentCount, VAR_8->DmaDirection);

 FUNC_1(VAR_8);
  }
}
