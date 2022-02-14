
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_i2c_data {int iccl; int icch; int pos; scalar_t__ sr; struct i2c_msg* msg; int dev; } ;
struct i2c_msg {scalar_t__ len; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sh_mobile_i2c_data*) ;
 int FUNC_1 (struct sh_mobile_i2c_data*) ;
 int FUNC_2 (struct sh_mobile_i2c_data*) ;
 int VAR_2 ;
 int FUNC_3 (struct sh_mobile_i2c_data*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct sh_mobile_i2c_data *VAR_7, struct i2c_msg *VAR_8)
{
 if (VAR_8->len == 0 && (VAR_8->flags & VAR_1)) {
  FUNC_4(VAR_7->dev, "Unsupported zero length i2c read\n");
  return -VAR_0;
 }


 FUNC_6(FUNC_5(FUNC_2(VAR_7)) & ~VAR_2, FUNC_2(VAR_7));


 FUNC_6(FUNC_5(FUNC_2(VAR_7)) | VAR_2, FUNC_2(VAR_7));


 FUNC_6(VAR_7->iccl, FUNC_1(VAR_7));
 FUNC_6(VAR_7->icch, FUNC_0(VAR_7));

 VAR_7->msg = VAR_8;
 VAR_7->pos = -1;
 VAR_7->sr = 0;


 FUNC_6(VAR_6 | VAR_3 | VAR_5 | VAR_4, FUNC_3(VAR_7));
 return 0;
}
