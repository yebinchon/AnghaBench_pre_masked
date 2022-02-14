
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_i2c_port {TYPE_1__* func; } ;
struct nouveau_disp {int dummy; } ;
struct dcb_output {int dummy; } ;
struct TYPE_2__ {int (* lnk_ctl ) (struct nouveau_i2c_port*,int,int,int) ;} ;


 int VAR_0 ;
 struct nouveau_i2c_port* FUNC_0 (struct nouveau_disp*,struct dcb_output*) ;
 int FUNC_1 (struct nouveau_i2c_port*,int,int,int) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_disp *VAR_1, struct dcb_output *VAR_2,
       int VAR_3, int VAR_4, int VAR_5, bool VAR_6)
{
 struct nouveau_i2c_port *VAR_7;
 int VAR_8 = -VAR_0;

 VAR_7 = FUNC_0(VAR_1, VAR_2);
 if (VAR_7 && VAR_7->func->lnk_ctl)
  VAR_8 = VAR_7->func->lnk_ctl(VAR_7, VAR_4, VAR_5, VAR_6);

 return VAR_8;
}
