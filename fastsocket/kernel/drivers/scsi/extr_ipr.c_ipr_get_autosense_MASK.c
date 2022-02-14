
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int auto_sense_len; int data; } ;
struct ipr_ioasa64 {TYPE_3__ auto_sense; } ;
struct TYPE_11__ {int auto_sense_len; int data; } ;
struct TYPE_7__ {int ioasc_specific; } ;
struct ipr_ioasa {TYPE_5__ auto_sense; TYPE_1__ hdr; } ;
struct TYPE_12__ {struct ipr_ioasa64 ioasa64; struct ipr_ioasa ioasa; } ;
struct ipr_cmnd {TYPE_4__* scsi_cmd; TYPE_2__* ioa_cfg; TYPE_6__ s; } ;
struct TYPE_10__ {int sense_buffer; } ;
struct TYPE_8__ {scalar_t__ sis64; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct ipr_cmnd *VAR_3)
{
 struct ipr_ioasa *VAR_4 = &VAR_3->s.ioasa;
 struct ipr_ioasa64 *VAR_5 = &VAR_3->s.ioasa64;

 if ((FUNC_1(VAR_4->hdr.ioasc_specific) & VAR_0) == 0)
  return 0;

 if (VAR_3->ioa_cfg->sis64)
  FUNC_2(VAR_3->scsi_cmd->sense_buffer, VAR_5->auto_sense.data,
         FUNC_3(VAR_2, FUNC_0(VAR_5->auto_sense.auto_sense_len),
      VAR_1));
 else
  FUNC_2(VAR_3->scsi_cmd->sense_buffer, VAR_4->auto_sense.data,
         FUNC_3(VAR_2, FUNC_0(VAR_4->auto_sense.auto_sense_len),
      VAR_1));
 return 1;
}
