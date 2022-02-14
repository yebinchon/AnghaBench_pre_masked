
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ern; struct TYPE_3__* link; int pattern; } ;
typedef TYPE_1__* Rule ;


 void* FUNC_0 (int) ;
 scalar_t__* FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 char* FUNC_4 (void*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(Rule VAR_0, int VAR_1) {
 Rule VAR_2;
 int VAR_3, VAR_4, *VAR_5 = FUNC_0((VAR_1 + 1)*sizeof *VAR_5);
 char **VAR_6 = FUNC_0((VAR_1 + 1)*sizeof *VAR_6);

 for (VAR_3 = 0, VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->link) {
  char VAR_7[1024];
  *FUNC_1(VAR_2->pattern, VAR_7) = 0;
  for (VAR_4 = 0; VAR_6[VAR_4] && FUNC_3(VAR_6[VAR_4], VAR_7); VAR_4++)
   ;
  if (VAR_6[VAR_4] == ((void*)0)) {
   FUNC_2("static short %Pnts_%d[] = { %s0 };\n", VAR_4, VAR_7);
   VAR_6[VAR_4] = FUNC_4(FUNC_0(FUNC_5(VAR_7) + 1), VAR_7);
  }
  VAR_5[VAR_3++] = VAR_4;
 }
 FUNC_2("\nstatic short *%Pnts[] = {\n");
 for (VAR_3 = VAR_4 = 0, VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->link) {
  for ( ; VAR_4 < VAR_2->ern; VAR_4++)
   FUNC_2("%10,%1/* %d */\n", VAR_4);
  FUNC_2("%1%Pnts_%d,%1/* %d */\n", VAR_5[VAR_3++], VAR_4++);
 }
 FUNC_2("};\n\n");
}
