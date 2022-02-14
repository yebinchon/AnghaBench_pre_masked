
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_pointer {int this_residual; } ;
struct TYPE_3__ {int dma; } ;
struct TYPE_4__ {TYPE_1__ scsi; } ;
struct eesoxscsi_info {int * sg; TYPE_2__ info; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef scalar_t__ fasdmatype_t ;
typedef scalar_t__ fasdmadir_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,struct scsi_pointer*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct device*,int *,int,int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct device* FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int *,int) ;

__attribute__((used)) static fasdmatype_t
FUNC_7(struct Scsi_Host *VAR_9, struct scsi_pointer *VAR_10,
         fasdmadir_t VAR_11, fasdmatype_t VAR_12)
{
 struct eesoxscsi_info *VAR_13 = (struct eesoxscsi_info *)VAR_9->hostdata;
 struct device *VAR_14 = FUNC_4(VAR_9);
 int VAR_15 = VAR_13->info.scsi.dma;

 if (VAR_15 != VAR_5 &&
     (VAR_12 == VAR_8 || VAR_10->this_residual >= 512)) {
  int VAR_16, VAR_17, VAR_18;

  VAR_16 = FUNC_0(&VAR_13->sg[0], VAR_10, VAR_6);

  if (VAR_11 == VAR_3)
   VAR_17 = VAR_4,
   VAR_18 = VAR_2;
  else
   VAR_17 = VAR_0,
   VAR_18 = VAR_1;

  FUNC_2(VAR_14, VAR_13->sg, VAR_16, VAR_17);

  FUNC_1(VAR_15);
  FUNC_6(VAR_15, VAR_13->sg, VAR_16);
  FUNC_5(VAR_15, VAR_18);
  FUNC_3(VAR_15);
  return VAR_8;
 }





 return VAR_7;
}
