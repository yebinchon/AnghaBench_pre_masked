
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int queue_lock; } ;
struct request {int errors; } ;
struct cdrom_info {scalar_t__ write_timeout; } ;
struct TYPE_3__ {struct request_queue* queue; struct cdrom_info* driver_data; } ;
typedef TYPE_1__ ide_drive_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct request_queue*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(ide_drive_t *VAR_2, struct request *VAR_3)
{

 struct cdrom_info *VAR_4 = VAR_2->driver_data;

 if (!VAR_3->errors)
  VAR_4->write_timeout = VAR_1 + VAR_0;

 VAR_3->errors = 1;

 if (FUNC_3(VAR_1, VAR_4->write_timeout))
  return 0;
 else {
  struct request_queue *VAR_5 = VAR_2->queue;
  unsigned long VAR_6;





  FUNC_1(VAR_5->queue_lock, VAR_6);
  FUNC_0(VAR_5);
  FUNC_2(VAR_5->queue_lock, VAR_6);

  return 1;
 }
}
