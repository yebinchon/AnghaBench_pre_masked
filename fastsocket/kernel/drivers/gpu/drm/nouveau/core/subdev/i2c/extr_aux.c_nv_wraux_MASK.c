
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nouveau_i2c_port {TYPE_1__* func; } ;
struct TYPE_2__ {int (* aux ) (struct nouveau_i2c_port*,int,int ,int *,int ) ;int (* acquire ) (struct nouveau_i2c_port*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_i2c_port*) ;
 int FUNC_1 (struct nouveau_i2c_port*,int,int ,int *,int ) ;

int
FUNC_2(struct nouveau_i2c_port *VAR_1, u32 VAR_2, u8 *VAR_3, u8 VAR_4)
{
 if (VAR_1->func->aux) {
  if (VAR_1->func->acquire)
   VAR_1->func->acquire(VAR_1);
  return VAR_1->func->aux(VAR_1, 8, VAR_2, VAR_3, VAR_4);
 }
 return -VAR_0;
}
