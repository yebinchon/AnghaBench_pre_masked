
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unit_directory {int device; } ;
struct eth1394_priv {int ip_node_list; } ;
struct eth1394_node_ref {int list; struct unit_directory* ud; } ;
struct TYPE_2__ {scalar_t__ sz; int list; int lock; } ;
struct eth1394_node_info {int fifo; TYPE_1__ pdg; } ;
struct eth1394_host_info {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct eth1394_node_info*) ;
 int FUNC_2 (struct eth1394_node_ref*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 struct eth1394_priv* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct eth1394_host_info *VAR_3,
       struct unit_directory *VAR_4)
{
 struct eth1394_priv *VAR_5;
 struct eth1394_node_ref *VAR_6;
 struct eth1394_node_info *VAR_7;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  FUNC_2(VAR_6);
  return -VAR_1;
 }

 FUNC_6(&VAR_7->pdg.lock);
 FUNC_0(&VAR_7->pdg.list);
 VAR_7->pdg.sz = 0;
 VAR_7->fifo = VAR_0;

 FUNC_1(&VAR_4->device, VAR_7);
 VAR_6->ud = VAR_4;

 VAR_5 = FUNC_5(VAR_3->dev);
 FUNC_4(&VAR_6->list, &VAR_5->ip_node_list);
 return 0;
}
