
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,struct dentry*) ;

__attribute__((used)) static int FUNC_1(struct dentry *VAR_1)
{
 FUNC_0(VAR_0, " dentry: %s (%p)\n", VAR_1->d_name.name,
         VAR_1);

 return 1;
}
