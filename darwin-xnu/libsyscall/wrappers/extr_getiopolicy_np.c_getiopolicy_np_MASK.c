
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _iopol_param_t {int iop_scope; int iop_iotype; int iop_policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct _iopol_param_t*) ;
 int VAR_6 ;

int
FUNC_1(int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 struct _iopol_param_t VAR_11;

 if ((VAR_7 != VAR_4 && VAR_7 != VAR_5) ||
  (VAR_8 != VAR_2 && VAR_8 != VAR_3)) {
  VAR_6 = VAR_0;
  VAR_9 = -1;
  goto exit;
 }

 VAR_11.iop_scope = VAR_8;
 VAR_11.iop_iotype = VAR_7;
 VAR_10 = FUNC_0(VAR_1, &VAR_11);
 if (VAR_10 != 0) {
  VAR_6 = VAR_10;
  VAR_9 = -1;
  goto exit;
 }

 VAR_9 = VAR_11.iop_policy;

  exit:
 return VAR_9;
}
