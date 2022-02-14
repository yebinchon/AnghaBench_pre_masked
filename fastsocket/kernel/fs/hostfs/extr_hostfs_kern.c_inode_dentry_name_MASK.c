
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 char* FUNC_0 (struct inode*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static char *FUNC_4(struct inode *VAR_0, struct dentry *VAR_1)
{
 char *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_0, VAR_1->d_name.len + 1);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 FUNC_1(VAR_2, "/");
 VAR_3 = FUNC_2(VAR_2);
 FUNC_3(VAR_2, VAR_1->d_name.name, VAR_1->d_name.len);
 VAR_2[VAR_3 + VAR_1->d_name.len] = '\0';
 return VAR_2;
}
