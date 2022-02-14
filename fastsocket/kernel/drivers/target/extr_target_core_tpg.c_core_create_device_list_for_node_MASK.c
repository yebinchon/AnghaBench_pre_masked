
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_node_acl {struct se_dev_entry** device_list; } ;
struct se_dev_entry {int ua_list; int alua_port_list; int ua_lock; int pr_ref_count; int ua_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 struct se_dev_entry** FUNC_1 (int,int,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct se_node_acl *VAR_3)
{
 struct se_dev_entry *VAR_4;
 int VAR_5;

 VAR_3->device_list = FUNC_1(VAR_2,
   sizeof(struct se_dev_entry), VAR_1);
 if (!VAR_3->device_list) {
  FUNC_3("Unable to allocate memory for"
   " struct se_node_acl->device_list\n");
  return -VAR_0;
 }
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = VAR_3->device_list[VAR_5];

  FUNC_2(&VAR_4->ua_count, 0);
  FUNC_2(&VAR_4->pr_ref_count, 0);
  FUNC_4(&VAR_4->ua_lock);
  FUNC_0(&VAR_4->alua_port_list);
  FUNC_0(&VAR_4->ua_list);
 }

 return 0;
}
