
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_i2c_port {int dummy; } ;
struct nouveau_i2c {struct nouveau_i2c_port* (* find_type ) (struct nouveau_i2c*,int ) ;} ;
struct nouveau_disp {int dummy; } ;
struct dcb_output {int extdev; } ;


 int FUNC_0 (int ) ;
 struct nouveau_i2c* FUNC_1 (struct nouveau_disp*) ;
 struct nouveau_i2c_port* FUNC_2 (struct nouveau_i2c*,int ) ;

__attribute__((used)) static struct nouveau_i2c_port *
FUNC_3(struct nouveau_disp *VAR_0, struct dcb_output *VAR_1)
{
 struct nouveau_i2c *VAR_2 = FUNC_1(VAR_0);
 return VAR_2->find_type(VAR_2, FUNC_0(VAR_1->extdev));
}
