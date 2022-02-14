
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dasd_uid {scalar_t__ type; size_t real_unit_addr; size_t base_unit_addr; int vduit; int ssid; int serial; int vendor; } ;
struct dasd_eckd_private {struct alias_pav_group* pavgroup; struct dasd_uid uid; } ;
struct dasd_device {int alias_list; int cdev; scalar_t__ private; } ;
struct TYPE_6__ {size_t base_unit_addr; int vduit; int ssid; int serial; int vendor; } ;
struct alias_pav_group {int aliaslist; int baselist; int group; TYPE_3__ uid; } ;
struct alias_lcu {scalar_t__ pav; int grouplist; int active_devices; TYPE_2__* uac; } ;
struct TYPE_5__ {TYPE_1__* unit; } ;
struct TYPE_4__ {scalar_t__ ua_type; size_t base_ua; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct alias_pav_group* FUNC_1 (struct alias_lcu*,struct dasd_uid*) ;
 int FUNC_2 (int ) ;
 struct alias_pav_group* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,unsigned long,int ) ;
 int FUNC_8 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct alias_lcu *VAR_5,
         struct dasd_device *VAR_6,
         struct dasd_device *VAR_7)
{

 struct dasd_eckd_private *VAR_8;
 struct alias_pav_group *VAR_9;
 struct dasd_uid VAR_10;
 unsigned long VAR_11;

 VAR_8 = (struct dasd_eckd_private *) VAR_6->private;


 if (VAR_6 != VAR_7)
  FUNC_7(FUNC_2(VAR_6->cdev), VAR_11,
      VAR_0);
 VAR_8->uid.type = VAR_5->uac->unit[VAR_8->uid.real_unit_addr].ua_type;
 VAR_8->uid.base_unit_addr =
  VAR_5->uac->unit[VAR_8->uid.real_unit_addr].base_ua;
 VAR_10 = VAR_8->uid;

 if (VAR_6 != VAR_7)
  FUNC_8(FUNC_2(VAR_6->cdev), VAR_11);


 if (VAR_5->pav == VAR_3) {
  FUNC_5(&VAR_6->alias_list, &VAR_5->active_devices);
  return 0;
 }

 VAR_9 = FUNC_1(VAR_5, &VAR_10);
 if (!VAR_9) {
  VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_2);
  if (!VAR_9)
   return -VAR_1;
  FUNC_6(VAR_9->uid.vendor, VAR_10.vendor, sizeof(VAR_10.vendor));
  FUNC_6(VAR_9->uid.serial, VAR_10.serial, sizeof(VAR_10.serial));
  VAR_9->uid.ssid = VAR_10.ssid;
  if (VAR_10.type == VAR_4)
   VAR_9->uid.base_unit_addr = VAR_10.real_unit_addr;
  else
   VAR_9->uid.base_unit_addr = VAR_10.base_unit_addr;
  FUNC_6(VAR_9->uid.vduit, VAR_10.vduit, sizeof(VAR_10.vduit));
  FUNC_0(&VAR_9->group);
  FUNC_0(&VAR_9->baselist);
  FUNC_0(&VAR_9->aliaslist);
  FUNC_4(&VAR_9->group, &VAR_5->grouplist);
 }
 if (VAR_10.type == VAR_4)
  FUNC_5(&VAR_6->alias_list, &VAR_9->baselist);
 else
  FUNC_5(&VAR_6->alias_list, &VAR_9->aliaslist);
 VAR_8->pavgroup = VAR_9;
 return 0;
}
