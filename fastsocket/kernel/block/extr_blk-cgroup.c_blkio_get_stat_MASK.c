
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct cgroup_map_cb {int (* fill ) (struct cgroup_map_cb*,char*,scalar_t__) ;} ;
struct TYPE_2__ {scalar_t__** stat_arr; scalar_t__ dequeue; scalar_t__ empty_time; scalar_t__ idle_time; scalar_t__ group_wait_time; scalar_t__ avg_queue_size_samples; scalar_t__ avg_queue_size_sum; scalar_t__ time; } ;
struct blkio_group {TYPE_1__ stats; } ;
typedef enum stat_type { ____Placeholder_stat_type } stat_type ;
typedef enum stat_sub_type { ____Placeholder_stat_sub_type } stat_sub_type ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (char*,int,scalar_t__,struct cgroup_map_cb*,int ) ;
 int FUNC_1 (int,int ,char*,int,int) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct cgroup_map_cb*,char*,scalar_t__) ;
 int FUNC_4 (struct cgroup_map_cb*,char*,scalar_t__) ;

__attribute__((used)) static uint64_t FUNC_5(struct blkio_group *VAR_10,
  struct cgroup_map_cb *VAR_11, dev_t VAR_12, enum stat_type VAR_13)
{
 uint64_t VAR_14;
 char VAR_15[VAR_9];
 enum stat_sub_type VAR_16;

 if (VAR_13 == VAR_6)
  return FUNC_0(VAR_15, VAR_9 - 1,
     VAR_10->stats.time, VAR_11, VAR_12);
 for (VAR_16 = VAR_5; VAR_16 < VAR_7;
   VAR_16++) {
  FUNC_1(VAR_16, VAR_12, VAR_15, VAR_9, 0);
  VAR_11->fill(VAR_11, VAR_15, VAR_10->stats.stat_arr[VAR_13][VAR_16]);
 }
 VAR_14 = VAR_10->stats.stat_arr[VAR_13][VAR_5] +
   VAR_10->stats.stat_arr[VAR_13][VAR_8];
 FUNC_1(VAR_7, VAR_12, VAR_15, VAR_9, 0);
 VAR_11->fill(VAR_11, VAR_15, VAR_14);
 return VAR_14;
}
