
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct scsi_target {scalar_t__ channel; int id; TYPE_1__ dev; } ;
struct ahc_tmode_tstate {int dummy; } ;
struct ahc_syncrate {int dummy; } ;
struct ahc_softc {int dummy; } ;
struct TYPE_4__ {unsigned int ppr_options; unsigned int period; unsigned int width; int offset; } ;
struct ahc_initiator_tinfo {TYPE_2__ goal; } ;
struct ahc_devinfo {int dummy; } ;
struct Scsi_Host {int this_id; scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ahc_devinfo*,int ,int ,int ,scalar_t__,int ) ;
 struct ahc_initiator_tinfo* FUNC_1 (struct ahc_softc*,scalar_t__,int ,int ,struct ahc_tmode_tstate**) ;
 struct ahc_syncrate* FUNC_2 (struct ahc_softc*,unsigned int*,unsigned int*,int ) ;
 int FUNC_3 (struct scsi_target*,int) ;
 int FUNC_4 (struct ahc_softc*,unsigned long*) ;
 int FUNC_5 (struct ahc_softc*,struct ahc_devinfo*,struct ahc_syncrate const*,unsigned int,int ,unsigned int,int ,int ) ;
 int FUNC_6 (struct ahc_softc*,unsigned long*) ;
 struct Scsi_Host* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct scsi_target*) ;

__attribute__((used)) static void FUNC_9(struct scsi_target *VAR_5, int VAR_6)
{
 struct Scsi_Host *VAR_7 = FUNC_7(VAR_5->dev.parent);
 struct ahc_softc *VAR_8 = *((struct ahc_softc **)VAR_7->hostdata);
 struct ahc_tmode_tstate *VAR_9;
 struct ahc_initiator_tinfo *VAR_10
  = FUNC_1(VAR_8,
          VAR_5->channel + 'A',
          VAR_7->this_id, VAR_5->id, &VAR_9);
 struct ahc_devinfo VAR_11;
 unsigned int VAR_12 = VAR_10->goal.ppr_options
  & ~VAR_3;
 unsigned int VAR_13 = VAR_10->goal.period;
 unsigned int VAR_14 = VAR_10->goal.width;
 unsigned long VAR_15;
 const struct ahc_syncrate *VAR_16;

 if (VAR_6 && FUNC_8(VAR_5)) {
  VAR_12 |= VAR_3;
  if (!VAR_14)
   FUNC_3(VAR_5, 1);
 } else if (VAR_13 == 9)
  VAR_13 = 10;

 FUNC_0(&VAR_11, VAR_7->this_id, VAR_5->id, 0,
       VAR_5->channel + 'A', VAR_4);
 VAR_16 = FUNC_2(VAR_8, &VAR_13, &VAR_12,VAR_0);
 FUNC_4(VAR_8, &VAR_15);
 FUNC_5(VAR_8, &VAR_11, VAR_16, VAR_13, VAR_10->goal.offset,
    VAR_12, VAR_1, VAR_2);
 FUNC_6(VAR_8, &VAR_15);
}
