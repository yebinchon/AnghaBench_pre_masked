
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_6__* task_t ;
struct io_stats_snapshot {int * ss_io_priority_size; int * ss_io_priority_count; scalar_t__ ss_data_size; scalar_t__ ss_data_count; scalar_t__ ss_metadata_size; scalar_t__ ss_metadata_count; scalar_t__ ss_non_paging_size; scalar_t__ ss_non_paging_count; scalar_t__ ss_paging_size; scalar_t__ ss_paging_count; scalar_t__ ss_disk_writes_size; scalar_t__ ss_disk_writes_count; scalar_t__ ss_disk_reads_size; scalar_t__ ss_disk_reads_count; } ;
struct io_stat_info {int dummy; } ;
typedef scalar_t__ mach_vm_address_t ;
typedef int kern_return_t ;
typedef int kcdata_descriptor_t ;
struct TYPE_12__ {scalar_t__ size; scalar_t__ count; } ;
struct TYPE_11__ {scalar_t__ size; scalar_t__ count; } ;
struct TYPE_10__ {scalar_t__ size; scalar_t__ count; } ;
struct TYPE_9__ {scalar_t__ size; scalar_t__ count; } ;
struct TYPE_15__ {TYPE_5__* io_priority; TYPE_4__ metadata; TYPE_3__ total_io; TYPE_2__ paging; TYPE_1__ disk_reads; } ;
struct TYPE_14__ {TYPE_7__* task_io_stats; } ;
struct TYPE_13__ {int size; int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,scalar_t__*) ;
 int FUNC_3 (TYPE_7__*,int) ;

__attribute__((used)) static kern_return_t
FUNC_4(kcdata_descriptor_t VAR_4, task_t VAR_5)
{
 kern_return_t VAR_6 = VAR_1;
 mach_vm_address_t VAR_7 = 0;


 FUNC_0(VAR_0 == VAR_2);
 if (VAR_5->task_io_stats && !FUNC_3(VAR_5->task_io_stats, sizeof(struct io_stat_info))) {
  FUNC_1(FUNC_2(VAR_4, VAR_3, sizeof(struct io_stats_snapshot), &VAR_7));
  struct io_stats_snapshot *VAR_8 = (struct io_stats_snapshot *)VAR_7;
  VAR_8->ss_disk_reads_count = VAR_5->task_io_stats->disk_reads.count;
  VAR_8->ss_disk_reads_size = VAR_5->task_io_stats->disk_reads.size;
  VAR_8->ss_disk_writes_count = (VAR_5->task_io_stats->total_io.count - VAR_5->task_io_stats->disk_reads.count);
  VAR_8->ss_disk_writes_size = (VAR_5->task_io_stats->total_io.size - VAR_5->task_io_stats->disk_reads.size);
  VAR_8->ss_paging_count = VAR_5->task_io_stats->paging.count;
  VAR_8->ss_paging_size = VAR_5->task_io_stats->paging.size;
  VAR_8->ss_non_paging_count = (VAR_5->task_io_stats->total_io.count - VAR_5->task_io_stats->paging.count);
  VAR_8->ss_non_paging_size = (VAR_5->task_io_stats->total_io.size - VAR_5->task_io_stats->paging.size);
  VAR_8->ss_metadata_count = VAR_5->task_io_stats->metadata.count;
  VAR_8->ss_metadata_size = VAR_5->task_io_stats->metadata.size;
  VAR_8->ss_data_count = (VAR_5->task_io_stats->total_io.count - VAR_5->task_io_stats->metadata.count);
  VAR_8->ss_data_size = (VAR_5->task_io_stats->total_io.size - VAR_5->task_io_stats->metadata.size);
  for(int VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   VAR_8->ss_io_priority_count[VAR_9] = VAR_5->task_io_stats->io_priority[VAR_9].count;
   VAR_8->ss_io_priority_size[VAR_9] = VAR_5->task_io_stats->io_priority[VAR_9].size;
  }
 }

error_exit:
 return VAR_6;
}
