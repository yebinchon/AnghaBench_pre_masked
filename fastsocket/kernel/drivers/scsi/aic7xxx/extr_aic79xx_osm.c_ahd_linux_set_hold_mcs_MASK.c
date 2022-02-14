
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
struct TYPE_4__ {unsigned int ppr_options; unsigned int period; int offset; } ;
struct ahd_initiator_tinfo {TYPE_2__ goal; } ;
struct ahd_devinfo {int dummy; } ;
struct Scsi_Host {int this_id; scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ahd_devinfo*,int ,int ,int ,scalar_t__,int ) ;
 struct ahd_initiator_tinfo* FUNC_1 (struct ahd_softc*,scalar_t__,int ,int ,struct ahd_tmode_tstate**) ;
 int FUNC_2 (struct ahd_softc*,unsigned int*,unsigned int*,int ) ;
 int FUNC_3 (struct ahd_softc*,unsigned long*) ;
 int FUNC_4 (struct ahd_softc*,struct ahd_devinfo*,unsigned int,int ,unsigned int,int ,int ) ;
 int FUNC_5 (struct ahd_softc*,unsigned long*) ;
 struct Scsi_Host* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct scsi_target*) ;

__attribute__((used)) static void FUNC_8(struct scsi_target *VAR_7, int VAR_8)
{
 struct Scsi_Host *VAR_9 = FUNC_6(VAR_7->dev.parent);
 struct ahd_softc *VAR_10 = *((struct ahd_softc **)VAR_9->hostdata);
 struct ahd_tmode_tstate *VAR_11;
 struct ahd_initiator_tinfo *VAR_12
  = FUNC_1(VAR_10,
          VAR_7->channel + 'A',
          VAR_9->this_id, VAR_7->id, &VAR_11);
 struct ahd_devinfo VAR_13;
 unsigned int VAR_14 = VAR_12->goal.ppr_options
  & ~VAR_5;
 unsigned int VAR_15 = VAR_12->goal.period;
 unsigned int VAR_16 = VAR_14 & VAR_4;
 unsigned long VAR_17;

 if (VAR_8 && FUNC_7(VAR_7))
  VAR_14 |= VAR_5;

 FUNC_0(&VAR_13, VAR_9->this_id, VAR_7->id, 0,
       VAR_7->channel + 'A', VAR_6);
 FUNC_2(VAR_10, &VAR_15, &VAR_14,
     VAR_16 ? VAR_0 : VAR_1);

 FUNC_3(VAR_10, &VAR_17);
 FUNC_4(VAR_10, &VAR_13, VAR_15, VAR_12->goal.offset,
    VAR_14, VAR_2, VAR_3);
 FUNC_5(VAR_10, &VAR_17);
}
