
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
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ahd_devinfo*,int ,int ,int ,scalar_t__,int ) ;
 int VAR_8 ;
 struct ahd_initiator_tinfo* FUNC_1 (struct ahd_softc*,scalar_t__,int ,int ,struct ahd_tmode_tstate**) ;
 int FUNC_2 (struct ahd_softc*,unsigned int*,unsigned int*,int ) ;
 int FUNC_3 (struct ahd_softc*,unsigned long*) ;
 char* FUNC_4 (struct ahd_softc*) ;
 int FUNC_5 (struct ahd_softc*,struct ahd_devinfo*,unsigned int,int ,unsigned int,int ,int ) ;
 int FUNC_6 (struct ahd_softc*,unsigned long*) ;
 struct Scsi_Host* FUNC_7 (int ) ;
 int FUNC_8 (char*,char*,char*) ;
 scalar_t__ FUNC_9 (struct scsi_target*) ;

__attribute__((used)) static void FUNC_10(struct scsi_target *VAR_9, int VAR_10)
{
 struct Scsi_Host *VAR_11 = FUNC_7(VAR_9->dev.parent);
 struct ahd_softc *VAR_12 = *((struct ahd_softc **)VAR_11->hostdata);
 struct ahd_tmode_tstate *VAR_13;
 struct ahd_initiator_tinfo *VAR_14
  = FUNC_1(VAR_12,
          VAR_9->channel + 'A',
          VAR_11->this_id, VAR_9->id, &VAR_13);
 struct ahd_devinfo VAR_15;
 unsigned int VAR_16 = VAR_14->goal.ppr_options
  & ~VAR_6;
 unsigned int VAR_17 = VAR_14->goal.period;
 unsigned int VAR_18 = VAR_16 & VAR_5;
 unsigned long VAR_19;







 if (VAR_10 && FUNC_9(VAR_9))
  VAR_16 |= VAR_6;

 FUNC_0(&VAR_15, VAR_11->this_id, VAR_9->id, 0,
       VAR_9->channel + 'A', VAR_7);
 FUNC_2(VAR_12, &VAR_17, &VAR_16,
     VAR_18 ? VAR_1 : VAR_2);

 FUNC_3(VAR_12, &VAR_19);
 FUNC_5(VAR_12, &VAR_15, VAR_17, VAR_14->goal.offset,
    VAR_16, VAR_3, VAR_4);
 FUNC_6(VAR_12, &VAR_19);
}
