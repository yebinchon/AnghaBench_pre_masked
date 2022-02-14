
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {scalar_t__ sector_size; int manage_start_stop; TYPE_1__* host; int supported_events; struct request_queue* request_queue; } ;
struct request_queue {int bounce_gfp; } ;
struct ata_device {int flags; scalar_t__ class; struct scsi_device* sdev; int id; int max_sectors; } ;
struct TYPE_2__ {scalar_t__ can_queue; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct ata_device*,int ,char*,...) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_15 ;
 int FUNC_4 (struct request_queue*,int ,void*,int ) ;
 int FUNC_5 (struct request_queue*,int) ;
 int FUNC_6 (struct request_queue*,int ) ;
 int FUNC_7 (struct request_queue*,scalar_t__) ;
 int FUNC_8 (struct request_queue*,scalar_t__) ;
 void* FUNC_9 (int ,int) ;
 int FUNC_10 (scalar_t__,int) ;
 int FUNC_11 (struct scsi_device*,int ,int) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static int FUNC_13(struct scsi_device *VAR_16,
          struct ata_device *VAR_17)
{
 struct request_queue *VAR_18 = VAR_16->request_queue;

 if (!FUNC_1(VAR_17->id))
  VAR_17->flags |= VAR_4;


 FUNC_6(VAR_18, VAR_17->max_sectors);

 if (VAR_17->class == VAR_1) {
  void *VAR_19;

  VAR_16->sector_size = VAR_7;


  FUNC_8(VAR_18, VAR_5 - 1);


  VAR_19 = FUNC_9(VAR_0, VAR_18->bounce_gfp | VAR_9);
  if (!VAR_19) {
   FUNC_0(VAR_17, VAR_10,
           "drain buffer allocation failed\n");
   return -VAR_8;
  }

  FUNC_4(VAR_18, VAR_15, VAR_19, VAR_0);
 } else {
  VAR_16->sector_size = FUNC_2(VAR_17->id);
  VAR_16->manage_start_stop = 1;
 }
 if (VAR_16->sector_size > VAR_13)
  FUNC_0(VAR_17, VAR_11,
   "sector_size=%u > PAGE_SIZE, PIO may malfunction\n",
   VAR_16->sector_size);

 FUNC_7(VAR_18, VAR_16->sector_size - 1);

 if (VAR_17->flags & VAR_2)
  FUNC_12(VAR_14, VAR_16->supported_events);

 if (VAR_17->flags & VAR_3) {
  int VAR_20;

  VAR_20 = FUNC_10(VAR_16->host->can_queue, FUNC_3(VAR_17->id));
  VAR_20 = FUNC_10(VAR_6 - 1, VAR_20);
  FUNC_11(VAR_16, VAR_12, VAR_20);
 }

 FUNC_5(VAR_18, 0);

 VAR_17->sdev = VAR_16;
 return 0;
}
