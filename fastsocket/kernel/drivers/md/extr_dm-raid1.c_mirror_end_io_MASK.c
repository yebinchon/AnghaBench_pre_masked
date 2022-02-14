
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union map_info {struct dm_raid1_read_record* ptr; int ll; } ;
struct mirror_set {int read_record_pool; int rh; } ;
struct mirror {TYPE_1__* dev; } ;
struct dm_target {scalar_t__ private; } ;
struct dm_bio_details {int dummy; } ;
struct dm_raid1_read_record {struct dm_bio_details details; struct mirror* m; } ;
struct bio {int bi_rw; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct bio*) ;
 scalar_t__ FUNC_3 (struct bio*,int ) ;
 scalar_t__ FUNC_4 (struct mirror*) ;
 int FUNC_5 (struct dm_bio_details*,struct bio*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct mirror*,int ) ;
 int FUNC_8 (struct dm_raid1_read_record*,int ) ;
 scalar_t__ FUNC_9 (struct mirror_set*,struct bio*) ;
 int FUNC_10 (struct mirror_set*,struct bio*,int) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct dm_target *VAR_8, struct bio *VAR_9,
    int VAR_10, union map_info *VAR_11)
{
 int VAR_12 = FUNC_2(VAR_9);
 struct mirror_set *VAR_13 = (struct mirror_set *) VAR_8->private;
 struct mirror *VAR_14 = ((void*)0);
 struct dm_bio_details *VAR_15 = ((void*)0);
 struct dm_raid1_read_record *VAR_16 = VAR_11->ptr;




 if (VAR_12 == VAR_7) {
  if (!(VAR_9->bi_rw & (VAR_1 | VAR_0)))
   FUNC_6(VAR_13->rh, VAR_11->ll);
  return VAR_10;
 }

 if (VAR_10 == -VAR_5)
  goto out;

 if ((VAR_10 == -VAR_6) && FUNC_3(VAR_9, VAR_2))
  goto out;

 if (FUNC_11(VAR_10)) {
  if (!VAR_16) {





   FUNC_1("Mirror read failed.");
   return -VAR_4;
  }

  VAR_14 = VAR_16->m;

  FUNC_0("Mirror read failed from %s. Trying alternative device.",
        VAR_14->dev->name);

  FUNC_7(VAR_14, VAR_3);





  if (FUNC_4(VAR_14) || FUNC_9(VAR_13, VAR_9)) {
   VAR_15 = &VAR_16->details;

   FUNC_5(VAR_15, VAR_9);
   FUNC_8(VAR_16, VAR_13->read_record_pool);
   VAR_11->ptr = ((void*)0);
   FUNC_10(VAR_13, VAR_9, VAR_12);
   return 1;
  }
  FUNC_0("All replicated volumes dead, failing I/O");
 }

out:
 if (VAR_16) {
  FUNC_8(VAR_16, VAR_13->read_record_pool);
  VAR_11->ptr = ((void*)0);
 }

 return VAR_10;
}
