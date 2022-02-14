
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ type; int flags; int macvlan_port; } ;
struct macvlan_port {int passthru; int * vlan_hash; int vlans; struct net_device* dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned int VAR_5 ;
 struct macvlan_port* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,struct macvlan_port*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_6)
{
 struct macvlan_port *VAR_7;
 unsigned int VAR_8;

 if (VAR_6->type != VAR_0 || VAR_6->flags & VAR_4)
  return -VAR_1;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_3);
 if (VAR_7 == ((void*)0))
  return -VAR_2;

 VAR_7->passthru = 0;
 VAR_7->dev = VAR_6;
 FUNC_1(&VAR_7->vlans);
 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
  FUNC_0(&VAR_7->vlan_hash[VAR_8]);
 FUNC_3(VAR_6->macvlan_port, VAR_7);
 return 0;
}
