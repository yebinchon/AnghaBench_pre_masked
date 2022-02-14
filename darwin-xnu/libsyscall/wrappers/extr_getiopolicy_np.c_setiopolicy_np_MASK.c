
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _iopol_param_t {int iop_scope; int iop_iotype; int iop_policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct _iopol_param_t*) ;
 int FUNC_1 (int ) ;

int
FUNC_2(int VAR_2, int VAR_3, int VAR_4)
{

 struct _iopol_param_t VAR_5;

 VAR_5.iop_scope = VAR_3;
 VAR_5.iop_iotype = VAR_2;
 VAR_5.iop_policy = VAR_4;

 int VAR_6 = FUNC_0(VAR_0, &VAR_5);
 if (VAR_6 == -2) {

        FUNC_1(VAR_1);
  VAR_6 = 0;
 }

 return VAR_6;
}
