
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int dummy; } ;
struct nfs_fattr {int valid; int uid; struct nfs4_string* owner_name; } ;
struct nfs4_string {int len; int data; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nfs_server*,int ,int ,int *) ;

__attribute__((used)) static bool FUNC_1(struct nfs_server *VAR_2, struct nfs_fattr *VAR_3)
{
 struct nfs4_string *VAR_4 = VAR_3->owner_name;
 __u32 VAR_5;

 if (!(VAR_3->valid & VAR_1))
  return 0;
 if (FUNC_0(VAR_2, VAR_4->data, VAR_4->len, &VAR_5) == 0) {
  VAR_3->uid = VAR_5;
  VAR_3->valid |= VAR_0;
 }
 return 1;
}
