
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int
FUNC_2(struct dentry *VAR_1, struct dentry *VAR_2)
{
 if (VAR_2->d_name.len != VAR_0 - 1) {
  FUNC_1("nfsd4: illegal name %s in recovery directory\n",
    VAR_2->d_name.name);

  return 0;
 }
 FUNC_0(VAR_2->d_name.name);
 return 0;
}
