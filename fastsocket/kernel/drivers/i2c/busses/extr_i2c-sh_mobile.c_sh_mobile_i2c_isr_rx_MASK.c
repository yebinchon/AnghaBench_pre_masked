
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_mobile_i2c_data {int pos; TYPE_1__* msg; } ;
struct TYPE_2__ {int len; unsigned char* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char FUNC_0 (struct sh_mobile_i2c_data*,int ,unsigned char) ;
 int FUNC_1 (struct sh_mobile_i2c_data*,unsigned char*) ;
 scalar_t__ FUNC_2 (struct sh_mobile_i2c_data*) ;

__attribute__((used)) static int FUNC_3(struct sh_mobile_i2c_data *VAR_6)
{
 unsigned char VAR_7;
 int VAR_8;

 do {
  if (VAR_6->pos <= -1) {
   FUNC_1(VAR_6, &VAR_7);

   if (FUNC_2(VAR_6))
    FUNC_0(VAR_6, VAR_4, VAR_7);
   else
    FUNC_0(VAR_6, VAR_3, VAR_7);
   break;
  }

  if (VAR_6->pos == 0) {
   FUNC_0(VAR_6, VAR_5, 0);
   break;
  }

  VAR_8 = VAR_6->pos - 2;

  if (VAR_6->pos == VAR_6->msg->len) {
   if (VAR_8 < 0) {
    FUNC_0(VAR_6, VAR_1, 0);
    break;
   }
   VAR_7 = FUNC_0(VAR_6, VAR_2, 0);
  } else
   VAR_7 = FUNC_0(VAR_6, VAR_0, 0);

  if (VAR_8 >= 0)
   VAR_6->msg->buf[VAR_8] = VAR_7;
 } while (0);

 VAR_6->pos++;
 return VAR_6->pos == (VAR_6->msg->len + 2);
}
