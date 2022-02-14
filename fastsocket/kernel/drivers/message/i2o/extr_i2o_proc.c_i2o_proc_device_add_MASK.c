
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct proc_dir_entry {struct i2o_device* data; } ;
struct TYPE_3__ {int tid; int class_id; } ;
struct i2o_device {TYPE_1__ lct_data; TYPE_2__* iop; } ;
typedef int i2o_proc_entry ;
struct TYPE_4__ {int name; } ;




 int * VAR_0 ;
 int FUNC_0 (struct proc_dir_entry*,int *,struct i2o_device*) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (char*) ;
 struct proc_dir_entry* FUNC_3 (char*,struct proc_dir_entry*) ;
 int * VAR_1 ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void FUNC_5(struct proc_dir_entry *VAR_2,
    struct i2o_device *VAR_3)
{
 char VAR_4[10];
 struct proc_dir_entry *VAR_5;
 i2o_proc_entry *VAR_6 = ((void*)0);

 FUNC_4(VAR_4, "%03x", VAR_3->lct_data.tid);

 FUNC_1("adding device /proc/i2o/%s/%s\n", VAR_3->iop->name, VAR_4);

 VAR_5 = FUNC_3(VAR_4, VAR_2);
 if (!VAR_5) {
  FUNC_2("Could not allocate procdir!\n");
  return;
 }

 VAR_5->data = VAR_3;

 FUNC_0(VAR_5, VAR_0, VAR_3);


 switch (VAR_3->lct_data.class_id) {
 case 128:
 case 129:
  VAR_6 = VAR_1;
  break;
 default:
  break;
 }
 if (VAR_6)
  FUNC_0(VAR_5, VAR_6, VAR_3);
}
