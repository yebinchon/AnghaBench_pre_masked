
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {struct property* prop; } ;
struct property {int type; struct property* next; int lineno; int file; struct symbol* sym; } ;
typedef enum prop_type { ____Placeholder_prop_type } prop_type ;


 int VAR_0 ;
 int FUNC_0 (struct property*,int ,int) ;
 struct property* FUNC_1 (int) ;
 int FUNC_2 () ;

struct property *FUNC_3(enum prop_type VAR_1, struct symbol *VAR_2)
{
 struct property *VAR_3;
 struct property **VAR_4;

 VAR_3 = FUNC_1(sizeof(*VAR_3));
 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->type = VAR_1;
 VAR_3->sym = VAR_2;
 VAR_3->file = VAR_0;
 VAR_3->lineno = FUNC_2();


 if (VAR_2) {
  for (VAR_4 = &VAR_2->prop; *VAR_4; VAR_4 = &(*VAR_4)->next)
   ;
  *VAR_4 = VAR_3;
 }

 return VAR_3;
}
