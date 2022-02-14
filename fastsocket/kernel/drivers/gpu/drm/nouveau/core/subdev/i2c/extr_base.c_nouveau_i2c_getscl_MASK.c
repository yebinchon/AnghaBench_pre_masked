
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_i2c_port {TYPE_1__* func; } ;
struct TYPE_2__ {int (* sense_scl ) (struct nouveau_i2c_port*) ;} ;


 int FUNC_0 (struct nouveau_i2c_port*) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0)
{
 struct nouveau_i2c_port *VAR_1 = VAR_0;
 return VAR_1->func->sense_scl(VAR_1);
}
