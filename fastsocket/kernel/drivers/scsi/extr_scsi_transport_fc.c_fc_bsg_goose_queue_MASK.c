
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_rport {int dev; int rqst_q; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct fc_rport *VAR_0)
{
 if (!VAR_0->rqst_q)
  return;




 FUNC_1(&VAR_0->dev);
 FUNC_0(VAR_0->rqst_q);
 FUNC_2(&VAR_0->dev);
}
