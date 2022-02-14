
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct pmcraid_resource_entry {int cfg_entry; } ;
struct TYPE_9__ {scalar_t__ failing_lba_hi; scalar_t__ failing_lba_lo; } ;
struct TYPE_10__ {TYPE_4__ vset; } ;
struct pmcraid_ioasa {scalar_t__ ioasc; TYPE_5__ u; } ;
struct pmcraid_cmd {TYPE_3__* scsi_cmd; TYPE_2__* ioa_cb; } ;
struct TYPE_8__ {int* sense_buffer; int result; TYPE_1__* device; } ;
struct TYPE_7__ {struct pmcraid_ioasa ioasa; } ;
struct TYPE_6__ {struct pmcraid_resource_entry* hostdata; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct pmcraid_cmd *VAR_3)
{
 u8 *VAR_4 = VAR_3->scsi_cmd->sense_buffer;
 struct pmcraid_resource_entry *VAR_5 = VAR_3->scsi_cmd->device->hostdata;
 struct pmcraid_ioasa *VAR_6 = &VAR_3->ioa_cb->ioasa;
 u32 VAR_7 = FUNC_4(VAR_6->ioasc);
 u32 VAR_8 = 0;

 FUNC_5(VAR_4, 0, VAR_2);
 VAR_3->scsi_cmd->result = VAR_1;

 if (FUNC_3(VAR_5->cfg_entry) &&
     VAR_7 == VAR_0 &&
     VAR_6->u.vset.failing_lba_hi != 0) {

  VAR_4[0] = 0x72;
  VAR_4[1] = FUNC_1(VAR_7);
  VAR_4[2] = FUNC_0(VAR_7);
  VAR_4[3] = FUNC_2(VAR_7);

  VAR_4[7] = 12;
  VAR_4[8] = 0;
  VAR_4[9] = 0x0A;
  VAR_4[10] = 0x80;

  VAR_8 = FUNC_4(VAR_6->u.vset.failing_lba_hi);

  VAR_4[12] = (VAR_8 & 0xff000000) >> 24;
  VAR_4[13] = (VAR_8 & 0x00ff0000) >> 16;
  VAR_4[14] = (VAR_8 & 0x0000ff00) >> 8;
  VAR_4[15] = VAR_8 & 0x000000ff;

  VAR_8 = FUNC_4(VAR_6->u.vset.failing_lba_lo);

  VAR_4[16] = (VAR_8 & 0xff000000) >> 24;
  VAR_4[17] = (VAR_8 & 0x00ff0000) >> 16;
  VAR_4[18] = (VAR_8 & 0x0000ff00) >> 8;
  VAR_4[19] = VAR_8 & 0x000000ff;
 } else {
  VAR_4[0] = 0x70;
  VAR_4[2] = FUNC_1(VAR_7);
  VAR_4[12] = FUNC_0(VAR_7);
  VAR_4[13] = FUNC_2(VAR_7);

  if (VAR_7 == VAR_0) {
   if (FUNC_3(VAR_5->cfg_entry))
    VAR_8 =
     FUNC_4(VAR_6->u.
       vset.failing_lba_lo);
   VAR_4[0] |= 0x80;
   VAR_4[3] = (VAR_8 >> 24) & 0xff;
   VAR_4[4] = (VAR_8 >> 16) & 0xff;
   VAR_4[5] = (VAR_8 >> 8) & 0xff;
   VAR_4[6] = VAR_8 & 0xff;
  }

  VAR_4[7] = 6;
 }
}
