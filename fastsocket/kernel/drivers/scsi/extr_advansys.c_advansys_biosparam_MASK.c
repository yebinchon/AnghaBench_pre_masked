
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_device {int host; } ;
struct block_device {int dummy; } ;
struct TYPE_5__ {int bios_ctrl; } ;
struct TYPE_4__ {int dvc_cntl; } ;
struct TYPE_6__ {TYPE_2__ adv_dvc_var; TYPE_1__ asc_dvc_var; } ;
struct asc_board {TYPE_3__ dvc_var; } ;
typedef int sector_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct asc_board*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct asc_board* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct scsi_device *VAR_3, struct block_device *VAR_4,
     sector_t VAR_5, int VAR_6[])
{
 struct asc_board *VAR_7 = FUNC_3(VAR_3->host);

 FUNC_0(1, "begin\n");
 FUNC_2(VAR_3->host, VAR_2);
 if (FUNC_1(VAR_7)) {
  if ((VAR_7->dvc_var.asc_dvc_var.dvc_cntl &
       VAR_0) && VAR_5 > 0x200000) {
   VAR_6[0] = 255;
   VAR_6[1] = 63;
  } else {
   VAR_6[0] = 64;
   VAR_6[1] = 32;
  }
 } else {
  if ((VAR_7->dvc_var.adv_dvc_var.bios_ctrl &
       VAR_1) && VAR_5 > 0x200000) {
   VAR_6[0] = 255;
   VAR_6[1] = 63;
  } else {
   VAR_6[0] = 64;
   VAR_6[1] = 32;
  }
 }
 VAR_6[2] = (unsigned long)VAR_5 / (VAR_6[0] * VAR_6[1]);
 FUNC_0(1, "end\n");
 return 0;
}
