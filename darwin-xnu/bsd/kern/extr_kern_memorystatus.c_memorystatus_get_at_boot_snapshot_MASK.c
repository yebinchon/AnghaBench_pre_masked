
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int notification_time; } ;
typedef TYPE_1__ memorystatus_jetsam_snapshot_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,long,long,int ) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int
FUNC_2(memorystatus_jetsam_snapshot_t **VAR_2, size_t *VAR_3, boolean_t VAR_4) {
 size_t VAR_5 = *VAR_3;




 *VAR_3 = sizeof(memorystatus_jetsam_snapshot_t);

 if (VAR_4) {
  return 0;
 }




 if (VAR_5 < *VAR_3) {
  return VAR_0;
 }




 VAR_1.notification_time = FUNC_1();
 *VAR_2 = &VAR_1;

 FUNC_0(7, "memorystatus_get_at_boot_snapshot: returned inputsize (%ld), snapshot_size(%ld), listcount(%d)\n",
      (long)VAR_5, (long)*VAR_3, 0);
 return 0;
}
