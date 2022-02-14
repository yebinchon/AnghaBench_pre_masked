
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ncp_server {int dummy; } ;
struct TYPE_9__ {int volNumber; } ;
struct ncp_entry_info {TYPE_4__ i; int volume; int ino; scalar_t__ opened; } ;
struct nameidata {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_6__ {int len; int name; } ;
struct dentry {int * d_op; TYPE_3__* d_parent; TYPE_1__ d_name; } ;
typedef int __u8 ;
typedef int __name ;
struct TYPE_7__ {int name; } ;
struct TYPE_8__ {TYPE_2__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int) ;
 int VAR_2 ;
 struct ncp_server* FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 (struct ncp_server*) ;
 int VAR_3 ;
 struct inode* FUNC_7 (int ,struct ncp_entry_info*) ;
 int FUNC_8 (struct ncp_server*,int *,int*,int ,int ,int) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 int FUNC_10 (struct ncp_server*,int *,TYPE_4__*) ;
 int FUNC_11 (struct dentry*) ;
 int FUNC_12 (struct ncp_server*,struct inode*,int *,TYPE_4__*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 () ;

__attribute__((used)) static struct dentry *FUNC_15(struct inode *VAR_4, struct dentry *VAR_5, struct nameidata *VAR_6)
{
 struct ncp_server *VAR_7 = FUNC_1(VAR_4);
 struct inode *VAR_8 = ((void*)0);
 struct ncp_entry_info VAR_9;
 int VAR_10, VAR_11, VAR_12;
 __u8 VAR_13[VAR_2 + 1];

 FUNC_5();
 VAR_10 = -VAR_1;
 if (!FUNC_6(VAR_7))
  goto finished;

 FUNC_2("ncp_lookup: server lookup for %s/%s\n",
  VAR_5->d_parent->d_name.name, VAR_5->d_name.name);

 VAR_12 = sizeof(VAR_13);
 if (FUNC_9(VAR_4)) {
  VAR_11 = FUNC_8(VAR_7, VAR_13, &VAR_12, VAR_5->d_name.name,
     VAR_5->d_name.len, 1);
  if (!VAR_11)
   VAR_11 = FUNC_10(VAR_7, VAR_13, &(VAR_9.i));
 } else {
  VAR_11 = FUNC_8(VAR_7, VAR_13, &VAR_12, VAR_5->d_name.name,
     VAR_5->d_name.len, !FUNC_13(VAR_4));
  if (!VAR_11)
   VAR_11 = FUNC_12(VAR_7, VAR_4, VAR_13, &(VAR_9.i));
 }
 FUNC_2("ncp_lookup: looked for %s/%s, res=%d\n",
  VAR_5->d_parent->d_name.name, VAR_13, VAR_11);



 if (VAR_11)
  goto add_entry;




 VAR_9.opened = 0;
 VAR_9.ino = FUNC_4(VAR_4->i_sb, 2);
 VAR_9.volume = VAR_9.i.volNumber;
 VAR_10 = -VAR_0;
 VAR_8 = FUNC_7(VAR_4->i_sb, &VAR_9);

 if (VAR_8) {
  FUNC_11(VAR_5);
add_entry:
  VAR_5->d_op = &VAR_3;
  FUNC_3(VAR_5, VAR_8);
  VAR_10 = 0;
 }

finished:
 FUNC_2("ncp_lookup: result=%d\n", VAR_10);
 FUNC_14();
 return FUNC_0(VAR_10);
}
