
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct brcms_pub {struct dentry* dbgfs_dir; } ;


 int FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,struct dentry*,struct brcms_pub*,int *) ;

void FUNC_2(struct brcms_pub *VAR_2)
{
 struct dentry *VAR_3 = VAR_2->dbgfs_dir;

 if (!FUNC_0(VAR_3))
  FUNC_1("hardware", VAR_0, VAR_3,
        VAR_2, &VAR_1);
}
