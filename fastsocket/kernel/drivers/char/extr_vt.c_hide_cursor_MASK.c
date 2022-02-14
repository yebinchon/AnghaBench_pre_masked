
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {TYPE_1__* vc_sw; } ;
struct TYPE_2__ {int (* con_cursor ) (struct vc_data*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct vc_data*) ;
 struct vc_data* VAR_1 ;
 int FUNC_2 (struct vc_data*,int ) ;

__attribute__((used)) static void FUNC_3(struct vc_data *VAR_2)
{
 if (VAR_2 == VAR_1)
  FUNC_0();
 VAR_2->vc_sw->con_cursor(VAR_2, VAR_0);
 FUNC_1(VAR_2);
}
