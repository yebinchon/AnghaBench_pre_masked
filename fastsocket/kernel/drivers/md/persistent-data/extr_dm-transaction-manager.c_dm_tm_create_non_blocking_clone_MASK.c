
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_transaction_manager {int is_clone; struct dm_transaction_manager* real; } ;


 int VAR_0 ;
 struct dm_transaction_manager* FUNC_0 (int,int ) ;

struct dm_transaction_manager *FUNC_1(struct dm_transaction_manager *VAR_1)
{
 struct dm_transaction_manager *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (VAR_2) {
  VAR_2->is_clone = 1;
  VAR_2->real = VAR_1;
 }

 return VAR_2;
}
