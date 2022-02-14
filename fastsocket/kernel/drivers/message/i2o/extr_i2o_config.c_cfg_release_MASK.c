
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulong ;
struct inode {int dummy; } ;
struct i2o_cfg_info {scalar_t__ q_id; struct i2o_cfg_info* next; } ;
struct file {int private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2o_cfg_info*) ;
 int FUNC_1 () ;
 struct i2o_cfg_info* VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 ulong VAR_4 = (ulong) VAR_3->private_data;
 struct i2o_cfg_info *VAR_5, **VAR_6;
 unsigned long VAR_7;

 FUNC_1();
 FUNC_2(&VAR_0, VAR_7);
 for (VAR_6 = &VAR_1; (VAR_5 = *VAR_6) != ((void*)0); VAR_6 = &VAR_5->next) {
  if (VAR_5->q_id == VAR_4) {
   *VAR_6 = VAR_5->next;
   FUNC_0(VAR_5);
   break;
  }
 }
 FUNC_3(&VAR_0, VAR_7);
 FUNC_4();

 return 0;
}
