
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lbs_private {scalar_t__ psstate; int resp_idx; int waitq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct lbs_private *VAR_3, u8 VAR_4)
{
 FUNC_1(VAR_0);

 if (VAR_3->psstate == VAR_2)
  VAR_3->psstate = VAR_1;


 FUNC_0(VAR_4 > 1);
 VAR_3->resp_idx = VAR_4;

 FUNC_3(&VAR_3->waitq);

 FUNC_2(VAR_0);
}
