
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdrom_tochdr {int cdth_trk0; int cdth_trk1; } ;
struct cdrom_tocentry {int cdte_track; int cdte_ctrl; int cdte_format; } ;
struct cdrom_device_info {TYPE_1__* handle; } ;
struct TYPE_2__ {scalar_t__ xa_flag; } ;
typedef TYPE_1__ Scsi_CD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct cdrom_device_info*,struct cdrom_tocentry*) ;
 int FUNC_1 (struct cdrom_device_info*,struct cdrom_tochdr*) ;

int FUNC_2(struct cdrom_device_info *VAR_8)
{
 Scsi_CD *VAR_9 = VAR_8->handle;
 struct cdrom_tochdr VAR_10;
 struct cdrom_tocentry VAR_11;
 int VAR_12, VAR_13, VAR_14 = 0;


 VAR_13 = FUNC_1(VAR_8, &VAR_10);
 if (VAR_13)
  return (VAR_13 == -VAR_7) ? VAR_4 : VAR_5;

 for (VAR_12 = VAR_10.cdth_trk0; VAR_12 <= VAR_10.cdth_trk1; VAR_12++) {
  VAR_11.cdte_track = VAR_12;
  VAR_11.cdte_format = VAR_1;
  if (FUNC_0(VAR_8, &VAR_11))
   return VAR_5;
  if (VAR_11.cdte_ctrl & VAR_0) {
   VAR_14 = 1;
   break;
  }
 }
 if (!VAR_14)
  return VAR_2;

 if (VAR_9->xa_flag)
  return VAR_6;
 else
  return VAR_3;
}
