
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mspro_block_data {scalar_t__ usage_count; } ;
struct gendisk {struct mspro_block_data* private_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct gendisk*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct mspro_block_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct gendisk*) ;

__attribute__((used)) static int FUNC_7(struct gendisk *VAR_3)
{
 struct mspro_block_data *VAR_4 = VAR_3->private_data;
 int VAR_5 = FUNC_0(FUNC_1(VAR_3)) >> VAR_0;

 FUNC_4(&VAR_2);

 if (VAR_4) {
  if (VAR_4->usage_count)
   VAR_4->usage_count--;

  if (!VAR_4->usage_count) {
   FUNC_3(VAR_4);
   VAR_3->private_data = ((void*)0);
   FUNC_2(&VAR_1, VAR_5);
   FUNC_6(VAR_3);
  }
 }

 FUNC_5(&VAR_2);

 return 0;
}
