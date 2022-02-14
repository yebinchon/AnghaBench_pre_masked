
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_transaction_manager {int bm; int sm; } ;
struct dm_block_validator {int dummy; } ;
struct dm_block {int dummy; } ;
typedef int dm_block_t ;


 int FUNC_0 (struct dm_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct dm_block_validator*,struct dm_block**) ;
 int FUNC_3 (struct dm_block*) ;
 int FUNC_4 (int ,int ,struct dm_block_validator*,struct dm_block**) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct dm_transaction_manager *VAR_0, dm_block_t VAR_1,
     struct dm_block_validator *VAR_2,
     struct dm_block **VAR_3)
{
 int VAR_4;
 dm_block_t VAR_5;
 struct dm_block *VAR_6;

 VAR_4 = FUNC_6(VAR_0->sm, &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_5(VAR_0->sm, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_0->bm, VAR_1, VAR_2, &VAR_6);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_4 = FUNC_4(VAR_0->bm, VAR_5, VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_3(VAR_6);
  return VAR_4;
 }

 FUNC_7(FUNC_0(*VAR_3), FUNC_0(VAR_6),
        FUNC_1(VAR_0->bm));

 FUNC_3(VAR_6);
 return VAR_4;
}
