
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {scalar_t__ sync_mode; } ;
struct super_block {int dummy; } ;
struct object_info {int size; int attr; int execaddr; int loadaddr; int parent_id; scalar_t__ name_len; int file_id; } ;
struct inode {int i_size; int i_ino; struct super_block* i_sb; } ;
struct TYPE_2__ {int attr; int execaddr; int loadaddr; int parent_id; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct super_block*,struct object_info*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int FUNC_4(struct inode *VAR_1, struct writeback_control *VAR_2)
{
 struct super_block *VAR_3 = VAR_1->i_sb;
 struct object_info VAR_4;
 int VAR_5;

 FUNC_2();
 VAR_4.file_id = VAR_1->i_ino;
 VAR_4.name_len = 0;
 VAR_4.parent_id = FUNC_0(VAR_1)->parent_id;
 VAR_4.loadaddr = FUNC_0(VAR_1)->loadaddr;
 VAR_4.execaddr = FUNC_0(VAR_1)->execaddr;
 VAR_4.attr = FUNC_0(VAR_1)->attr;
 VAR_4.size = VAR_1->i_size;

 VAR_5 = FUNC_1(VAR_3, &VAR_4, VAR_2->sync_mode == VAR_0);
 FUNC_3();
 return VAR_5;
}
