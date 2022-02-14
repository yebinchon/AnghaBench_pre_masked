
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef TYPE_2__* proc_t ;
struct TYPE_12__ {unsigned int entry_count; int js_gencount; TYPE_4__* entries; } ;
typedef TYPE_3__ memorystatus_jetsam_snapshot_t ;
struct TYPE_13__ {scalar_t__ pid; scalar_t__ priority; scalar_t__ jse_killtime; scalar_t__ killed; scalar_t__ jse_memory_region_count; scalar_t__ jse_page_table_pages; scalar_t__ jse_iokit_mapped_pages; scalar_t__ jse_alternate_accounting_compressed_pages; scalar_t__ jse_alternate_accounting_pages; scalar_t__ jse_purgeable_nonvolatile_compressed_pages; scalar_t__ jse_purgeable_nonvolatile_pages; scalar_t__ jse_internal_compressed_pages; scalar_t__ jse_internal_pages; scalar_t__ purgeable_pages; scalar_t__ max_pages_lifetime; scalar_t__ pages; int fds; int user_data; int state; int name; scalar_t__ jse_thaw_count; int jse_idle_delta; int jse_gencount; } ;
typedef TYPE_4__ memorystatus_jetsam_snapshot_entry_t ;
struct TYPE_11__ {scalar_t__ p_pid; scalar_t__ p_memstat_effectivepriority; int task; TYPE_1__* p_fd; int p_memstat_userdata; int p_name; scalar_t__ p_memstat_thaw_count; int p_memstat_idle_delta; } ;
struct TYPE_10__ {int fd_nfiles; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,scalar_t__,scalar_t__,unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,scalar_t__*) ;
 int FUNC_5 (int ,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (int ,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,TYPE_4__*,int ) ;
 TYPE_3__* VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_8 (char*,unsigned int) ;
 int VAR_5 ;
 int FUNC_9 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_10(proc_t VAR_6, uint32_t VAR_7, uint64_t VAR_8)
{
 memorystatus_jetsam_snapshot_entry_t *VAR_9 = ((void*)0);
 memorystatus_jetsam_snapshot_t *VAR_10 = ((void*)0);
 memorystatus_jetsam_snapshot_entry_t *VAR_11 = ((void*)0);

 unsigned int VAR_12;

 FUNC_0(VAR_5, VAR_0);

 if (VAR_3 == 0) {




  return;
 }





 FUNC_2(VAR_7 != 0 && VAR_8 != 0);

 VAR_10 = VAR_2;
 VAR_11 = VAR_2->entries;

 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  if (VAR_11[VAR_12].pid == VAR_6->p_pid) {

   VAR_9 = &VAR_11[VAR_12];

   if (VAR_9->killed || VAR_9->jse_killtime) {





    FUNC_2(VAR_9->killed && VAR_9->jse_killtime);
    break;
   }





   VAR_9->killed = VAR_7;
   VAR_9->jse_killtime = VAR_8;
   VAR_9->jse_gencount = VAR_10->js_gencount;
   VAR_9->jse_idle_delta = VAR_6->p_memstat_idle_delta;



   VAR_9->jse_thaw_count = 0;






    if (VAR_9->priority != VAR_6->p_memstat_effectivepriority) {

    FUNC_9(VAR_9->name, VAR_6->p_name, sizeof(VAR_9->name));
    VAR_9->priority = VAR_6->p_memstat_effectivepriority;
    VAR_9->state = FUNC_3(VAR_6);
    VAR_9->user_data = VAR_6->p_memstat_userdata;
    VAR_9->fds = VAR_6->p_fd->fd_nfiles;
    }





    uint32_t VAR_13 = 0;
    uint32_t VAR_14 = 0;
    uint32_t VAR_15 = 0;

    FUNC_5(VAR_6->task, &VAR_13, &VAR_14, &VAR_15);
    VAR_9->pages = (uint64_t)VAR_13;
    VAR_9->max_pages_lifetime = (uint64_t)VAR_14;
    VAR_9->purgeable_pages = (uint64_t)VAR_15;

    uint64_t VAR_16 = 0;
    uint64_t VAR_17 = 0;
    uint64_t VAR_18 = 0;
    uint64_t VAR_19 = 0;
    uint64_t VAR_20 = 0;
    uint64_t VAR_21 = 0;
    uint64_t VAR_22 = 0;
    uint64_t VAR_23 = 0;

    FUNC_6(VAR_6->task, &VAR_16, &VAR_17,
           &VAR_18, &VAR_19,
           &VAR_20, &VAR_21,
           &VAR_22, &VAR_23);

    VAR_9->jse_internal_pages = VAR_16;
    VAR_9->jse_internal_compressed_pages = VAR_17;
    VAR_9->jse_purgeable_nonvolatile_pages = VAR_18;
    VAR_9->jse_purgeable_nonvolatile_compressed_pages = VAR_19;
    VAR_9->jse_alternate_accounting_pages = VAR_20;
    VAR_9->jse_alternate_accounting_compressed_pages = VAR_21;
    VAR_9->jse_iokit_mapped_pages = VAR_22;
    VAR_9->jse_page_table_pages = VAR_23;

    uint64_t VAR_24 = 0;
    FUNC_4(VAR_6->task, &VAR_24);
    VAR_9->jse_memory_region_count = VAR_24;

    goto exit;
  }
 }

 if (VAR_9 == ((void*)0)) {





  if (VAR_3 < VAR_4) {




   FUNC_2(VAR_3 == VAR_10->entry_count);

   unsigned int VAR_25 = VAR_3;

   if(FUNC_7(VAR_6, &VAR_11[VAR_25], (VAR_10->js_gencount)) == VAR_1) {

    VAR_9 = &VAR_11[VAR_25];
    VAR_9->killed = VAR_7;
    VAR_9->jse_killtime = VAR_8;

    VAR_10->entry_count = ++VAR_25;
    VAR_3 = VAR_25;

    if (VAR_3 >= VAR_4) {





     FUNC_8("memorystatus: WARNING snapshot buffer is full, count %d\n",
            VAR_3);
    }
   }
  }
 }

exit:
 if (VAR_9 == ((void*)0)) {
  FUNC_1(4, "memorystatus_update_jetsam_snapshot_entry_locked: failed to update pid %d, priority %d, count %d\n",
       VAR_6->p_pid, VAR_6->p_memstat_effectivepriority, VAR_3);
 }

 return;
}
