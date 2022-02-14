
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1x00_ts {int idev; } ;
struct ucb1x00_dev {struct ucb1x00_ts* priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ucb1x00_ts*) ;

__attribute__((used)) static void FUNC_2(struct ucb1x00_dev *VAR_0)
{
 struct ucb1x00_ts *VAR_1 = VAR_0->priv;

 FUNC_0(VAR_1->idev);
 FUNC_1(VAR_1);
}
