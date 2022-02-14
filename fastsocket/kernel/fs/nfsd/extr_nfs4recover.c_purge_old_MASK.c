
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct dentry {TYPE_1__ d_name; int d_inode; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,struct dentry*) ;

__attribute__((used)) static int
FUNC_3(struct dentry *VAR_0, struct dentry *VAR_1)
{
 int VAR_2;


 if (FUNC_0(VAR_1->d_name.name, 0))
  return 0;

 VAR_2 = FUNC_2(VAR_0->d_inode, VAR_1);
 if (VAR_2)
  FUNC_1("failed to remove client recovery directory %s\n",
    VAR_1->d_name.name);

 return 0;
}
