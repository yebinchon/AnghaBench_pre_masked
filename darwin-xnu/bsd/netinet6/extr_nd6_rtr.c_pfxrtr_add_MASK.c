
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_prefix {int ndpr_genid; int ndpr_advrtrs; } ;
struct nd_pfxrouter {struct nd_defrouter* router; } ;
struct nd_defrouter {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct nd_pfxrouter*,int ) ;
 int FUNC_2 (struct nd_prefix*) ;
 int FUNC_3 (struct nd_prefix*) ;
 int FUNC_4 (struct nd_prefix*) ;
 int FUNC_5 (struct nd_pfxrouter*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 () ;
 struct nd_pfxrouter* FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct nd_prefix *VAR_4, struct nd_defrouter *VAR_5)
{
 struct nd_pfxrouter *VAR_6;

 FUNC_0(VAR_1, VAR_0);
 FUNC_3(VAR_4);

 VAR_6 = FUNC_7(VAR_2);
 if (VAR_6 == ((void*)0))
  return;
 FUNC_5(VAR_6, sizeof (*VAR_6));
 VAR_6->router = VAR_5;

 FUNC_2(VAR_4);
 FUNC_1(&VAR_4->ndpr_advrtrs, VAR_6, VAR_3);
 VAR_4->ndpr_genid++;
 FUNC_4(VAR_4);

 FUNC_6();
}
