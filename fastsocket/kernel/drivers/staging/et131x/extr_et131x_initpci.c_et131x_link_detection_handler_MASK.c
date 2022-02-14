
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct et131x_adapter {scalar_t__ MediaState; int netdev; int Lock; int Flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(unsigned long VAR_2)
{
 struct et131x_adapter *VAR_3 = (struct et131x_adapter *) VAR_2;
 unsigned long VAR_4;

 if (VAR_3->MediaState == 0) {
  FUNC_1(&VAR_3->Lock, VAR_4);

  VAR_3->MediaState = VAR_0;
  VAR_3->Flags &= ~VAR_1;

  FUNC_2(&VAR_3->Lock, VAR_4);

  FUNC_0(VAR_3->netdev);
 }
}
