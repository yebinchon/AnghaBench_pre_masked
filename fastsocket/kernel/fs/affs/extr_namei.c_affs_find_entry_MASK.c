
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int toupper_t ;
struct super_block {int dummy; } ;
struct inode {int i_ino; struct super_block* i_sb; } ;
struct TYPE_4__ {scalar_t__ len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;
struct buffer_head {int dummy; } ;
struct TYPE_6__ {int * table; } ;
struct TYPE_5__ {int hash_chain; int name; } ;


 TYPE_3__* FUNC_0 (struct buffer_head*) ;
 TYPE_2__* FUNC_1 (struct super_block*,struct buffer_head*) ;
 int VAR_0 ;
 struct buffer_head* FUNC_2 (int ) ;
 struct buffer_head* FUNC_3 (struct super_block*,int ) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct super_block*) ;
 size_t FUNC_6 (struct super_block*,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (struct dentry*,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int,int ) ;

__attribute__((used)) static struct buffer_head *
FUNC_10(struct inode *VAR_1, struct dentry *VAR_2)
{
 struct super_block *VAR_3 = VAR_1->i_sb;
 struct buffer_head *VAR_4;
 toupper_t VAR_5 = FUNC_5(VAR_3);
 u32 VAR_6;

 FUNC_9("AFFS: find_entry(\"%.*s\")\n", (int)VAR_2->d_name.len, VAR_2->d_name.name);

 VAR_4 = FUNC_3(VAR_3, VAR_1->i_ino);
 if (!VAR_4)
  return FUNC_2(-VAR_0);

 VAR_6 = FUNC_8(FUNC_0(VAR_4)->table[FUNC_6(VAR_3, VAR_2->d_name.name, VAR_2->d_name.len)]);

 for (;;) {
  FUNC_4(VAR_4);
  if (VAR_6 == 0)
   return ((void*)0);
  VAR_4 = FUNC_3(VAR_3, VAR_6);
  if (!VAR_4)
   return FUNC_2(-VAR_0);
  if (FUNC_7(VAR_2, FUNC_1(VAR_3, VAR_4)->name, VAR_5))
   return VAR_4;
  VAR_6 = FUNC_8(FUNC_1(VAR_3, VAR_4)->hash_chain);
 }
}
