
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct dentry {TYPE_1__ d_name; int d_alias; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct dentry*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct dentry *VAR_1)
{
 FUNC_0(!FUNC_4(&VAR_1->d_alias));
 if (FUNC_1(VAR_1))
  FUNC_2(VAR_1->d_name.name);
 FUNC_3(VAR_0, VAR_1);
}
