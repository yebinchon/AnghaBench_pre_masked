
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct vc_data {int vc_x; int vc_y; TYPE_1__* vc_sw; scalar_t__ vc_pos; } ;
struct TYPE_2__ {int (* con_putc ) (struct vc_data*,int,int ,int ) ;} ;


 scalar_t__ FUNC_0 (struct vc_data*) ;
 int FUNC_1 (int,int *) ;
 int VAR_0 ;
 int FUNC_2 (struct vc_data*,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct vc_data *VAR_1)
{
 if (VAR_0 != -1) {
  FUNC_1(VAR_0, (u16 *)VAR_1->vc_pos);
  if (FUNC_0(VAR_1))
   VAR_1->vc_sw->con_putc(VAR_1, VAR_0,
     VAR_1->vc_y, VAR_1->vc_x);
  VAR_0 = -1;
 }
}
