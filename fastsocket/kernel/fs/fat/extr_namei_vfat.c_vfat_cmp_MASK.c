
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int name; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int ,unsigned int) ;
 unsigned int FUNC_1 (struct qstr*) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_0, struct qstr *VAR_1, struct qstr *VAR_2)
{
 unsigned int VAR_3, VAR_4;


 VAR_3 = FUNC_1(VAR_1);
 VAR_4 = FUNC_1(VAR_2);
 if (VAR_3 == VAR_4) {
  if (FUNC_0(VAR_1->name, VAR_2->name, VAR_3) == 0)
   return 0;
 }
 return 1;
}
