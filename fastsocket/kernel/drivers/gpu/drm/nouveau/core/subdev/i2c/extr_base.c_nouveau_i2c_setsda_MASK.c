
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_i2c_port {TYPE_1__* func; } ;
struct TYPE_2__ {int (* drive_sda ) (struct nouveau_i2c_port*,int) ;} ;


 int FUNC_0 (struct nouveau_i2c_port*,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, int VAR_1)
{
 struct nouveau_i2c_port *VAR_2 = VAR_0;
 VAR_2->func->drive_sda(VAR_2, VAR_1);
}
