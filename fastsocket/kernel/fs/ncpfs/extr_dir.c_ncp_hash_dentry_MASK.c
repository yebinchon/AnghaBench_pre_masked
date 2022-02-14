
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int len; int hash; int * name; } ;
struct nls_table {int dummy; } ;
struct dentry {int d_inode; } ;


 struct nls_table* FUNC_0 (struct dentry*) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nls_table*,int ) ;
 unsigned long FUNC_5 (int ,unsigned long) ;

__attribute__((used)) static int
FUNC_6(struct dentry *VAR_0, struct qstr *VAR_1)
{
 struct nls_table *VAR_2;
 unsigned long VAR_3;
 int VAR_4;

 VAR_2 = FUNC_0(VAR_0);

 if (!FUNC_3(VAR_0->d_inode)) {
  VAR_3 = FUNC_2();
  for (VAR_4=0; VAR_4<VAR_1->len ; VAR_4++)
   VAR_3 = FUNC_5(FUNC_4(VAR_2, VAR_1->name[VAR_4]),
         VAR_3);
  VAR_1->hash = FUNC_1(VAR_3);
 }
 return 0;
}
