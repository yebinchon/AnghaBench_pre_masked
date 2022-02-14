
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct scsi_target {scalar_t__ channel; int id; TYPE_1__ dev; } ;
struct ahd_tmode_tstate {int dummy; } ;
struct ahd_softc {int dummy; } ;
struct TYPE_4__ {unsigned int ppr_options; unsigned long offset; } ;
struct ahd_initiator_tinfo {TYPE_2__ goal; } ;
struct ahd_devinfo {int dummy; } ;
struct Scsi_Host {int this_id; scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ahd_devinfo*,int ,int ,int ,scalar_t__,int ) ;
 int VAR_10 ;
 struct ahd_initiator_tinfo* FUNC_1 (struct ahd_softc*,scalar_t__,int ,int ,struct ahd_tmode_tstate**) ;
 int FUNC_2 (struct ahd_softc*,int*,unsigned int*,int ) ;
 int FUNC_3 (struct ahd_softc*,unsigned long*) ;
 char* FUNC_4 (struct ahd_softc*) ;
 int FUNC_5 (struct ahd_softc*,struct ahd_devinfo*,int,unsigned long,unsigned int,int ,int ) ;
 int FUNC_6 (struct ahd_softc*,unsigned long*) ;
 struct Scsi_Host* FUNC_7 (int ) ;
 int FUNC_8 (char*,char*,int) ;
 scalar_t__ FUNC_9 (struct scsi_target*) ;
 scalar_t__ FUNC_10 (struct scsi_target*) ;

__attribute__((used)) static void FUNC_11(struct scsi_target *VAR_11, int VAR_12)
{
 struct Scsi_Host *VAR_13 = FUNC_7(VAR_11->dev.parent);
 struct ahd_softc *VAR_14 = *((struct ahd_softc **)VAR_13->hostdata);
 struct ahd_tmode_tstate *VAR_15;
 struct ahd_initiator_tinfo *VAR_16
  = FUNC_1(VAR_14,
          VAR_11->channel + 'A',
          VAR_13->this_id, VAR_11->id, &VAR_15);
 struct ahd_devinfo VAR_17;
 unsigned int VAR_18 = VAR_16->goal.ppr_options;
 unsigned int VAR_19;
 unsigned long VAR_20;
 unsigned long VAR_21 = VAR_16->goal.offset;





 if (VAR_21 == 0)
  VAR_21 = VAR_5;

 if (VAR_12 < 8)
  VAR_12 = 8;
 if (VAR_12 < 10) {
  if (FUNC_9(VAR_11)) {
   VAR_18 |= VAR_6;
   if (VAR_12 == 8)
    VAR_18 |= VAR_7;
  } else
   VAR_12 = 10;
 }

 VAR_19 = VAR_18 & VAR_6;

 FUNC_0(&VAR_17, VAR_13->this_id, VAR_11->id, 0,
       VAR_11->channel + 'A', VAR_9);


 if (VAR_18 & ~VAR_8) {
  if (FUNC_10(VAR_11) == 0)
   VAR_18 &= VAR_8;
 }

 FUNC_2(VAR_14, &VAR_12, &VAR_18,
     VAR_19 ? VAR_1 : VAR_2);

 FUNC_3(VAR_14, &VAR_20);
 FUNC_5(VAR_14, &VAR_17, VAR_12, VAR_21,
    VAR_18, VAR_3, VAR_4);
 FUNC_6(VAR_14, &VAR_20);
}
