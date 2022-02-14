
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {struct pool* pool; } ;
struct pool {int pmd; } ;
typedef int dm_block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct pool*,int ) ;
 int FUNC_2 (struct pool*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (struct pool*) ;
 int FUNC_6 (struct pool*,char*,int) ;
 int FUNC_7 (struct pool*,int ) ;

__attribute__((used)) static int FUNC_8(struct thin_c *VAR_4, dm_block_t *VAR_5)
{
 int VAR_6;
 dm_block_t VAR_7;
 struct pool *VAR_8 = VAR_4->pool;

 if (FUNC_0(FUNC_5(VAR_8) != VAR_3))
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_8->pmd, &VAR_7);
 if (VAR_6) {
  FUNC_6(VAR_8, "dm_pool_get_free_block_count", VAR_6);
  return VAR_6;
 }

 FUNC_1(VAR_8, VAR_7);

 if (!VAR_7) {




  VAR_6 = FUNC_2(VAR_8);
  if (VAR_6)
   return VAR_6;

  VAR_6 = FUNC_4(VAR_8->pmd, &VAR_7);
  if (VAR_6) {
   FUNC_6(VAR_8, "dm_pool_get_free_block_count", VAR_6);
   return VAR_6;
  }

  if (!VAR_7) {
   FUNC_7(VAR_8, VAR_2);
   return -VAR_1;
  }
 }

 VAR_6 = FUNC_3(VAR_8->pmd, VAR_5);
 if (VAR_6) {
  FUNC_6(VAR_8, "dm_pool_alloc_data_block", VAR_6);
  return VAR_6;
 }

 return 0;
}
