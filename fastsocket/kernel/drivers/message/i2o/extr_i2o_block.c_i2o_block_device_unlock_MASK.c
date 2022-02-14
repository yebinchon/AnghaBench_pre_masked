
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {void** head; } ;
struct i2o_message {void** body; TYPE_2__ u; } ;
struct TYPE_3__ {int tid; } ;
struct i2o_device {int iop; TYPE_1__ lct_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct i2o_message*) ;
 int FUNC_1 (struct i2o_message*) ;
 int VAR_4 ;
 void* FUNC_2 (int) ;
 struct i2o_message* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct i2o_message*,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct i2o_device *VAR_5, u32 VAR_6)
{
 struct i2o_message *VAR_7;

 VAR_7 = FUNC_3(VAR_5->iop, VAR_3);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_7->u.head[0] = FUNC_2(VAR_0 | VAR_4);
 VAR_7->u.head[1] =
     FUNC_2(VAR_2 << 24 | VAR_1 << 12 | VAR_5->
   lct_data.tid);
 VAR_7->body[0] = FUNC_2(VAR_6);
 FUNC_5("Unlocking...\n");

 return FUNC_4(VAR_5->iop, VAR_7, 2);
}
