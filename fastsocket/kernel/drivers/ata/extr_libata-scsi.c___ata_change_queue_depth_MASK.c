
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int queue_depth; TYPE_1__* host; } ;
struct ata_port {int lock; } ;
struct ata_device {int id; int flags; } ;
struct TYPE_2__ {scalar_t__ can_queue; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ata_device*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ata_device*) ;
 struct ata_device* FUNC_3 (struct ata_port*,struct scsi_device*) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (struct scsi_device*,int ,int) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;

int FUNC_8(struct ata_port *VAR_6, struct scsi_device *VAR_7,
        int VAR_8, int VAR_9)
{
 struct ata_device *VAR_10;
 unsigned long VAR_11;

 if (VAR_9 != VAR_5)
  return -VAR_3;

 if (VAR_8 < 1 || VAR_8 == VAR_7->queue_depth)
  return VAR_7->queue_depth;

 VAR_10 = FUNC_3(VAR_6, VAR_7);
 if (!VAR_10 || !FUNC_0(VAR_10))
  return VAR_7->queue_depth;


 FUNC_6(VAR_6->lock, VAR_11);
 VAR_10->flags &= ~VAR_0;
 if (VAR_8 == 1 || !FUNC_2(VAR_10)) {
  VAR_10->flags |= VAR_0;
  VAR_8 = 1;
 }
 FUNC_7(VAR_6->lock, VAR_11);


 VAR_8 = FUNC_4(VAR_8, VAR_7->host->can_queue);
 VAR_8 = FUNC_4(VAR_8, FUNC_1(VAR_10->id));
 VAR_8 = FUNC_4(VAR_8, VAR_1 - 1);

 if (VAR_7->queue_depth == VAR_8)
  return -VAR_2;

 FUNC_5(VAR_7, VAR_4, VAR_8);
 return VAR_8;
}
