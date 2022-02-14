
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mirror_set {unsigned int nr_mirrors; int kmirrord_wq; int kcopyd_client; int trigger_event; scalar_t__ timer_pending; int timer; int kmirrord_work; int rh; } ;
struct dm_target {char* error; int num_flush_requests; int num_discard_requests; int discard_zeroes_data_unsupported; struct mirror_set* private; } ;
struct dm_dirty_log {TYPE_1__* type; } ;
struct TYPE_2__ {int (* get_region_size ) (struct dm_dirty_log*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct mirror_set* FUNC_4 (unsigned int,int ,struct dm_target*,struct dm_dirty_log*) ;
 struct dm_dirty_log* FUNC_5 (struct dm_target*,unsigned int,char**,unsigned int*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct dm_dirty_log*) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct dm_target*,int ) ;
 int VAR_4 ;
 int FUNC_12 (struct mirror_set*,struct dm_target*,unsigned int) ;
 int FUNC_13 (struct mirror_set*,struct dm_target*,unsigned int,char**) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct mirror_set*,unsigned int,char**,unsigned int*) ;
 int FUNC_16 (char*,char*,unsigned int*,char*) ;
 int FUNC_17 (struct dm_dirty_log*) ;
 int VAR_5 ;
 int FUNC_18 (struct mirror_set*) ;

__attribute__((used)) static int FUNC_19(struct dm_target *VAR_6, unsigned int VAR_7, char **VAR_8)
{
 int VAR_9;
 unsigned int VAR_10, VAR_11, VAR_12;
 struct mirror_set *VAR_13;
 struct dm_dirty_log *VAR_14;
 char VAR_15;

 VAR_14 = FUNC_5(VAR_6, VAR_7, VAR_8, &VAR_12);
 if (!VAR_14)
  return -VAR_1;

 VAR_8 += VAR_12;
 VAR_7 -= VAR_12;

 if (!VAR_7 || FUNC_16(VAR_8[0], "%u%c", &VAR_10, &VAR_15) != 1 ||
     VAR_10 < 2 || VAR_10 > VAR_0 + 1) {
  VAR_6->error = "Invalid number of mirrors";
  FUNC_8(VAR_14);
  return -VAR_1;
 }

 VAR_8++, VAR_7--;

 if (VAR_7 < VAR_10 * 2) {
  VAR_6->error = "Too few mirror arguments";
  FUNC_8(VAR_14);
  return -VAR_1;
 }

 VAR_13 = FUNC_4(VAR_10, VAR_14->type->get_region_size(VAR_14), VAR_6, VAR_14);
 if (!VAR_13) {
  FUNC_8(VAR_14);
  return -VAR_2;
 }


 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  VAR_9 = FUNC_13(VAR_13, VAR_6, VAR_11, VAR_8);
  if (VAR_9) {
   FUNC_12(VAR_13, VAR_6, VAR_11);
   return VAR_9;
  }
  VAR_8 += 2;
  VAR_7 -= 2;
 }

 VAR_6->private = VAR_13;

 VAR_9 = FUNC_11(VAR_6, FUNC_10(VAR_13->rh));
 if (VAR_9)
  goto err_free_context;

 VAR_6->num_flush_requests = 1;
 VAR_6->num_discard_requests = 1;
 VAR_6->discard_zeroes_data_unsupported = 1;

 VAR_13->kmirrord_wq = FUNC_6("kmirrord");
 if (!VAR_13->kmirrord_wq) {
  FUNC_0("couldn't start kmirrord");
  VAR_9 = -VAR_2;
  goto err_free_context;
 }
 FUNC_1(&VAR_13->kmirrord_work, VAR_4);
 FUNC_14(&VAR_13->timer);
 VAR_13->timer_pending = 0;
 FUNC_1(&VAR_13->trigger_event, VAR_5);

 VAR_9 = FUNC_15(VAR_13, VAR_7, VAR_8, &VAR_12);
 if (VAR_9)
  goto err_destroy_wq;

 VAR_8 += VAR_12;
 VAR_7 -= VAR_12;
 if (VAR_7) {
  VAR_6->error = "Too many mirror arguments";
  VAR_9 = -VAR_1;
  goto err_destroy_wq;
 }

 VAR_13->kcopyd_client = FUNC_9(&VAR_3);
 if (FUNC_2(VAR_13->kcopyd_client)) {
  VAR_9 = FUNC_3(VAR_13->kcopyd_client);
  goto err_destroy_wq;
 }

 FUNC_18(VAR_13);
 return 0;

err_destroy_wq:
 FUNC_7(VAR_13->kmirrord_wq);
err_free_context:
 FUNC_12(VAR_13, VAR_6, VAR_13->nr_mirrors);
 return VAR_9;
}
