
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulong ;
struct inode {int dummy; } ;
struct i2o_cfg_info {struct i2o_cfg_info* next; scalar_t__ q_lost; scalar_t__ q_out; scalar_t__ q_in; scalar_t__ q_len; scalar_t__ q_id; int * fasync; struct file* fp; } ;
struct file {void* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 struct i2o_cfg_info* VAR_4 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_5, struct file *VAR_6)
{
 struct i2o_cfg_info *VAR_7 =
     (struct i2o_cfg_info *)FUNC_0(sizeof(struct i2o_cfg_info),
        VAR_1);
 unsigned long VAR_8;

 if (!VAR_7)
  return -VAR_0;

 FUNC_1();
 VAR_6->private_data = (void *)(VAR_2++);
 VAR_7->fp = VAR_6;
 VAR_7->fasync = ((void*)0);
 VAR_7->q_id = (ulong) VAR_6->private_data;
 VAR_7->q_len = 0;
 VAR_7->q_in = 0;
 VAR_7->q_out = 0;
 VAR_7->q_lost = 0;
 VAR_7->next = VAR_4;

 FUNC_2(&VAR_3, VAR_8);
 VAR_4 = VAR_7;
 FUNC_3(&VAR_3, VAR_8);
 FUNC_4();

 return 0;
}
