
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct fatent_operations {int (* ent_bread ) (struct super_block*,struct fat_entry*,int,int ) ;int (* ent_blocknr ) (struct super_block*,int ,int*,int *) ;} ;
struct fat_entry {int entry; } ;
typedef int sector_t ;
struct TYPE_2__ {struct fatent_operations* fatent_ops; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct fat_entry*) ;
 int FUNC_2 (struct super_block*,int ,int*,int *) ;
 int FUNC_3 (struct super_block*,struct fat_entry*,int,int ) ;

__attribute__((used)) static inline int FUNC_4(struct super_block *VAR_0,
         struct fat_entry *VAR_1)
{
 struct fatent_operations *VAR_2 = FUNC_0(VAR_0)->fatent_ops;
 sector_t VAR_3;
 int VAR_4;

 FUNC_1(VAR_1);
 VAR_2->ent_blocknr(VAR_0, VAR_1->entry, &VAR_4, &VAR_3);
 return VAR_2->ent_bread(VAR_0, VAR_1, VAR_4, VAR_3);
}
