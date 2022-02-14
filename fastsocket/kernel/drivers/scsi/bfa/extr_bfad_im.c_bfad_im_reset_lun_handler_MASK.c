
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_lun {int dummy; } ;
struct TYPE_4__ {char* ptr; int Status; } ;
struct scsi_cmnd {TYPE_2__ SCp; TYPE_1__* device; int * host_scribble; } ;
struct bfad_tskim_s {int dummy; } ;
struct bfad_s {int bfad_lock; int bfa; } ;
struct bfad_itnim_s {int fcs_itnim; } ;
struct bfad_itnim_data_s {struct bfad_itnim_s* itnim; } ;
struct bfad_im_port_s {struct bfad_s* bfad; } ;
struct bfa_tskim_s {int dummy; } ;
struct bfa_itnim_s {int dummy; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;
typedef enum bfi_tskim_status { ____Placeholder_bfi_tskim_status } bfi_tskim_status ;
struct TYPE_3__ {int lun; struct bfad_itnim_data_s* hostdata; struct Scsi_Host* host; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct bfad_s*,int ,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct bfa_itnim_s* FUNC_2 (int *) ;
 int VAR_7 ;
 struct bfa_tskim_s* FUNC_3 (int *,struct bfad_tskim_s*) ;
 int FUNC_4 (struct bfa_tskim_s*,struct bfa_itnim_s*,struct scsi_lun,int ,int ) ;
 int FUNC_5 (int ,struct scsi_lun*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,unsigned long*) ;
 int FUNC_9 (int ,int ) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_10(struct scsi_cmnd *VAR_9)
{
 struct Scsi_Host *VAR_10 = VAR_9->device->host;
 struct bfad_im_port_s *VAR_11 =
   (struct bfad_im_port_s *) VAR_10->hostdata[0];
 struct bfad_itnim_data_s *VAR_12 = VAR_9->device->hostdata;
 struct bfad_s *VAR_13 = VAR_11->bfad;
 struct bfa_tskim_s *VAR_14;
 struct bfad_itnim_s *VAR_15;
 struct bfa_itnim_s *VAR_16;
 FUNC_1(VAR_8);
 int VAR_17 = VAR_6;
 unsigned long VAR_18;
 enum bfi_tskim_status VAR_19;
 struct scsi_lun VAR_20;

 FUNC_6(&VAR_13->bfad_lock, VAR_18);
 VAR_15 = VAR_12->itnim;
 if (!VAR_15) {
  FUNC_7(&VAR_13->bfad_lock, VAR_18);
  VAR_17 = VAR_2;
  goto out;
 }

 VAR_14 = FUNC_3(&VAR_13->bfa, (struct bfad_tskim_s *) VAR_9);
 if (!VAR_14) {
  FUNC_0(VAR_5, VAR_13, VAR_7,
    "LUN reset, fail to allocate tskim");
  FUNC_7(&VAR_13->bfad_lock, VAR_18);
  VAR_17 = VAR_2;
  goto out;
 }





 VAR_9->host_scribble = ((void*)0);
 VAR_9->SCp.ptr = (char *)&VAR_8;
 VAR_9->SCp.Status = 0;
 VAR_16 = FUNC_2(&VAR_15->fcs_itnim);
 FUNC_5(VAR_9->device->lun, &VAR_20);
 FUNC_4(VAR_14, VAR_16, VAR_20,
       VAR_3, VAR_0);
 FUNC_7(&VAR_13->bfad_lock, VAR_18);

 FUNC_9(VAR_8, FUNC_8(VAR_4,
   (unsigned long *)&VAR_9->SCp.Status));

 VAR_19 = VAR_9->SCp.Status >> 1;
 if (VAR_19 != VAR_1) {
  FUNC_0(VAR_5, VAR_13, VAR_7,
   "LUN reset failure, status: %d\n", VAR_19);
  VAR_17 = VAR_2;
 }

out:
 return VAR_17;
}
