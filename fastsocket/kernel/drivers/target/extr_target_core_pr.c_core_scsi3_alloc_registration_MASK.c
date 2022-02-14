
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct t10_pr_registration {int dummy; } ;
struct se_node_acl {int dummy; } ;
struct se_device {int dummy; } ;
struct se_dev_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct se_device*,struct se_node_acl*,struct t10_pr_registration*,int,int) ;
 struct t10_pr_registration* FUNC_1 (struct se_device*,struct se_node_acl*,struct se_dev_entry*,unsigned char*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(
 struct se_device *VAR_1,
 struct se_node_acl *VAR_2,
 struct se_dev_entry *VAR_3,
 unsigned char *VAR_4,
 u64 VAR_5,
 int VAR_6,
 int VAR_7,
 int VAR_8,
 int VAR_9)
{
 struct t10_pr_registration *VAR_10;

 VAR_10 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4,
   VAR_5, VAR_6, VAR_7);
 if (!VAR_10)
  return -VAR_0;

 FUNC_0(VAR_1, VAR_2, VAR_10,
   VAR_8, VAR_9);
 return 0;
}
