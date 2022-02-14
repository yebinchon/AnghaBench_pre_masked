
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_port {int lpar_map; int stopped_map; int queue_lock; } ;
struct veth_lpar_connection {int remote_lp; } ;
struct net_device {int name; } ;


 int VAR_0 ;
 struct veth_port* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (char*,int,int ) ;
 struct net_device** VAR_1 ;

__attribute__((used)) static void FUNC_6(struct veth_lpar_connection *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct net_device *VAR_4 = VAR_1[VAR_3];
  struct veth_port *VAR_5;
  unsigned long VAR_6;

  if (! VAR_4)
   continue;

  VAR_5 = FUNC_0(VAR_4);

  if (! (VAR_5->lpar_map & (1<<VAR_2->remote_lp)))
   continue;

  FUNC_3(&VAR_5->queue_lock, VAR_6);

  VAR_5->stopped_map &= ~(1 << VAR_2->remote_lp);

  if (0 == VAR_5->stopped_map && FUNC_1(VAR_4)) {
   FUNC_5("cnx %d: woke queue for %s.\n",
     VAR_2->remote_lp, VAR_4->name);
   FUNC_2(VAR_4);
  }
  FUNC_4(&VAR_5->queue_lock, VAR_6);
 }
}
