
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct request_sense {int dummy; } ;
struct request {int cmd_flags; int cmd_type; } ;
struct cdrom_info {int disk; } ;
struct cdrom_device_info {TYPE_1__* handle; } ;
struct TYPE_3__ {int atapi_flags; int queue; struct cdrom_info* driver_data; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,struct request*,int ) ;
 struct request* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (TYPE_1__*,int,struct request_sense*) ;

int FUNC_4(struct cdrom_device_info *VAR_5)
{
 ide_drive_t *VAR_6 = VAR_5->handle;
 struct cdrom_info *VAR_7 = VAR_6->driver_data;
 struct request_sense VAR_8;
 struct request *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(VAR_6->queue, VAR_1, VAR_4);
 VAR_9->cmd_type = VAR_3;
 VAR_9->cmd_flags = VAR_2;
 VAR_10 = FUNC_0(VAR_6->queue, VAR_7->disk, VAR_9, 0);
 FUNC_2(VAR_9);




 if (VAR_6->atapi_flags & VAR_0)
  (void)FUNC_3(VAR_6, 1, &VAR_8);

 return VAR_10;
}
