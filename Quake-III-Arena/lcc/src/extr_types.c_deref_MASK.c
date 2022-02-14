
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* Type ;
struct TYPE_9__ {TYPE_1__* type; } ;
struct TYPE_8__ {struct TYPE_8__* type; } ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (TYPE_1__*) ;

Type FUNC_4(Type VAR_0) {
 if (FUNC_2(VAR_0))
  VAR_0 = VAR_0->type;
 else
  FUNC_0("type error: %s\n", "pointer expected");
 return FUNC_1(VAR_0) ? FUNC_3(VAR_0)->type : VAR_0;
}
