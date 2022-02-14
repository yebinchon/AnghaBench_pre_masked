
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlan_entry {unsigned short vlan_id; int vlan_list; } ;
struct bonding {TYPE_1__* dev; int lock; int vlan_list; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct vlan_entry* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct bonding *VAR_2, unsigned short VAR_3)
{
 struct vlan_entry *VAR_4;

 FUNC_3("bond: %s, vlan id %d\n",
  (VAR_2 ? VAR_2->dev->name : "None"), VAR_3);

 VAR_4 = FUNC_1(sizeof(struct vlan_entry), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_0(&VAR_4->vlan_list);
 VAR_4->vlan_id = VAR_3;

 FUNC_4(&VAR_2->lock);

 FUNC_2(&VAR_4->vlan_list, &VAR_2->vlan_list);

 FUNC_5(&VAR_2->lock);

 FUNC_3("added VLAN ID %d on bond %s\n", VAR_3, VAR_2->dev->name);

 return 0;
}
