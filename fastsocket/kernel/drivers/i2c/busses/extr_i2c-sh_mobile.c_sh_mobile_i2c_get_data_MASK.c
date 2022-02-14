
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_mobile_i2c_data {int pos; TYPE_1__* msg; } ;
struct TYPE_2__ {int addr; int flags; unsigned char* buf; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct sh_mobile_i2c_data *VAR_1,
       unsigned char *VAR_2)
{
 switch (VAR_1->pos) {
 case -1:
  *VAR_2 = (VAR_1->msg->addr & 0x7f) << 1;
  *VAR_2 |= (VAR_1->msg->flags & VAR_0) ? 1 : 0;
  break;
 default:
  *VAR_2 = VAR_1->msg->buf[VAR_1->pos];
 }
}
