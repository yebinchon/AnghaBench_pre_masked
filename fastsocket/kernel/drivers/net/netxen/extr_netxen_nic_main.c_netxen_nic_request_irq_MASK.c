
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nx_host_sds_ring {int name; int irq; } ;
struct netxen_recv_context {struct nx_host_sds_ring* sds_rings; } ;
struct netxen_adapter {int flags; int max_sds_rings; int irq; struct netxen_recv_context recv_ctx; struct net_device* netdev; } ;
struct net_device {char* name; int irq; } ;
typedef int irq_handler_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,unsigned long,int ,struct nx_host_sds_ring*) ;
 int FUNC_1 (int ,char*,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct netxen_adapter *VAR_7)
{
 irq_handler_t VAR_8;
 struct nx_host_sds_ring *VAR_9;
 int VAR_10, VAR_11;

 unsigned long VAR_12 = VAR_0;
 struct net_device *VAR_13 = VAR_7->netdev;
 struct netxen_recv_context *VAR_14 = &VAR_7->recv_ctx;

 if (VAR_7->flags & VAR_2)
  VAR_8 = VAR_6;
 else if (VAR_7->flags & VAR_3)
  VAR_8 = VAR_5;
 else {
  VAR_12 |= VAR_1;
  VAR_8 = VAR_4;
 }
 VAR_7->irq = VAR_13->irq;

 for (VAR_11 = 0; VAR_11 < VAR_7->max_sds_rings; VAR_11++) {
  VAR_9 = &VAR_14->sds_rings[VAR_11];
  FUNC_1(VAR_9->name, "%s[%d]", VAR_13->name, VAR_11);
  VAR_10 = FUNC_0(VAR_9->irq, VAR_8,
      VAR_12, VAR_9->name, VAR_9);
  if (VAR_10)
   return VAR_10;
 }

 return 0;
}
