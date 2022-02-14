
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protosw {int dummy; } ;
struct domain {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_5(struct protosw *VAR_5, struct domain *VAR_6)
{
#pragma unused(pp, dp)
 static int VAR_7 = 0;


 if (!VAR_7) {
  VAR_7 = 1;

  VAR_3 = FUNC_3();
  VAR_2 = FUNC_2("rawcb", VAR_3);
  VAR_1 = FUNC_1();

  FUNC_4(VAR_0, VAR_2, VAR_1);
  FUNC_0(&VAR_4);
 }
}
