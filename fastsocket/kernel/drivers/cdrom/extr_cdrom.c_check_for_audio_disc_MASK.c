
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error; scalar_t__ audio; } ;
typedef TYPE_1__ tracktype ;
struct cdrom_device_ops {int (* drive_status ) (struct cdrom_device_info*,int ) ;int (* tray_move ) (struct cdrom_device_info*,int ) ;} ;
struct cdrom_device_info {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct cdrom_device_info*,TYPE_1__*) ;
 int FUNC_3 (struct cdrom_device_info*,int ) ;
 int FUNC_4 (struct cdrom_device_info*,int ) ;
 int FUNC_5 (struct cdrom_device_info*,int ) ;

__attribute__((used)) static int FUNC_6(struct cdrom_device_info * VAR_11,
    struct cdrom_device_ops * VAR_12)
{
        int VAR_13;
 tracktype VAR_14;
 FUNC_1(VAR_7, "entering check_for_audio_disc\n");
 if (!(VAR_11->options & VAR_2))
  return 0;
 if (VAR_12->drive_status != ((void*)0)) {
  VAR_13 = VAR_12->drive_status(VAR_11, VAR_3);
  FUNC_1(VAR_7, "drive_status=%d\n", VAR_13);
  if (VAR_13 == VAR_6) {
   FUNC_1(VAR_7, "the tray is open...\n");

   if (FUNC_0(VAR_0) &&
       VAR_11->options & VAR_1) {
    FUNC_1(VAR_7, "trying to close the tray.\n");
    VAR_13=VAR_12->tray_move(VAR_11,0);
    if (VAR_13) {
     FUNC_1(VAR_7, "bummer. tried to close tray but failed.\n");





     return -VAR_10;
    }
   } else {
    FUNC_1(VAR_7, "bummer. this driver can't close the tray.\n");
    return -VAR_10;
   }

   VAR_13 = VAR_12->drive_status(VAR_11, VAR_3);
   if ((VAR_13 == VAR_5) || (VAR_13==VAR_6)) {
    FUNC_1(VAR_7, "bummer. the tray is still not closed.\n");
    return -VAR_10;
   }
   if (VAR_13!=VAR_4) {
    FUNC_1(VAR_7, "bummer. disc isn't ready.\n");
    return -VAR_8;
   }
   FUNC_1(VAR_7, "the tray is now closed.\n");
  }
 }
 FUNC_2(VAR_11, &VAR_14);
 if (VAR_14.error)
  return(VAR_14.error);

 if (VAR_14.audio==0)
  return -VAR_9;

 return 0;
}
