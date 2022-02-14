
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; int len; } ;
struct dentry {TYPE_1__ d_name; int d_sb; } ;
struct autofs_sb_info {int dummy; } ;
struct autofs_info {int flags; int last_used; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_1 ;
 struct autofs_info* FUNC_1 (struct dentry*) ;
 struct autofs_sb_info* FUNC_2 (int ) ;
 int FUNC_3 (struct autofs_sb_info*,struct dentry*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct dentry *VAR_3)
{
 struct autofs_sb_info *VAR_4 = FUNC_2(VAR_3->d_sb);
 struct autofs_info *VAR_5 = FUNC_1(VAR_3);
 int VAR_6 = 0;

 if (VAR_5->flags & VAR_0) {
  FUNC_0("waiting for mount name=%.*s",
   VAR_3->d_name.len, VAR_3->d_name.name);
  VAR_6 = FUNC_3(VAR_4, VAR_3, VAR_1);
  FUNC_0("mount wait done status=%d", VAR_6);
 }
 VAR_5->last_used = VAR_2;
 return VAR_6;
}
