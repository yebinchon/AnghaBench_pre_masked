
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {struct mapped_device* queuedata; } ;
struct mapped_device {int dummy; } ;
struct dm_target {TYPE_1__* type; } ;
struct dm_table {int dummy; } ;
struct bvec_merge_data {int bi_size; int bi_sector; } ;
struct bio_vec {int bv_len; } ;
typedef int sector_t ;
struct TYPE_2__ {int (* merge ) (struct dm_target*,struct bvec_merge_data*,struct bio_vec*,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct dm_table* FUNC_0 (struct mapped_device*) ;
 struct dm_target* FUNC_1 (struct dm_table*,int ) ;
 int FUNC_2 (struct dm_table*) ;
 int FUNC_3 (struct dm_target*) ;
 int FUNC_4 (int ,struct dm_target*) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (struct request_queue*) ;
 int FUNC_7 (struct dm_target*,struct bvec_merge_data*,struct bio_vec*,int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct request_queue *VAR_3,
    struct bvec_merge_data *VAR_4,
    struct bio_vec *VAR_5)
{
 struct mapped_device *VAR_6 = VAR_3->queuedata;
 struct dm_table *VAR_7 = FUNC_0(VAR_6);
 struct dm_target *VAR_8;
 sector_t VAR_9;
 int VAR_10 = 0;

 if (FUNC_8(!VAR_7))
  goto out;

 VAR_8 = FUNC_1(VAR_7, VAR_4->bi_sector);
 if (!FUNC_3(VAR_8))
  goto out_table;




 VAR_9 = FUNC_5(FUNC_4(VAR_4->bi_sector, VAR_8),
     (sector_t) VAR_0);
 VAR_10 = (VAR_9 << VAR_2) - VAR_4->bi_size;
 if (VAR_10 < 0)
  VAR_10 = 0;






 if (VAR_10 && VAR_8->type->merge)
  VAR_10 = VAR_8->type->merge(VAR_8, VAR_4, VAR_5, VAR_10);







 else if (FUNC_6(VAR_3) <= VAR_1 >> 9)

  VAR_10 = 0;

out_table:
 FUNC_2(VAR_7);

out:



 if (VAR_10 <= VAR_5->bv_len && !(VAR_4->bi_size >> VAR_2))
  VAR_10 = VAR_5->bv_len;

 return VAR_10;
}
