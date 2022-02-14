
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct sixpack* disc_data; } ;
struct sixpack {int xbuff; int rbuff; int resync_t; int tx_t; int dev; int dead_sem; int refcnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct tty_struct *VAR_1)
{
 struct sixpack *VAR_2;

 FUNC_5(&VAR_0);
 VAR_2 = VAR_1->disc_data;
 VAR_1->disc_data = ((void*)0);
 FUNC_6(&VAR_0);
 if (!VAR_2)
  return;





 if (!FUNC_0(&VAR_2->refcnt))
  FUNC_2(&VAR_2->dead_sem);

 FUNC_4(VAR_2->dev);

 FUNC_1(&VAR_2->tx_t);
 FUNC_1(&VAR_2->resync_t);


 FUNC_3(VAR_2->rbuff);
 FUNC_3(VAR_2->xbuff);
}
