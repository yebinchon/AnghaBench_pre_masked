
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* template; int ern; struct TYPE_3__* link; } ;
typedef TYPE_1__* Rule ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(Rule VAR_0) {
 Rule VAR_1;

 FUNC_0("static char *%Ptemplates[] = {\n");
 FUNC_0("/* 0 */%10,\n");
 for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->link)
  FUNC_0("/* %d */%1\"%s\",%1/* %R */\n", VAR_1->ern, VAR_1->template, VAR_1);
 FUNC_0("};\n");
 FUNC_0("\nstatic char %Pisinstruction[] = {\n");
 FUNC_0("/* 0 */%10,\n");
 for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->link) {
  int VAR_2 = FUNC_1(VAR_1->template);
  FUNC_0("/* %d */%1%d,%1/* %s */\n", VAR_1->ern,
   VAR_2 >= 2 && VAR_1->template[VAR_2-2] == '\\' && VAR_1->template[VAR_2-1] == 'n',
   VAR_1->template);
 }
 FUNC_0("};\n");
 FUNC_0("\nstatic char *%Pstring[] = {\n");
 FUNC_0("/* 0 */%10,\n");
 for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->link)
  FUNC_0("/* %d */%1\"%R\",\n", VAR_1->ern, VAR_1);
 FUNC_0("};\n\n");
}
