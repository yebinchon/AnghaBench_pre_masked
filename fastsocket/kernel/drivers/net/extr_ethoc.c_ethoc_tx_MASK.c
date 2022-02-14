
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethoc_bd {int stat; } ;
struct ethoc {int dty_tx; int cur_tx; unsigned int num_tx; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ethoc*,int ) ;
 int FUNC_1 (struct ethoc*,unsigned int,struct ethoc_bd*) ;
 int FUNC_2 (struct ethoc*,struct ethoc_bd*) ;
 struct ethoc* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_2)
{
 struct ethoc *VAR_3 = FUNC_3(VAR_2);

 FUNC_5(&VAR_3->lock);

 while (VAR_3->dty_tx != VAR_3->cur_tx) {
  unsigned int VAR_4 = VAR_3->dty_tx % VAR_3->num_tx;
  struct ethoc_bd VAR_5;

  FUNC_1(VAR_3, VAR_4, &VAR_5);
  if (VAR_5.stat & VAR_1)
   break;

  VAR_4 = (++VAR_3->dty_tx) % VAR_3->num_tx;
  (void)FUNC_2(VAR_3, &VAR_5);
 }

 if ((VAR_3->cur_tx - VAR_3->dty_tx) <= (VAR_3->num_tx / 2))
  FUNC_4(VAR_2);

 FUNC_0(VAR_3, VAR_0);
 FUNC_6(&VAR_3->lock);
}
