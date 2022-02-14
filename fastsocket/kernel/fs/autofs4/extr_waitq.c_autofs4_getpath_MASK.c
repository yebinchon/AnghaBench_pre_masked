
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int len; int name; } ;
struct dentry {TYPE_2__ d_name; struct dentry* d_parent; } ;
struct autofs_sb_info {TYPE_1__* sb; } ;
struct TYPE_3__ {struct dentry* s_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct autofs_sb_info *VAR_2,
      struct dentry *VAR_3, char **VAR_4)
{
 struct dentry *VAR_5 = VAR_2->sb->s_root;
 struct dentry *VAR_6;
 char *VAR_7 = *VAR_4;
 char *VAR_8;
 int VAR_9 = 0;

 FUNC_0(&VAR_1);
 for (VAR_6 = VAR_3 ; VAR_6 != VAR_5 ; VAR_6 = VAR_6->d_parent)
  VAR_9 += VAR_6->d_name.len + 1;

 if (!VAR_9 || --VAR_9 > VAR_0) {
  FUNC_1(&VAR_1);
  return 0;
 }

 *(VAR_7 + VAR_9) = '\0';
 VAR_8 = VAR_7 + VAR_9 - VAR_3->d_name.len;
 FUNC_2(VAR_8, VAR_3->d_name.name, VAR_3->d_name.len);

 for (VAR_6 = VAR_3->d_parent; VAR_6 != VAR_5 ; VAR_6 = VAR_6->d_parent) {
  *(--VAR_8) = '/';
  VAR_8 -= VAR_6->d_name.len;
  FUNC_2(VAR_8, VAR_6->d_name.name, VAR_6->d_name.len);
 }
 FUNC_1(&VAR_1);

 return VAR_9;
}
