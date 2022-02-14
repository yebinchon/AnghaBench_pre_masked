
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct i596_private* ml_priv; } ;
struct i596_rbd {int * skb; } ;
struct i596_private {struct i596_rbd* rbds; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(struct net_device *VAR_1)
{
 struct i596_private *VAR_2 = VAR_1->ml_priv;
 struct i596_rbd *VAR_3;
 int VAR_4;

 for (VAR_4 = 0, VAR_3 = VAR_2->rbds; VAR_4 < VAR_0; VAR_4++, VAR_3++) {
  if (VAR_3->skb == ((void*)0))
   break;
  FUNC_0(VAR_3->skb);
 }
}
