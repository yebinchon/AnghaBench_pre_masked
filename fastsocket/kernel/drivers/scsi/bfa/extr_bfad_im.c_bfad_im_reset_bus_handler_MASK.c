
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {char* ptr; int Status; } ;
struct scsi_cmnd {TYPE_2__ SCp; TYPE_1__* device; } ;
struct bfad_s {int bfad_lock; } ;
struct bfad_itnim_s {int dummy; } ;
struct bfad_im_port_s {struct bfad_s* bfad; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;
typedef enum bfi_tskim_status { ____Placeholder_bfi_tskim_status } bfi_tskim_status ;
struct TYPE_3__ {struct Scsi_Host* host; } ;


 int FUNC_0 (int ,struct bfad_s*,int ,char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct bfad_itnim_s* FUNC_2 (struct bfad_im_port_s*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct bfad_s*,struct scsi_cmnd*,struct bfad_itnim_s*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,unsigned long*) ;
 int FUNC_7 (int ,int ) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_8(struct scsi_cmnd *VAR_9)
{
 struct Scsi_Host *VAR_10 = VAR_9->device->host;
 struct bfad_im_port_s *VAR_11 =
    (struct bfad_im_port_s *) VAR_10->hostdata[0];
 struct bfad_s *VAR_12 = VAR_11->bfad;
 struct bfad_itnim_s *VAR_13;
 unsigned long VAR_14;
 u32 VAR_15, VAR_16, VAR_17 = 0;
 FUNC_1(VAR_8);
 enum bfi_tskim_status VAR_18;

 FUNC_4(&VAR_12->bfad_lock, VAR_14);
 for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
  VAR_13 = FUNC_2(VAR_11, VAR_15);
  if (VAR_13) {
   VAR_9->SCp.ptr = (char *)&VAR_8;
   VAR_16 = FUNC_3(VAR_12, VAR_9, VAR_13);
   if (VAR_16 != VAR_0) {
    VAR_17++;
    continue;
   }


   FUNC_5(&VAR_12->bfad_lock, VAR_14);
   FUNC_7(VAR_8, FUNC_6(VAR_3,
     (unsigned long *)&VAR_9->SCp.Status));
   FUNC_4(&VAR_12->bfad_lock, VAR_14);

   VAR_18 = VAR_9->SCp.Status >> 1;
   if (VAR_18 != VAR_1) {
    FUNC_0(VAR_4, VAR_12, VAR_7,
     "target reset failure,"
     " status: %d\n", VAR_18);
    VAR_17++;
   }
  }
 }
 FUNC_5(&VAR_12->bfad_lock, VAR_14);

 if (VAR_17)
  return VAR_2;

 return VAR_6;
}
