
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unit_directory {TYPE_1__* ne; } ;
struct eth1394_priv {int ip_node_list; } ;
struct eth1394_node_ref {int dummy; } ;
struct eth1394_host_info {int dev; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 struct eth1394_node_ref* FUNC_0 (int *,struct unit_directory*) ;
 int VAR_1 ;
 int FUNC_1 (struct eth1394_host_info*,struct unit_directory*) ;
 struct eth1394_host_info* FUNC_2 (int *,int ) ;
 struct eth1394_priv* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct unit_directory *VAR_2)
{
 struct eth1394_host_info *VAR_3;
 struct eth1394_priv *VAR_4;
 struct eth1394_node_ref *VAR_5;

 VAR_3 = FUNC_2(&VAR_1, VAR_2->ne->host);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_3(VAR_3->dev);
 VAR_5 = FUNC_0(&VAR_4->ip_node_list, VAR_2);
 if (VAR_5)
  return 0;

 return FUNC_1(VAR_3, VAR_2);
}
