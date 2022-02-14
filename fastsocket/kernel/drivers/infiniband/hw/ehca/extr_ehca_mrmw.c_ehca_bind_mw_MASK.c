
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_qp {int dummy; } ;
struct ib_mw_bind {int dummy; } ;
struct ib_mw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

int FUNC_1(struct ib_qp *VAR_1,
   struct ib_mw *VAR_2,
   struct ib_mw_bind *VAR_3)
{

 FUNC_0("bind MW currently not supported by HCAD");

 return -VAR_0;
}
