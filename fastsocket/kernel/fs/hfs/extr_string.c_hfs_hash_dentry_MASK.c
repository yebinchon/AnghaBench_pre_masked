
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {unsigned char* name; unsigned int len; int hash; } ;
struct dentry {int dummy; } ;


 unsigned int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 () ;
 unsigned int FUNC_2 (int ,unsigned int) ;

int FUNC_3(struct dentry *VAR_2, struct qstr *VAR_3)
{
 const unsigned char *VAR_4 = VAR_3->name;
 unsigned int VAR_5, VAR_6 = VAR_3->len;

 if (VAR_6 > VAR_0)
  VAR_6 = VAR_0;

 VAR_5 = FUNC_1();
 for (; VAR_6; VAR_6--)
  VAR_5 = FUNC_2(VAR_1[*VAR_4++], VAR_5);
 VAR_3->hash = FUNC_0(VAR_5);
 return 0;
}
