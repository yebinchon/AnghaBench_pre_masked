
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef unsigned int uint32_t ;
typedef TYPE_1__* proc_t ;
struct TYPE_11__ {unsigned int entry_count; scalar_t__ js_gencount; scalar_t__ notification_time; int snapshot_time; int * entries; } ;
typedef TYPE_2__ memorystatus_jetsam_snapshot_t ;
typedef int memorystatus_jetsam_snapshot_entry_t ;
struct TYPE_10__ {int * p_uuid; int p_pid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (unsigned int*,int ) ;
 TYPE_1__* FUNC_4 (unsigned int*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *,scalar_t__) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__* VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_7(memorystatus_jetsam_snapshot_t *VAR_7, uint32_t VAR_8 )
{
 proc_t VAR_9, VAR_10;
 unsigned int VAR_11 = 0, VAR_12 = 0;

 memorystatus_jetsam_snapshot_t *VAR_13 = ((void*)0);
 memorystatus_jetsam_snapshot_entry_t *VAR_14 = ((void*)0);
 unsigned int VAR_15 = 0;

 FUNC_0(VAR_6, VAR_1);

 if (VAR_7) {



  VAR_13 = VAR_7;
  VAR_14 = VAR_7->entries;
  VAR_15 = VAR_8;
 } else {



  VAR_13 = VAR_3;
  VAR_14 = VAR_3->entries;
  VAR_15 = VAR_5;
 }




 FUNC_6(VAR_13);
 VAR_13->snapshot_time = FUNC_2();
 VAR_13->notification_time = 0;
 VAR_13->js_gencount = 0;

 VAR_10 = FUNC_3(&VAR_11, VAR_2);
 while (VAR_10) {
  VAR_9 = VAR_10;
  VAR_10 = FUNC_4(&VAR_11, VAR_9, VAR_2);

  if (VAR_0 == FUNC_5(VAR_9, &VAR_14[VAR_12], VAR_13->js_gencount)) {
   continue;
  }

  FUNC_1(0, "jetsam snapshot pid %d, uuid = %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x\n",
   VAR_9->p_pid,
   VAR_9->p_uuid[0], VAR_9->p_uuid[1], VAR_9->p_uuid[2], VAR_9->p_uuid[3], VAR_9->p_uuid[4], VAR_9->p_uuid[5], VAR_9->p_uuid[6], VAR_9->p_uuid[7],
   VAR_9->p_uuid[8], VAR_9->p_uuid[9], VAR_9->p_uuid[10], VAR_9->p_uuid[11], VAR_9->p_uuid[12], VAR_9->p_uuid[13], VAR_9->p_uuid[14], VAR_9->p_uuid[15]);

  if (++VAR_12 == VAR_15) {
   break;
  }
 }

 VAR_13->entry_count = VAR_12;

 if (!VAR_7) {

  VAR_4 = VAR_12;
 }
}
