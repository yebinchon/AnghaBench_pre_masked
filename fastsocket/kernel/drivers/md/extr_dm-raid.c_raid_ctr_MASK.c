
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct raid_type {int dummy; } ;
struct TYPE_5__ {scalar_t__ array_sectors; int reconfig_mutex; scalar_t__ in_sync; int event_work; int sync_super; } ;
struct TYPE_6__ {int unplug_fn; int congested_fn; } ;
struct raid_set {TYPE_1__ md; TYPE_4__ callbacks; } ;
struct dm_target {char* error; int num_flush_requests; scalar_t__ len; int table; struct raid_set* private; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_1 (struct raid_set*) ;
 int FUNC_2 (struct raid_set*) ;
 int FUNC_3 (struct dm_target*,struct raid_set*) ;
 struct raid_set* FUNC_4 (struct dm_target*,struct raid_type*,unsigned int) ;
 int FUNC_5 (struct raid_set*) ;
 int FUNC_6 (struct raid_set*,char**) ;
 int FUNC_7 (int ,TYPE_4__*) ;
 int VAR_2 ;
 struct raid_type* FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,int,unsigned long*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct raid_set*,char**,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_16(struct dm_target *VAR_6, unsigned VAR_7, char **VAR_8)
{
 int VAR_9;
 struct raid_type *VAR_10;
 unsigned long VAR_11, VAR_12;
 struct raid_set *VAR_13 = ((void*)0);


 if (VAR_7 < 2) {
  VAR_6->error = "Too few arguments";
  return -VAR_0;
 }


 VAR_10 = FUNC_8(VAR_8[0]);
 if (!VAR_10) {
  VAR_6->error = "Unrecognised raid_type";
  return -VAR_0;
 }
 VAR_7--;
 VAR_8++;


 if (FUNC_9(VAR_8[0], 10, &VAR_11) < 0) {
  VAR_6->error = "Cannot understand number of RAID parameters";
  return -VAR_0;
 }
 VAR_7--;
 VAR_8++;


 if (VAR_11 + 1 > VAR_7) {
  VAR_6->error = "Arguments do not agree with counts given";
  return -VAR_0;
 }

 if ((FUNC_9(VAR_8[VAR_11], 10, &VAR_12) < 0) ||
     (VAR_12 >= VAR_1)) {
  VAR_6->error = "Cannot understand number of raid devices";
  return -VAR_0;
 }

 VAR_13 = FUNC_4(VAR_6, VAR_10, (unsigned)VAR_12);
 if (FUNC_1(VAR_13))
  return FUNC_2(VAR_13);

 VAR_9 = FUNC_15(VAR_13, VAR_8, (unsigned)VAR_11);
 if (VAR_9)
  goto bad;

 VAR_9 = -VAR_0;

 VAR_7 -= VAR_11 + 1;
 VAR_8 += VAR_11 + 1;

 if (VAR_7 != (VAR_12 * 2)) {
  VAR_6->error = "Supplied RAID devices does not match the count given";
  goto bad;
 }

 VAR_9 = FUNC_6(VAR_13, VAR_8);
 if (VAR_9)
  goto bad;

 VAR_13->md.sync_super = VAR_5;
 VAR_9 = FUNC_3(VAR_6, VAR_13);
 if (VAR_9)
  goto bad;

 FUNC_0(&VAR_13->md.event_work, VAR_2);
 VAR_6->private = VAR_13;
 VAR_6->num_flush_requests = 1;

 FUNC_13(&VAR_13->md.reconfig_mutex);
 VAR_9 = FUNC_10(&VAR_13->md);
 VAR_13->md.in_sync = 0;
 FUNC_14(&VAR_13->md.reconfig_mutex);

 if (VAR_9) {
  VAR_6->error = "Fail to run raid array";
  goto bad;
 }

 if (VAR_6->len != VAR_13->md.array_sectors) {
  VAR_6->error = "Array size does not match requested target length";
  VAR_9 = -VAR_0;
  goto size_mismatch;
 }
 VAR_13->callbacks.congested_fn = VAR_3;
 VAR_13->callbacks.unplug_fn = VAR_4;
 FUNC_7(VAR_6->table, &VAR_13->callbacks);

 FUNC_12(&VAR_13->md);
 return 0;

size_mismatch:
 FUNC_11(&VAR_13->md);
bad:
 FUNC_5(VAR_13);

 return VAR_9;
}
