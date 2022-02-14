
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {scalar_t__ len; int name; } ;
struct dentry {int d_inode; } ;


 int FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct dentry *VAR_0, struct qstr *VAR_1, struct qstr *VAR_2)
{
 if (VAR_1->len != VAR_2->len)
  return 1;

 if (FUNC_1(VAR_0->d_inode))
  return FUNC_3(VAR_1->name, VAR_2->name, VAR_1->len);

 return FUNC_2(FUNC_0(VAR_0), VAR_1->name, VAR_2->name, VAR_1->len);
}
