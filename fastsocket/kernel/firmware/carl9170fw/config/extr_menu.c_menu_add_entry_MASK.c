
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct menu {struct menu* next; int lineno; int file; int parent; struct symbol* sym; } ;


 int VAR_0 ;
 struct menu* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct menu** VAR_4 ;
 struct menu* FUNC_0 (int) ;
 int FUNC_1 (struct menu*,int ,int) ;
 int FUNC_2 (int ,struct symbol*,int *) ;
 int FUNC_3 () ;

void FUNC_4(struct symbol *VAR_5)
{
 struct menu *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6));
 FUNC_1(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->sym = VAR_5;
 VAR_6->parent = VAR_3;
 VAR_6->file = VAR_2;
 VAR_6->lineno = FUNC_3();

 *VAR_4 = VAR_6;
 VAR_4 = &VAR_6->next;
 VAR_1 = VAR_6;
 if (VAR_5)
  FUNC_2(VAR_0, VAR_5, ((void*)0));
}
