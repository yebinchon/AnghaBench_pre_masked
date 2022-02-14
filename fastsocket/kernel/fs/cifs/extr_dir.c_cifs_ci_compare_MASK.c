
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qstr {int len; int name; } ;
struct nls_table {int dummy; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_4__ {struct nls_table* local_nls; } ;
struct TYPE_3__ {int i_sb; } ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct nls_table*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_0, struct qstr *VAR_1,
      struct qstr *VAR_2)
{
 struct nls_table *VAR_3 = FUNC_0(VAR_0->d_inode->i_sb)->local_nls;

 if ((VAR_1->len == VAR_2->len) &&
     (FUNC_1(VAR_3, VAR_1->name, VAR_2->name, VAR_1->len) == 0))
  return 0;
 return 1;
}
