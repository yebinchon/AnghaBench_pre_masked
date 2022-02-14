
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int (* toupper_t ) (int const) ;
struct qstr {int hash; int len; int * name; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (int ,unsigned int) ;
 unsigned long FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static inline int
FUNC_5(struct dentry *VAR_0, struct qstr *VAR_1, toupper_t VAR_2)
{
 const u8 *VAR_3 = VAR_1->name;
 unsigned long VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1->name,VAR_1->len);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_2();
 VAR_5 = FUNC_3(VAR_1->len, 30u);
 for (; VAR_5 > 0; VAR_3++, VAR_5--)
  VAR_4 = FUNC_4(VAR_2(*VAR_3), VAR_4);
 VAR_1->hash = FUNC_1(VAR_4);

 return 0;
}
