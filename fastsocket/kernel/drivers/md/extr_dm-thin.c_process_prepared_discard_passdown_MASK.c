
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thin_c {TYPE_1__* pool; } ;
struct dm_thin_new_mapping {int bio; int data_block; scalar_t__ definitely_not_shared; scalar_t__ pass_discard; int cell2; int cell; struct thin_c* tc; } ;
struct TYPE_2__ {int mapping_pool; int pmd; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct thin_c*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (struct dm_thin_new_mapping*,int ) ;
 int FUNC_5 (struct thin_c*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct dm_thin_new_mapping *VAR_0)
{
 struct thin_c *VAR_1 = VAR_0->tc;

 FUNC_3(VAR_1->pool, VAR_0->bio);
 FUNC_1(VAR_1, VAR_0->cell);
 FUNC_1(VAR_1, VAR_0->cell2);

 if (VAR_0->pass_discard)
  if (VAR_0->definitely_not_shared)
   FUNC_5(VAR_1, VAR_0->bio, VAR_0->data_block);
  else {
   bool VAR_2 = 0;
   if (FUNC_2(VAR_1->pool->pmd, VAR_0->data_block, &VAR_2) || VAR_2)
    FUNC_0(VAR_0->bio, 0);
   else
    FUNC_5(VAR_1, VAR_0->bio, VAR_0->data_block);
  }
 else
  FUNC_0(VAR_0->bio, 0);

 FUNC_4(VAR_0, VAR_1->pool->mapping_pool);
}
