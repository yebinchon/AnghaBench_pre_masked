
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct fatent_operations {int (* ent_put ) (struct fat_entry*,int) ;} ;
struct fat_entry {int nr_bhs; int bhs; } ;
struct TYPE_2__ {struct fatent_operations* fatent_ops; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct fat_entry*,int) ;

int FUNC_4(struct inode *VAR_0, struct fat_entry *VAR_1,
    int VAR_2, int VAR_3)
{
 struct super_block *VAR_4 = VAR_0->i_sb;
 struct fatent_operations *VAR_5 = FUNC_0(VAR_4)->fatent_ops;
 int VAR_6;

 VAR_5->ent_put(VAR_1, VAR_2);
 if (VAR_3) {
  VAR_6 = FUNC_2(VAR_1->bhs, VAR_1->nr_bhs);
  if (VAR_6)
   return VAR_6;
 }
 return FUNC_1(VAR_4, VAR_1->bhs, VAR_1->nr_bhs);
}
