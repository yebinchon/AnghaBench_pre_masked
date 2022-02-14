
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (struct dentry*,struct qstr*) ;
 unsigned long FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned long) ;
 int VAR_0 ;

struct dentry * FUNC_3(struct dentry * VAR_1, struct qstr * VAR_2)
{
 struct dentry * VAR_3 = ((void*)0);
 unsigned long VAR_4;

        do {
                VAR_4 = FUNC_1(&VAR_0);
                VAR_3 = FUNC_0(VAR_1, VAR_2);
                if (VAR_3)
   break;
 } while (FUNC_2(&VAR_0, VAR_4));
 return VAR_3;
}
