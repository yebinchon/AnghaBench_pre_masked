
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int sc_data_direction; } ;
struct scatterlist {int dummy; } ;
struct pvscsi_ctx {void* dataPA; void* sglPA; struct scatterlist* sgl; } ;
struct pvscsi_adapter {int dev; } ;
struct PVSCSIRingReqDesc {unsigned int dataLen; void* dataAddr; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 void* FUNC_0 (int ,struct scatterlist*,unsigned int,int ) ;
 int FUNC_1 (struct pvscsi_ctx*,struct scatterlist*,int) ;
 unsigned int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 unsigned int FUNC_4 (struct scsi_cmnd*) ;
 struct scatterlist* FUNC_5 (struct scsi_cmnd*) ;
 void* FUNC_6 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_7(struct pvscsi_adapter *VAR_3,
          struct pvscsi_ctx *VAR_4, struct scsi_cmnd *VAR_5,
          struct PVSCSIRingReqDesc *VAR_6)
{
 unsigned VAR_7;
 unsigned VAR_8 = FUNC_2(VAR_5);
 struct scatterlist *VAR_9;

 VAR_6->dataLen = VAR_8;
 VAR_6->dataAddr = 0;
 if (VAR_8 == 0)
  return;

 VAR_9 = FUNC_5(VAR_5);
 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7 != 0) {
  int VAR_10 = FUNC_3(VAR_5);
  if (VAR_10 > 1) {
   FUNC_1(VAR_4, VAR_9, VAR_10);

   VAR_6->flags |= VAR_1;
   VAR_4->sglPA = FUNC_0(VAR_3->dev, VAR_4->sgl,
          VAR_2, VAR_0);
   VAR_6->dataAddr = VAR_4->sglPA;
  } else
   VAR_6->dataAddr = FUNC_6(VAR_9);
 } else {




  VAR_4->dataPA = FUNC_0(VAR_3->dev, VAR_9, VAR_8,
          VAR_5->sc_data_direction);
  VAR_6->dataAddr = VAR_4->dataPA;
 }
}
