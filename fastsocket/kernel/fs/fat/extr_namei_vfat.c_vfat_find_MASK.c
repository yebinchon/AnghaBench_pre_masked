
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int name; } ;
struct inode {int dummy; } ;
struct fat_slot_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int ,unsigned int,struct fat_slot_info*) ;
 unsigned int FUNC_1 (struct qstr*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct qstr *VAR_2,
       struct fat_slot_info *VAR_3)
{
 unsigned int VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 == 0)
  return -VAR_0;
 return FUNC_0(VAR_1, VAR_2->name, VAR_4, VAR_3);
}
