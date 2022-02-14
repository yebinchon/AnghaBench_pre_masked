
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_4__* task_t ;
struct TYPE_15__ {scalar_t__ ri_diskio_byteswritten; scalar_t__ ri_diskio_bytesread; } ;
typedef TYPE_5__ rusage_info_current ;
struct TYPE_14__ {TYPE_3__* task_io_stats; } ;
struct TYPE_12__ {scalar_t__ size; } ;
struct TYPE_11__ {scalar_t__ size; } ;
struct TYPE_13__ {TYPE_2__ disk_reads; TYPE_1__ total_io; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;

int
FUNC_3(task_t VAR_1, rusage_info_current *VAR_2)
{
 FUNC_0(VAR_1 != VAR_0);
 FUNC_1(VAR_1);

 if (VAR_1->task_io_stats) {
  VAR_2->ri_diskio_bytesread = VAR_1->task_io_stats->disk_reads.size;
  VAR_2->ri_diskio_byteswritten = (VAR_1->task_io_stats->total_io.size - VAR_1->task_io_stats->disk_reads.size);
 } else {

  VAR_2->ri_diskio_bytesread = 0;
  VAR_2->ri_diskio_byteswritten = 0;
 }
 FUNC_2(VAR_1);
 return (0);
}
