
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shadow_info {int hlist; int where; } ;
struct dm_transaction_manager {int lock; scalar_t__ buckets; } ;
typedef int dm_block_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 struct shadow_info* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct dm_transaction_manager *VAR_2, dm_block_t VAR_3)
{
 unsigned VAR_4;
 struct shadow_info *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (VAR_5) {
  VAR_5->where = VAR_3;
  VAR_4 = FUNC_0(VAR_3, VAR_0);
  FUNC_3(&VAR_2->lock);
  FUNC_1(&VAR_5->hlist, VAR_2->buckets + VAR_4);
  FUNC_4(&VAR_2->lock);
 }
}
