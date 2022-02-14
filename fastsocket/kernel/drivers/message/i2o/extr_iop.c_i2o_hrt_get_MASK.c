
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {void** head; } ;
struct i2o_message {void** body; TYPE_2__ u; } ;
struct TYPE_9__ {int len; int phys; TYPE_3__* virt; } ;
struct i2o_controller {int name; TYPE_4__ hrt; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int num_entries; int entry_len; } ;
typedef TYPE_3__ i2o_hrt ;
struct TYPE_6__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct i2o_message*) ;
 int FUNC_1 (struct i2o_message*) ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct device*,TYPE_4__*,int) ;
 struct i2o_message* FUNC_4 (struct i2o_controller*,int ) ;
 int FUNC_5 (struct i2o_controller*,struct i2o_message*,int,TYPE_4__*) ;
 int FUNC_6 (struct i2o_controller*) ;
 int FUNC_7 (char*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct i2o_controller *VAR_9)
{
 int VAR_10;
 int VAR_11;
 i2o_hrt *VAR_12 = VAR_9->hrt.virt;
 u32 VAR_13 = sizeof(i2o_hrt);
 struct device *VAR_14 = &VAR_9->pdev->dev;

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  struct i2o_message *VAR_15;

  VAR_15 = FUNC_4(VAR_9, VAR_6);
  if (FUNC_0(VAR_15))
   return FUNC_1(VAR_15);

  VAR_15->u.head[0] = FUNC_2(VAR_8 | VAR_7);
  VAR_15->u.head[1] =
      FUNC_2(VAR_4 << 24 | VAR_3 << 12 |
    VAR_0);
  VAR_15->body[0] = FUNC_2(0xd0000000 | VAR_9->hrt.len);
  VAR_15->body[1] = FUNC_2(VAR_9->hrt.phys);

  VAR_10 = FUNC_5(VAR_9, VAR_15, 20, &VAR_9->hrt);

  if (VAR_10 < 0) {
   FUNC_7("%s: Unable to get HRT (status=%#x)\n", VAR_9->name,
    -VAR_10);
   return VAR_10;
  }

  VAR_13 = VAR_12->num_entries * VAR_12->entry_len << 2;
  if (VAR_13 > VAR_9->hrt.len) {
   if (FUNC_3(VAR_14, &VAR_9->hrt, VAR_13))
    return -VAR_2;
   else
    VAR_12 = VAR_9->hrt.virt;
  } else
   return FUNC_6(VAR_9);
 }

 FUNC_7("%s: Unable to get HRT after %d tries, giving up\n", VAR_9->name,
  VAR_5);

 return -VAR_1;
}
