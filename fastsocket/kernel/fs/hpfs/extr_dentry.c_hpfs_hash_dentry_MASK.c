
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {unsigned int len; char* name; int hash; } ;
struct dentry {int d_sb; } ;
struct TYPE_2__ {int sb_cp_table; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (char*,unsigned int*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,char) ;
 unsigned long FUNC_4 () ;
 unsigned long FUNC_5 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct dentry *VAR_0, struct qstr *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;
 unsigned VAR_4 = VAR_1->len;

 if (VAR_4 == 1) if (VAR_1->name[0]=='.') goto x;
 if (VAR_4 == 2) if (VAR_1->name[0]=='.' || VAR_1->name[1]=='.') goto x;
 FUNC_1((char *)VAR_1->name, &VAR_4);



 x:

 VAR_2 = FUNC_4();
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  VAR_2 = FUNC_5(FUNC_3(FUNC_2(VAR_0->d_sb)->sb_cp_table,VAR_1->name[VAR_3]), VAR_2);
 VAR_1->hash = FUNC_0(VAR_2);

 return 0;
}
