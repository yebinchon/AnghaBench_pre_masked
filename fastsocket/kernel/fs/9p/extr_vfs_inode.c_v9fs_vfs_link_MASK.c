
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p9_fid {int fid; } ;
struct inode {int i_ino; } ;
struct TYPE_2__ {int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct p9_fid*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 int FUNC_2 (struct p9_fid*) ;
 char* FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct p9_fid*) ;
 int FUNC_6 (char*,char*,int) ;
 scalar_t__ FUNC_7 (int) ;
 struct p9_fid* FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct inode*,struct dentry*,int ,char*) ;

__attribute__((used)) static int
FUNC_10(struct dentry *VAR_3, struct inode *VAR_4,
       struct dentry *VAR_5)
{
 int VAR_6;
 struct p9_fid *VAR_7;
 char *VAR_8;

 FUNC_1(VAR_1,
  " %lu,%s,%s\n", VAR_4->i_ino, VAR_5->d_name.name,
  VAR_3->d_name.name);

 VAR_7 = FUNC_8(VAR_3);
 if (FUNC_0(VAR_7))
  return FUNC_2(VAR_7);

 VAR_8 = FUNC_3();
 if (FUNC_7(!VAR_8)) {
  VAR_6 = -VAR_0;
  goto clunk_fid;
 }

 FUNC_6(VAR_8, "%d\n", VAR_7->fid);
 VAR_6 = FUNC_9(VAR_4, VAR_5, VAR_2, VAR_8);
 FUNC_4(VAR_8);

clunk_fid:
 FUNC_5(VAR_7);
 return VAR_6;
}
