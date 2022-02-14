
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int memorystatus_jetsam_snapshot_t ;
typedef int memorystatus_jetsam_snapshot_entry_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,long,long,long) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (int *,int) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,size_t) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(memorystatus_jetsam_snapshot_t **VAR_3, size_t *VAR_4, boolean_t VAR_5) {
 size_t VAR_6 = *VAR_4;
 uint32_t VAR_7 = VAR_2;
 memorystatus_jetsam_snapshot_t *VAR_8 = ((void*)0);

 *VAR_4 = sizeof(memorystatus_jetsam_snapshot_t) + (sizeof(memorystatus_jetsam_snapshot_entry_t) * (VAR_7));

 if (VAR_5) {
  return 0;
 }







 if (VAR_6 < *VAR_4) {
  return VAR_0;
 }




 VAR_8 = (memorystatus_jetsam_snapshot_t *)FUNC_1(*VAR_4);
 if (!VAR_8) {
  return (VAR_1);
 }

 FUNC_3(VAR_8, 0, *VAR_4);

 FUNC_4();
 FUNC_2(VAR_8, VAR_7);
 FUNC_5();







 *VAR_3 = VAR_8;

 FUNC_0(7, "memorystatus_get_on_demand_snapshot: returned inputsize (%ld), snapshot_size(%ld), listcount(%ld)\n",
       (long)VAR_6, (long)*VAR_4, (long)VAR_7);

 return 0;
}
