
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct dentry {TYPE_1__* d_op; } ;
struct TYPE_2__ {int (* d_revalidate ) (struct dentry*,struct nameidata*) ;} ;


 struct dentry* FUNC_0 (int) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*,struct nameidata*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline struct dentry *
FUNC_5(struct dentry *VAR_0, struct nameidata *VAR_1)
{
 int VAR_2 = VAR_0->d_op->d_revalidate(VAR_0, VAR_1);
 if (FUNC_4(VAR_2 <= 0)) {






  if (!VAR_2) {
   if (!FUNC_1(VAR_0)) {
    FUNC_2(VAR_0);
    VAR_0 = ((void*)0);
   }
  } else {
   FUNC_2(VAR_0);
   VAR_0 = FUNC_0(VAR_2);
  }
 }
 return VAR_0;
}
