
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 unsigned long FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (unsigned long*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int VAR_2 ;
 int FUNC_7 (unsigned long,char*,char*) ;

__attribute__((used)) static void
FUNC_8(void)
{
 int VAR_3 = FUNC_1();
 unsigned long VAR_4;
 static char VAR_5[64];

 switch (VAR_3) {
 case 'a':
  if (FUNC_4(&VAR_4))
   FUNC_7(VAR_4, ": ", "\n");
  VAR_2 = 0;
  break;
 case 's':
  FUNC_0(VAR_5, 64);
  if (FUNC_5(VAR_0) == 0) {
   VAR_1 = 1;
   FUNC_6();
   VAR_4 = FUNC_2(VAR_5);
   if (VAR_4)
    FUNC_3("%s: %lx\n", VAR_5, VAR_4);
   else
    FUNC_3("Symbol '%s' not found.\n", VAR_5);
   FUNC_6();
  }
  VAR_1 = 0;
  VAR_2 = 0;
  break;
 }
}
