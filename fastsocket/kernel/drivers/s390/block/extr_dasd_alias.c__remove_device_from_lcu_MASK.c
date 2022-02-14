
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_eckd_private {struct alias_pav_group* pavgroup; } ;
struct dasd_device {int alias_list; scalar_t__ private; } ;
struct alias_pav_group {struct dasd_device* next; int group; int aliaslist; int baselist; } ;
struct alias_lcu {int inactive_devices; } ;


 int FUNC_0 (struct alias_pav_group*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct alias_lcu *VAR_0,
        struct dasd_device *VAR_1)
{
 struct dasd_eckd_private *VAR_2;
 struct alias_pav_group *VAR_3;

 VAR_2 = (struct dasd_eckd_private *) VAR_1->private;
 FUNC_3(&VAR_1->alias_list, &VAR_0->inactive_devices);
 VAR_3 = VAR_2->pavgroup;
 if (!VAR_3)
  return;
 VAR_2->pavgroup = ((void*)0);
 if (FUNC_2(&VAR_3->baselist) && FUNC_2(&VAR_3->aliaslist)) {
  FUNC_1(&VAR_3->group);
  FUNC_0(VAR_3);
  return;
 }
 if (VAR_3->next == VAR_1)
  VAR_3->next = ((void*)0);
}
