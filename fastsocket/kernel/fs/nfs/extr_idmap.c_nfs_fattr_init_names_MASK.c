
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_fattr {struct nfs4_string* group_name; struct nfs4_string* owner_name; } ;
struct nfs4_string {int dummy; } ;



void FUNC_0(struct nfs_fattr *VAR_0,
  struct nfs4_string *VAR_1,
  struct nfs4_string *VAR_2)
{
 VAR_0->owner_name = VAR_1;
 VAR_0->group_name = VAR_2;
}
