
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcast_port {int port_num; int refcount; int comp; int table; int lock; struct mcast_device* dev; } ;
struct mcast_device {int start_port; int end_port; int event_handler; struct ib_device* device; struct mcast_port* port; } ;
struct ib_device {scalar_t__ node_type; int phys_port_cnt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct ib_device*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ib_device*,int *,struct mcast_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mcast_device*) ;
 struct mcast_device* FUNC_6 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (struct ib_device*,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct ib_device *VAR_7)
{
 struct mcast_device *VAR_8;
 struct mcast_port *VAR_9;
 int VAR_10;
 int VAR_11 = 0;

 if (FUNC_7(VAR_7->node_type) != VAR_4)
  return;

 VAR_8 = FUNC_6(sizeof *VAR_8 + VAR_7->phys_port_cnt * sizeof *VAR_9,
        VAR_0);
 if (!VAR_8)
  return;

 if (VAR_7->node_type == VAR_3)
  VAR_8->start_port = VAR_8->end_port = 0;
 else {
  VAR_8->start_port = 1;
  VAR_8->end_port = VAR_7->phys_port_cnt;
 }

 for (VAR_10 = 0; VAR_10 <= VAR_8->end_port - VAR_8->start_port; VAR_10++) {
  if (FUNC_8(VAR_7, VAR_8->start_port + VAR_10) !=
      VAR_1)
   continue;
  VAR_9 = &VAR_8->port[VAR_10];
  VAR_9->dev = VAR_8;
  VAR_9->port_num = VAR_8->start_port + VAR_10;
  FUNC_9(&VAR_9->lock);
  VAR_9->table = VAR_2;
  FUNC_4(&VAR_9->comp);
  FUNC_1(&VAR_9->refcount, 1);
  ++VAR_11;
 }

 if (!VAR_11) {
  FUNC_5(VAR_8);
  return;
 }

 VAR_8->device = VAR_7;
 FUNC_3(VAR_7, &VAR_5, VAR_8);

 FUNC_0(&VAR_8->event_handler, VAR_7, VAR_6);
 FUNC_2(&VAR_8->event_handler);
}
