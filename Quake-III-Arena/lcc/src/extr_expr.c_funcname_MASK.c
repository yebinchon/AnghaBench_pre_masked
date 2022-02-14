
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* Tree ;
struct TYPE_6__ {TYPE_1__* sym; } ;
struct TYPE_7__ {TYPE_2__ u; int op; } ;
struct TYPE_5__ {int name; } ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (char*,int ) ;

char *FUNC_2(Tree VAR_0) {
 if (FUNC_0(VAR_0->op))
  return FUNC_1("`%s'", VAR_0->u.sym->name);
 return "a function";
}
