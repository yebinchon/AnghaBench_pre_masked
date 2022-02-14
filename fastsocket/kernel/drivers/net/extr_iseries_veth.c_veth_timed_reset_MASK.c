
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_lpar_connection {scalar_t__ outstanding_tx; unsigned long last_contact; unsigned long reset_timeout; int lock; int reset_timer; int remote_lp; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (char*,scalar_t__,int ,int) ;
 int FUNC_4 (struct veth_lpar_connection*) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_3)
{
 struct veth_lpar_connection *VAR_4 = (struct veth_lpar_connection *)VAR_3;
 unsigned long VAR_5, VAR_6;





 FUNC_1(&VAR_4->lock, VAR_6);

 if (VAR_4->outstanding_tx > 0) {
  VAR_5 = VAR_4->last_contact + VAR_4->reset_timeout;

  if (VAR_5 < VAR_2) {
   VAR_4->state |= VAR_1;
   FUNC_4(VAR_4);
   FUNC_3("%d packets not acked by LPAR %d within %d "
     "seconds, resetting.\n",
     VAR_4->outstanding_tx, VAR_4->remote_lp,
     VAR_4->reset_timeout / VAR_0);
  } else {

   VAR_5 = VAR_2 + VAR_4->reset_timeout;
   FUNC_0(&VAR_4->reset_timer, VAR_5);
  }
 }

 FUNC_2(&VAR_4->lock, VAR_6);
}
