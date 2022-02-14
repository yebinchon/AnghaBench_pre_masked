
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int dummy; } ;
struct c9_inquiry {int avte_cvp; int path_prio; } ;
struct TYPE_2__ {struct c9_inquiry c9; } ;
struct rdac_dh_data {scalar_t__ mode; int preferred; int state; int lun_state; TYPE_1__ inq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct scsi_device*,int,int,struct rdac_dh_data*) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_10, struct rdac_dh_data *VAR_11)
{
 int VAR_12;
 struct c9_inquiry *VAR_13;

 VAR_11->state = VAR_7;
 VAR_12 = FUNC_0(VAR_10, 0xC9, sizeof(struct c9_inquiry), VAR_11);
 if (VAR_12 == VAR_9) {
  VAR_13 = &VAR_11->inq.c9;

  if ((VAR_13->avte_cvp >> 5) & 0x1)
   VAR_11->mode = VAR_4;
  else if (VAR_13->avte_cvp >> 7)
   VAR_11->mode = VAR_3;
  else
   VAR_11->mode = VAR_2;


  if (VAR_13->avte_cvp & 0x1)
   VAR_11->lun_state = VAR_0;
  else {
   VAR_11->lun_state = VAR_1;
   if (VAR_11->mode == VAR_2)
    VAR_11->state = VAR_8;
  }


  if (VAR_13->path_prio & 0x1)
   VAR_11->preferred = VAR_6;
  else
   VAR_11->preferred = VAR_5;
 }

 return VAR_12;
}
