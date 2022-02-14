
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct scsi_device {int dummy; } ;
struct c4_inquiry {int* slot_id; } ;
struct TYPE_2__ {struct c4_inquiry c4; } ;
struct rdac_dh_data {int ctlr; TYPE_1__ inq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int *,struct scsi_device*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct scsi_device*,int,int,struct rdac_dh_data*) ;

__attribute__((used)) static int FUNC_4(struct scsi_device *VAR_3,
  struct rdac_dh_data *VAR_4, char *VAR_5, u8 *VAR_6)
{
 int VAR_7, VAR_8;
 struct c4_inquiry *VAR_9;

 VAR_7 = FUNC_3(VAR_3, 0xC4, sizeof(struct c4_inquiry), VAR_4);
 if (VAR_7 == VAR_0) {
  VAR_9 = &VAR_4->inq.c4;

  if (VAR_9->slot_id[1] == 0x31)
   VAR_8 = 0;
  else
   VAR_8 = 1;

  FUNC_1(&VAR_2);
  VAR_4->ctlr = FUNC_0(VAR_8, VAR_5, VAR_6, VAR_3);
  if (!VAR_4->ctlr)
   VAR_7 = VAR_1;
  FUNC_2(&VAR_2);
 }
 return VAR_7;
}
