
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {int td; struct pool* pool; } ;
struct pool {int mapping_pool; } ;
struct dm_thin_new_mapping {int list; int cell; int data_block; int virt_block; scalar_t__ err; int saved_bi_end_io; struct bio* bio; struct thin_c* tc; } ;
struct bio {int bi_end_io; } ;


 int FUNC_0 (struct bio*,int ) ;
 int FUNC_1 (struct thin_c*,int ) ;
 int FUNC_2 (struct thin_c*,int ) ;
 int FUNC_3 (struct pool*,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct dm_thin_new_mapping*,int ) ;
 int FUNC_7 (struct pool*,char*,int) ;

__attribute__((used)) static void FUNC_8(struct dm_thin_new_mapping *VAR_0)
{
 struct thin_c *VAR_1 = VAR_0->tc;
 struct pool *VAR_2 = VAR_1->pool;
 struct bio *VAR_3;
 int VAR_4;

 VAR_3 = VAR_0->bio;
 if (VAR_3)
  VAR_3->bi_end_io = VAR_0->saved_bi_end_io;

 if (VAR_0->err) {
  FUNC_3(VAR_2, VAR_0->cell);
  goto out;
 }






 VAR_4 = FUNC_4(VAR_1->td, VAR_0->virt_block, VAR_0->data_block);
 if (VAR_4) {
  FUNC_7(VAR_2, "dm_thin_insert_block", VAR_4);
  FUNC_3(VAR_2, VAR_0->cell);
  goto out;
 }







 if (VAR_3) {
  FUNC_2(VAR_1, VAR_0->cell);
  FUNC_0(VAR_3, 0);
 } else
  FUNC_1(VAR_1, VAR_0->cell);

out:
 FUNC_5(&VAR_0->list);
 FUNC_6(VAR_0, VAR_2->mapping_pool);
}
