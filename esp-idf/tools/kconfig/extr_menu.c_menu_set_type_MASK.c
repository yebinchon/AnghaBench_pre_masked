
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct symbol {int type; char* name; } ;
struct TYPE_3__ {struct symbol* sym; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,char*,int ,int ) ;
 int FUNC_1 (int) ;

void FUNC_2(int VAR_2)
{
 struct symbol *VAR_3 = VAR_1->sym;

 if (VAR_3->type == VAR_2)
  return;
 if (VAR_3->type == VAR_0) {
  VAR_3->type = VAR_2;
  return;
 }
 FUNC_0(VAR_1,
  "ignoring type redefinition of '%s' from '%s' to '%s'",
  VAR_3->name ? VAR_3->name : "<choice>",
  FUNC_1(VAR_3->type), FUNC_1(VAR_2));
}
