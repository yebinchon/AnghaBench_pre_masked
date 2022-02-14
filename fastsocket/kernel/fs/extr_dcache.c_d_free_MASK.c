
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int d_rcu; } ;
struct dentry {TYPE_2__ d_u; int d_hash; TYPE_1__* d_op; } ;
struct TYPE_3__ {int (* d_release ) (struct dentry*) ;} ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct dentry*) ;

__attribute__((used)) static void FUNC_4(struct dentry *VAR_1)
{
 if (VAR_1->d_op && VAR_1->d_op->d_release)
  VAR_1->d_op->d_release(VAR_1);

 if (FUNC_2(&VAR_1->d_hash))
  FUNC_0(VAR_1);
 else
  FUNC_1(&VAR_1->d_u.d_rcu, VAR_0);
}
