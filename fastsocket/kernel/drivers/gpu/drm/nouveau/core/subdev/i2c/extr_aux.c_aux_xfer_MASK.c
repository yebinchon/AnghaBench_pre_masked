
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nouveau_i2c_port {TYPE_1__* func; } ;
struct i2c_msg {int len; int* buf; int flags; int addr; } ;
struct i2c_adapter {struct nouveau_i2c_port* algo_data; } ;
struct TYPE_2__ {int (* aux ) (struct nouveau_i2c_port*,int,int ,int*,int) ;int (* acquire ) (struct nouveau_i2c_port*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_i2c_port*) ;
 int FUNC_1 (struct nouveau_i2c_port*,int,int ,int*,int) ;

__attribute__((used)) static int
FUNC_2(struct i2c_adapter *VAR_2, struct i2c_msg *VAR_3, int VAR_4)
{
 struct nouveau_i2c_port *VAR_5 = VAR_2->algo_data;
 struct i2c_msg *VAR_6 = VAR_3;
 int VAR_7, VAR_8 = VAR_4;

 if (!VAR_5->func->aux)
  return -VAR_0;
 if ( VAR_5->func->acquire)
  VAR_5->func->acquire(VAR_5);

 while (VAR_8--) {
  u8 VAR_9 = VAR_6->len;
  u8 *VAR_10 = VAR_6->buf;

  while (VAR_9) {
   u8 VAR_11 = (VAR_9 > 16) ? 16 : VAR_9;
   u8 VAR_12;

   if (VAR_6->flags & VAR_1)
    VAR_12 = 1;
   else
    VAR_12 = 0;

   if (VAR_8 || VAR_9 > 16)
    VAR_12 |= 4;

   VAR_7 = VAR_5->func->aux(VAR_5, VAR_12, VAR_6->addr, VAR_10, VAR_11);
   if (VAR_7 < 0)
    return VAR_7;

   VAR_10 += VAR_11;
   VAR_9 -= VAR_11;
  }

  VAR_6++;
 }

 return VAR_4;
}
