
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
struct TYPE_4__ {unsigned int period; unsigned int ppr_options; } ;
struct ahc_initiator_tinfo {TYPE_2__ goal; } ;
struct ahc_devinfo {int dummy; } ;
struct Scsi_Host {int this_id; scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ahc_devinfo*,int ,int ,int ,scalar_t__,int ) ;
 struct ahc_initiator_tinfo* FUNC_1 (struct ahc_softc*,scalar_t__,int ,int ,struct ahc_tmode_tstate**) ;
 struct ahc_syncrate* FUNC_2 (struct ahc_softc*,unsigned int*,unsigned int*,int ) ;
 int FUNC_3 (struct ahc_softc*,unsigned long*) ;
 int FUNC_4 (struct ahc_softc*,struct ahc_devinfo*,struct ahc_syncrate const*,unsigned int,int,unsigned int,int ,int ) ;
 int FUNC_5 (struct ahc_softc*,unsigned long*) ;
 struct Scsi_Host* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct scsi_target *VAR_4, int VAR_5)
{
 struct Scsi_Host *VAR_6 = FUNC_6(VAR_4->dev.parent);
 struct ahc_softc *VAR_7 = *((struct ahc_softc **)VAR_6->hostdata);
 struct ahc_tmode_tstate *VAR_8;
 struct ahc_initiator_tinfo *VAR_9
  = FUNC_1(VAR_7,
          VAR_4->channel + 'A',
          VAR_6->this_id, VAR_4->id, &VAR_8);
 struct ahc_devinfo VAR_10;
 unsigned int VAR_11 = 0;
 unsigned int VAR_12 = 0;
 unsigned long VAR_13;
 const struct ahc_syncrate *VAR_14 = ((void*)0);

 FUNC_0(&VAR_10, VAR_6->this_id, VAR_4->id, 0,
       VAR_4->channel + 'A', VAR_3);
 if (VAR_5 != 0) {
  VAR_14 = FUNC_2(VAR_7, &VAR_12, &VAR_11, VAR_0);
  VAR_12 = VAR_9->goal.period;
  VAR_11 = VAR_9->goal.ppr_options;
 }
 FUNC_3(VAR_7, &VAR_13);
 FUNC_4(VAR_7, &VAR_10, VAR_14, VAR_12, VAR_5,
    VAR_11, VAR_1, VAR_2);
 FUNC_5(VAR_7, &VAR_13);
}
