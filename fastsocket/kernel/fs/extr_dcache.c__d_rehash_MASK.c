
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hash; } ;
struct dentry {TYPE_1__ d_name; int d_parent; } ;


 int FUNC_0 (struct dentry*,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct dentry * VAR_0)
{
 FUNC_0(VAR_0, FUNC_1(VAR_0->d_parent, VAR_0->d_name.hash));
}
