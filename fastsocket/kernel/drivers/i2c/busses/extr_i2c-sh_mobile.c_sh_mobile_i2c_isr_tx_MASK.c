
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_mobile_i2c_data {scalar_t__ pos; TYPE_1__* msg; } ;
struct TYPE_2__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sh_mobile_i2c_data*,int ,unsigned char) ;
 int FUNC_1 (struct sh_mobile_i2c_data*,unsigned char*) ;
 scalar_t__ FUNC_2 (struct sh_mobile_i2c_data*) ;
 scalar_t__ FUNC_3 (struct sh_mobile_i2c_data*) ;

__attribute__((used)) static int FUNC_4(struct sh_mobile_i2c_data *VAR_3)
{
 unsigned char VAR_4;

 if (VAR_3->pos == VAR_3->msg->len)
  return 1;

 FUNC_1(VAR_3, &VAR_4);

 if (FUNC_3(VAR_3))
  FUNC_0(VAR_3, VAR_2, VAR_4);
 else if (FUNC_2(VAR_3))
  FUNC_0(VAR_3, VAR_1, VAR_4);
 else
  FUNC_0(VAR_3, VAR_0, VAR_4);

 VAR_3->pos++;
 return 0;
}
