
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {char const* name; int len; int hash; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 () ;
 unsigned long FUNC_2 (unsigned int,unsigned long) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, struct qstr *VAR_2,
  struct dentry *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 unsigned int VAR_6;

 VAR_2->name = VAR_1;
 VAR_2->len = VAR_4;
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_1();
 while (VAR_4--) {
  VAR_6 = *(const unsigned char *)VAR_1++;
  if (VAR_6 == '/' || VAR_6 == '\0')
   return -VAR_0;
  VAR_5 = FUNC_2(VAR_6, VAR_5);
 }
 VAR_2->hash = FUNC_0(VAR_5);
 return 0;
}
