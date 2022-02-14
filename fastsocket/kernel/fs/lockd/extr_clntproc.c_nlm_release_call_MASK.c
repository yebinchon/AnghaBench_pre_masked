
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_rqst {int a_host; int a_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nlm_rqst*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nlm_rqst*) ;

void FUNC_4(struct nlm_rqst *VAR_0)
{
 if (!FUNC_0(&VAR_0->a_count))
  return;
 FUNC_2(VAR_0->a_host);
 FUNC_3(VAR_0);
 FUNC_1(VAR_0);
}
