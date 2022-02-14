
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ncp_server {int dummy; } ;
struct TYPE_10__ {scalar_t__ dirEntNum; int volNumber; } ;
struct ncp_entry_info {TYPE_4__ i; int volume; } ;
struct inode {int dummy; } ;
struct TYPE_7__ {int len; int name; } ;
struct dentry {struct inode* d_inode; TYPE_3__* d_parent; TYPE_1__ d_name; } ;
typedef int __u8 ;
typedef int __name ;
struct TYPE_11__ {scalar_t__ dirEntNum; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_9__ {TYPE_2__ d_name; } ;


 int FUNC_0 (char*,...) ;
 TYPE_6__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dentry*) ;
 int VAR_0 ;
 struct ncp_server* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct ncp_server*,struct dentry*) ;
 struct dentry* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct ncp_server*) ;
 int FUNC_8 (struct ncp_server*,int *,int*,int ,int ,int) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 int FUNC_10 (struct ncp_server*,int *,TYPE_4__*) ;
 int FUNC_11 (struct dentry*) ;
 int FUNC_12 (struct ncp_server*,struct inode*,int *,TYPE_4__*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*,struct ncp_entry_info*) ;

__attribute__((used)) static int
FUNC_15(struct dentry *VAR_1)
{
 struct ncp_server *VAR_2;
 struct dentry *VAR_3;
 struct inode *VAR_4;
 struct ncp_entry_info VAR_5;
 int VAR_6, VAR_7 = 0, VAR_8;
 __u8 VAR_9[VAR_0 + 1];

 VAR_3 = FUNC_5(VAR_1);
 VAR_4 = VAR_3->d_inode;

 if (!VAR_1->d_inode)
  goto finished;

 VAR_2 = FUNC_3(VAR_4);

 if (!FUNC_7(VAR_2))
  goto finished;







 VAR_7 = FUNC_4(VAR_2, VAR_1);
 if (VAR_7)
  goto finished;

 FUNC_0("ncp_lookup_validate: %s/%s not valid, age=%ld, server lookup\n",
  VAR_1->d_parent->d_name.name, VAR_1->d_name.name,
  FUNC_2(VAR_1));

 VAR_8 = sizeof(VAR_9);
 if (FUNC_9(VAR_4)) {
  VAR_6 = FUNC_8(VAR_2, VAR_9, &VAR_8, VAR_1->d_name.name,
     VAR_1->d_name.len, 1);
  if (!VAR_6)
   VAR_6 = FUNC_10(VAR_2, VAR_9, &(VAR_5.i));
 } else {
  VAR_6 = FUNC_8(VAR_2, VAR_9, &VAR_8, VAR_1->d_name.name,
     VAR_1->d_name.len, !FUNC_13(VAR_4));
  if (!VAR_6)
   VAR_6 = FUNC_12(VAR_2, VAR_4, VAR_9, &(VAR_5.i));
 }
 VAR_5.volume = VAR_5.i.volNumber;
 FUNC_0("ncp_lookup_validate: looked for %s/%s, res=%d\n",
  VAR_1->d_parent->d_name.name, VAR_9, VAR_6);




 if (!VAR_6) {
  if (VAR_5.i.dirEntNum == FUNC_1(VAR_1->d_inode)->dirEntNum) {
   FUNC_11(VAR_1);
   VAR_7=1;
  } else
   FUNC_0("ncp_lookup_validate: found, but dirEntNum changed\n");

  FUNC_14(VAR_1->d_inode, &VAR_5);
 }

finished:
 FUNC_0("ncp_lookup_validate: result=%d\n", VAR_7);
 FUNC_6(VAR_3);
 return VAR_7;
}
