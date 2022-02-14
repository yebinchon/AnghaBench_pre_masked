
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int * release; } ;
struct i2o_controller {int unit; char* name; int context_list; int context_list_counter; int context_list_lock; TYPE_1__ device; int lct_lock; int lock; int devices; int in_msg; } ;
typedef int poolname ;


 int VAR_0 ;
 struct i2o_controller* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int *,char*,int,int ) ;
 int FUNC_6 (struct i2o_controller*) ;
 struct i2o_controller* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int,char*,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,char*,int) ;

struct i2o_controller *FUNC_13(void)
{
 static int VAR_5 = 0;
 struct i2o_controller *VAR_6;
 char VAR_7[32];

 VAR_6 = FUNC_7(sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  FUNC_9("i2o: Insufficient memory to allocate a I2O controller."
   "\n");
  return FUNC_0(-VAR_0);
 }

 VAR_6->unit = VAR_5++;
 FUNC_12(VAR_6->name, "iop%d", VAR_6->unit);

 FUNC_10(VAR_7, sizeof(VAR_7), "i2o_%s_msg_inpool", VAR_6->name);
 if (FUNC_5
     (&VAR_6->in_msg, VAR_7, VAR_2 * 4 + sizeof(u32),
      VAR_3)) {
  FUNC_6(VAR_6);
  return FUNC_0(-VAR_0);
 };

 FUNC_1(&VAR_6->devices);
 FUNC_11(&VAR_6->lock);
 FUNC_8(&VAR_6->lct_lock);

 FUNC_4(&VAR_6->device);

 VAR_6->device.release = &VAR_4;

 FUNC_3(&VAR_6->device, "iop%d", VAR_6->unit);







 return VAR_6;
}
