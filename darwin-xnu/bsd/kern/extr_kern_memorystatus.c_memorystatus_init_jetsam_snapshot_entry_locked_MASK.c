
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* uint64_t ;
typedef scalar_t__ uint32_t ;
typedef TYPE_4__* proc_t ;
struct TYPE_12__ {void* tv_usec; void* tv_sec; } ;
struct TYPE_15__ {void* jse_coalition_jetsam_id; scalar_t__ jse_thaw_count; int jse_idle_delta; void* jse_gencount; scalar_t__ killed; scalar_t__ jse_killtime; int jse_starttime; TYPE_2__ cpu_time; int fds; int * uuid; int user_data; int state; void* jse_memory_region_count; void* jse_page_table_pages; void* jse_iokit_mapped_pages; void* jse_alternate_accounting_compressed_pages; void* jse_alternate_accounting_pages; void* jse_purgeable_nonvolatile_compressed_pages; void* jse_purgeable_nonvolatile_pages; void* jse_internal_compressed_pages; void* jse_internal_pages; void* purgeable_pages; void* max_pages_lifetime; void* pages; int priority; int * name; int pid; } ;
typedef TYPE_5__ memorystatus_jetsam_snapshot_entry_t ;
typedef void* int64_t ;
typedef scalar_t__ clock_usec_t ;
typedef scalar_t__ clock_sec_t ;
typedef int boolean_t ;
struct TYPE_14__ {scalar_t__ p_memstat_thaw_count; int p_memstat_idle_delta; TYPE_3__* p_stats; int task; TYPE_1__* p_fd; int * p_uuid; int p_memstat_userdata; int p_memstat_effectivepriority; int p_name; int p_pid; } ;
struct TYPE_13__ {int ps_start; } ;
struct TYPE_11__ {int fd_nfiles; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,void**) ;
 int FUNC_6 (int ,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_7 (int ,void**,void**,void**,void**,void**,void**,void**,void**) ;
 int FUNC_8 (TYPE_5__*,int ,int) ;
 int FUNC_9 (TYPE_4__*,void**) ;
 int FUNC_10 (int *,int ,int) ;

__attribute__((used)) static boolean_t
FUNC_11(proc_t VAR_3, memorystatus_jetsam_snapshot_entry_t *VAR_4, uint64_t VAR_5)
{
 clock_sec_t VAR_6;
 clock_usec_t VAR_7;
 uint32_t VAR_8 = 0;
 uint32_t VAR_9 = 0;
 uint32_t VAR_10 = 0;
 uint64_t VAR_11 = 0;
 uint64_t VAR_12 = 0;
 uint64_t VAR_13 = 0;
 uint64_t VAR_14 = 0;
 uint64_t VAR_15 = 0;
 uint64_t VAR_16 = 0;
 uint64_t VAR_17 = 0;
 uint64_t VAR_18 =0;
 uint64_t VAR_19 = 0;
 uint64_t VAR_20[VAR_0];

 FUNC_8(VAR_4, 0, sizeof(memorystatus_jetsam_snapshot_entry_t));

 VAR_4->pid = VAR_3->p_pid;
 FUNC_10(&VAR_4->name[0], VAR_3->p_name, sizeof(VAR_4->name));
 VAR_4->priority = VAR_3->p_memstat_effectivepriority;

 FUNC_6(VAR_3->task, &VAR_8, &VAR_9, &VAR_10);
 VAR_4->pages = (uint64_t)VAR_8;
 VAR_4->max_pages_lifetime = (uint64_t)VAR_9;
 VAR_4->purgeable_pages = (uint64_t)VAR_10;

 FUNC_7(VAR_3->task, &VAR_11, &VAR_12,
        &VAR_13, &VAR_14,
        &VAR_15, &VAR_16,
        &VAR_17, &VAR_18);

 VAR_4->jse_internal_pages = VAR_11;
 VAR_4->jse_internal_compressed_pages = VAR_12;
 VAR_4->jse_purgeable_nonvolatile_pages = VAR_13;
 VAR_4->jse_purgeable_nonvolatile_compressed_pages = VAR_14;
 VAR_4->jse_alternate_accounting_pages = VAR_15;
 VAR_4->jse_alternate_accounting_compressed_pages = VAR_16;
 VAR_4->jse_iokit_mapped_pages = VAR_17;
 VAR_4->jse_page_table_pages = VAR_18;

 FUNC_5(VAR_3->task, &VAR_19);
 VAR_4->jse_memory_region_count = VAR_19;

 VAR_4->state = FUNC_4(VAR_3);
 VAR_4->user_data = VAR_3->p_memstat_userdata;
 FUNC_3(&VAR_4->uuid[0], &VAR_3->p_uuid[0], sizeof(VAR_3->p_uuid));
 VAR_4->fds = VAR_3->p_fd->fd_nfiles;

 FUNC_0(FUNC_2(VAR_3->task), &VAR_6, &VAR_7);
 VAR_4->cpu_time.tv_sec = (int64_t)VAR_6;
 VAR_4->cpu_time.tv_usec = (int64_t)VAR_7;

 FUNC_1(VAR_3->p_stats != ((void*)0));
 VAR_4->jse_starttime = VAR_3->p_stats->ps_start;
 VAR_4->jse_killtime = 0;
 VAR_4->killed = 0;
 VAR_4->jse_gencount = VAR_5;

 VAR_4->jse_idle_delta = VAR_3->p_memstat_idle_delta;




 VAR_4->jse_thaw_count = 0;


 FUNC_9(VAR_3, VAR_20);
 VAR_4->jse_coalition_jetsam_id = VAR_20[VAR_1];

 return VAR_2;
}
