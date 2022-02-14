
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int memorystatus_jetsam_snapshot_t ;
typedef int memorystatus_jetsam_snapshot_entry_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,long,long,long) ;
 int * VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(memorystatus_jetsam_snapshot_t **VAR_3, size_t *VAR_4, boolean_t VAR_5) {
 size_t VAR_6 = *VAR_4;

 if (VAR_2 > 0) {
  *VAR_4 = sizeof(memorystatus_jetsam_snapshot_t) + (sizeof(memorystatus_jetsam_snapshot_entry_t) * (VAR_2));
 } else {
  *VAR_4 = 0;
 }

 if (VAR_5) {
  return 0;
 }

 if (VAR_6 < *VAR_4) {
  return VAR_0;
 }

 *VAR_3 = VAR_1;

 FUNC_0(7, "memorystatus_get_jetsam_snapshot_copy: returned inputsize (%ld), snapshot_size(%ld), listcount(%ld)\n",
       (long)VAR_6, (long)*VAR_4, (long)VAR_2);

 return 0;
}
