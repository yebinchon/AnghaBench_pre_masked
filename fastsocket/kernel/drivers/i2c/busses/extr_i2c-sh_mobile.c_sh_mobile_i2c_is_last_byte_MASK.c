
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_mobile_i2c_data {int pos; TYPE_1__* msg; } ;
struct TYPE_2__ {int len; } ;



__attribute__((used)) static int FUNC_0(struct sh_mobile_i2c_data *VAR_0)
{
 if (VAR_0->pos == (VAR_0->msg->len - 1))
  return 1;

 return 0;
}
