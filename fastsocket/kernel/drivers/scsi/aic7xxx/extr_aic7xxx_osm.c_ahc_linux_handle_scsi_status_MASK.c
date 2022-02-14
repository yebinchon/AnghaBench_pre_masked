
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef size_t u_int ;
struct scsi_sense_data {int dummy; } ;
struct scsi_device {TYPE_1__* sdev_target; int lun; } ;
struct scsi_cmnd {size_t* sense_buffer; int result; } ;
struct scb {int flags; struct scsi_cmnd* io_ctx; } ;
struct ahc_softc {int our_id; } ;
struct ahc_linux_device {size_t active; int openings; size_t tags_on_last_queuefull; size_t maxtags; int flags; int last_queuefull_same_count; int tag_success_count; } ;
struct ahc_devinfo {int dummy; } ;
struct TYPE_2__ {scalar_t__ channel; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;


 int VAR_11 ;

 int FUNC_0 (struct ahc_devinfo*,int ,int ,int ,char,int ) ;
 int VAR_12 ;
 int FUNC_1 (struct scb*) ;
 int FUNC_2 (struct ahc_softc*,struct scb*) ;
 int FUNC_3 (struct scb*) ;
 int FUNC_4 (struct ahc_softc*,struct scsi_device*,struct ahc_devinfo*,int ) ;
 int FUNC_5 (struct ahc_softc*,struct scb*) ;
 int FUNC_6 (struct scb*,int ) ;
 int FUNC_7 (struct scb*,int ) ;
 int FUNC_8 (size_t*,int ,size_t) ;
 int FUNC_9 (size_t*,int ,size_t) ;
 size_t FUNC_10 (int ,int ) ;
 int FUNC_11 (char*,...) ;
 struct ahc_linux_device* FUNC_12 (struct scsi_device*) ;

__attribute__((used)) static void
FUNC_13(struct ahc_softc *VAR_13,
        struct scsi_device *VAR_14, struct scb *VAR_15)
{
 struct ahc_devinfo VAR_16;
 struct ahc_linux_device *VAR_17 = FUNC_12(VAR_14);

 FUNC_0(&VAR_16,
       VAR_13->our_id,
       VAR_14->sdev_target->id, VAR_14->lun,
       VAR_14->sdev_target->channel == 0 ? 'A' : 'B',
       VAR_7);
 switch (FUNC_1(VAR_15)) {
 default:
  break;
 case 130:
 case 129:
 {
  struct scsi_cmnd *VAR_18;





  VAR_18 = VAR_15->io_ctx;
  if (VAR_15->flags & VAR_8) {
   u_int VAR_19;

   VAR_19 = FUNC_10(sizeof(struct scsi_sense_data)
           - FUNC_3(VAR_15),
      (u_long)VAR_9);
   FUNC_8(VAR_18->sense_buffer,
          FUNC_2(VAR_13, VAR_15), VAR_19);
   if (VAR_19 < VAR_9)
    FUNC_9(&VAR_18->sense_buffer[VAR_19], 0,
           VAR_9 - VAR_19);
   VAR_18->result |= (VAR_6 << 24);
  }
  break;
 }
 case 128:
 {
  VAR_17->tag_success_count = 0;
  if (VAR_17->active != 0) {




   VAR_17->openings = 0;




   if (VAR_17->active == VAR_17->tags_on_last_queuefull) {

    VAR_17->last_queuefull_same_count++;
    if (VAR_17->last_queuefull_same_count
     == VAR_1) {
     VAR_17->maxtags = VAR_17->active;
     FUNC_5(VAR_13, VAR_15);
     FUNC_11("Locking max tag count at %d\n",
            VAR_17->active);
    }
   } else {
    VAR_17->tags_on_last_queuefull = VAR_17->active;
    VAR_17->last_queuefull_same_count = 0;
   }
   FUNC_7(VAR_15, VAR_5);
   FUNC_6(VAR_15, VAR_11);
   FUNC_4(VAR_13, VAR_14, &VAR_16,
         (VAR_17->flags & VAR_0)
       ? VAR_2 : VAR_3);
   break;
  }




  VAR_17->openings = 1;
  FUNC_6(VAR_15, VAR_10);
  FUNC_4(VAR_13, VAR_14, &VAR_16,
        (VAR_17->flags & VAR_0)
      ? VAR_2 : VAR_3);
  break;
 }
 }
}
