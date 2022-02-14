
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void** head; } ;
struct i2o_message {TYPE_2__ u; } ;
struct TYPE_3__ {int tid; } ;
struct i2o_device {int iop; TYPE_1__ lct_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct i2o_message*) ;
 int VAR_5 ;
 void* FUNC_1 (int) ;
 struct i2o_message* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct i2o_message*,int) ;

__attribute__((used)) static int FUNC_4(struct i2o_device *VAR_6)
{
 struct i2o_message *VAR_7;

 VAR_7 = FUNC_2(VAR_6->iop, VAR_4);
 if (FUNC_0(VAR_7))
  return -VAR_0;

 VAR_7->u.head[0] = FUNC_1(VAR_1 | VAR_5);
 VAR_7->u.head[1] =
     FUNC_1(VAR_3 << 24 | VAR_2 << 12 | VAR_6->lct_data.
   tid);

 return FUNC_3(VAR_6->iop, VAR_7, 60);
}
