
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; } ;
struct b44 {int flags; int lock; int timer; int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b44*) ;
 int FUNC_1 (struct b44*) ;
 int FUNC_2 (struct b44*) ;
 int FUNC_3 (struct b44*,int ) ;
 int FUNC_4 (struct b44*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct net_device*) ;
 int FUNC_7 (int *) ;
 struct b44* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_2)
{
 struct b44 *VAR_3 = FUNC_8(VAR_2);

 FUNC_10(VAR_2);

 FUNC_7(&VAR_3->napi);

 FUNC_5(&VAR_3->timer);

 FUNC_11(&VAR_3->lock);

 FUNC_2(VAR_3);
 FUNC_1(VAR_3);
 FUNC_9(VAR_2);

 FUNC_12(&VAR_3->lock);

 FUNC_6(VAR_2->irq, VAR_2);

 if (VAR_3->flags & VAR_0) {
  FUNC_3(VAR_3, VAR_1);
  FUNC_4(VAR_3);
 }

 FUNC_0(VAR_3);

 return 0;
}
