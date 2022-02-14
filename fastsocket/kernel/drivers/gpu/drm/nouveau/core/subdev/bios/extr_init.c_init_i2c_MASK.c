
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvbios_init {TYPE_1__* outp; int bios; } ;
struct nouveau_i2c_port {int dummy; } ;
struct nouveau_i2c {struct nouveau_i2c_port* (* find ) (struct nouveau_i2c*,int) ;struct nouveau_i2c_port* (* find_type ) (struct nouveau_i2c*,int) ;} ;
struct TYPE_2__ {int i2c_index; int extdev; scalar_t__ location; scalar_t__ i2c_upper_default; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 struct nouveau_i2c* FUNC_3 (int ) ;
 struct nouveau_i2c_port* FUNC_4 (struct nouveau_i2c*,int) ;
 struct nouveau_i2c_port* FUNC_5 (struct nouveau_i2c*,int) ;

__attribute__((used)) static struct nouveau_i2c_port *
FUNC_6(struct nvbios_init *VAR_0, int VAR_1)
{
 struct nouveau_i2c *VAR_2 = FUNC_3(VAR_0->bios);

 if (VAR_1 == 0xff) {
  VAR_1 = FUNC_0(0);
  if (VAR_0->outp && VAR_0->outp->i2c_upper_default)
   VAR_1 = FUNC_0(1);
 } else
 if (VAR_1 < 0) {
  if (!VAR_0->outp) {
   FUNC_2("script needs output for i2c\n");
   return ((void*)0);
  }

  if (VAR_1 == -2 && VAR_0->outp->location) {
   VAR_1 = FUNC_1(VAR_0->outp->extdev);
   return VAR_2->find_type(VAR_2, VAR_1);
  }

  VAR_1 = VAR_0->outp->i2c_index;
 }

 return VAR_2->find(VAR_2, VAR_1);
}
