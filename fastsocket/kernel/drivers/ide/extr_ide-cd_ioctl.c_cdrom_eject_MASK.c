
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct request_sense {int dummy; } ;
struct cdrom_device_info {int mask; } ;
struct cdrom_info {struct cdrom_device_info devinfo; } ;
struct TYPE_4__ {int atapi_flags; struct cdrom_info* driver_data; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,unsigned char*,int ,int *,int *,struct request_sense*,int ,int ) ;
 int FUNC_1 (unsigned char*,int ,int) ;

__attribute__((used)) static
int FUNC_2(ide_drive_t *VAR_6, int VAR_7,
  struct request_sense *VAR_8)
{
 struct cdrom_info *VAR_9 = VAR_6->driver_data;
 struct cdrom_device_info *VAR_10 = &VAR_9->devinfo;
 char VAR_11 = 0x02;
 unsigned char VAR_12[VAR_0];

 if ((VAR_6->atapi_flags & VAR_5) && !VAR_7)
  return -VAR_2;


 if ((VAR_6->atapi_flags & VAR_4) && VAR_7)
  return 0;


 if (VAR_7 && (VAR_10->mask & VAR_1))
  VAR_11 = 0;

 FUNC_1(VAR_12, 0, VAR_0);

 VAR_12[0] = VAR_3;
 VAR_12[4] = VAR_11 | (VAR_7 != 0);

 return FUNC_0(VAR_6, VAR_12, 0, ((void*)0), ((void*)0), VAR_8, 0, 0);
}
