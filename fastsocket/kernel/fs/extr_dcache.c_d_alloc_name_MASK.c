
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {char const* name; int len; int hash; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (struct dentry*,struct qstr*) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*) ;

struct dentry *FUNC_3(struct dentry *VAR_0, const char *VAR_1)
{
 struct qstr VAR_2;

 VAR_2.name = VAR_1;
 VAR_2.len = FUNC_2(VAR_1);
 VAR_2.hash = FUNC_1(VAR_2.name, VAR_2.len);
 return FUNC_0(VAR_0, &VAR_2);
}
