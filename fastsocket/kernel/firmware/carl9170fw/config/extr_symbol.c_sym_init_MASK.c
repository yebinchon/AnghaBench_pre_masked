
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {int release; } ;
struct symbol {int flags; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct symbol*,int ) ;
 struct symbol* FUNC_1 (char*,int ) ;
 int FUNC_2 (struct utsname*) ;

void FUNC_3(void)
{
 struct symbol *VAR_2;
 struct utsname VAR_3;
 static bool VAR_4 = 0;

 if (VAR_4)
  return;
 VAR_4 = 1;

 FUNC_2(&VAR_3);

 VAR_2 = FUNC_1("UNAME_RELEASE", 0);
 VAR_2->type = VAR_1;
 VAR_2->flags |= VAR_0;
 FUNC_0(VAR_2, VAR_3.release);
}
