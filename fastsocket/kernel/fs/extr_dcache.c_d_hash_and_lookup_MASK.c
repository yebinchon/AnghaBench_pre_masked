
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {int len; int name; int hash; } ;
struct dentry {TYPE_1__* d_op; } ;
struct TYPE_2__ {scalar_t__ (* d_hash ) (struct dentry*,struct qstr*) ;} ;


 struct dentry* FUNC_0 (struct dentry*,struct qstr*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct dentry*,struct qstr*) ;

struct dentry *FUNC_3(struct dentry *VAR_0, struct qstr *VAR_1)
{
 struct dentry *VAR_2 = ((void*)0);






 VAR_1->hash = FUNC_1(VAR_1->name, VAR_1->len);
 if (VAR_0->d_op && VAR_0->d_op->d_hash) {
  if (VAR_0->d_op->d_hash(VAR_0, VAR_1) < 0)
   goto out;
 }
 VAR_2 = FUNC_0(VAR_0, VAR_1);
out:
 return VAR_2;
}
