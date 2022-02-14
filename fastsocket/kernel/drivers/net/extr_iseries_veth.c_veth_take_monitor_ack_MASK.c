
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_lpevent {int dummy; } ;
struct veth_lpar_connection {int state; int lock; int remote_lp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct veth_lpar_connection*) ;

__attribute__((used)) static void FUNC_4(struct veth_lpar_connection *VAR_2,
      struct veth_lpevent *VAR_3)
{
 unsigned long VAR_4;

 FUNC_0(&VAR_2->lock, VAR_4);
 FUNC_2("cnx %d: lost connection.\n", VAR_2->remote_lp);




 if (! (VAR_2->state & VAR_1)) {
  VAR_2->state |= VAR_0;
  FUNC_3(VAR_2);
 }
 FUNC_1(&VAR_2->lock, VAR_4);
}
