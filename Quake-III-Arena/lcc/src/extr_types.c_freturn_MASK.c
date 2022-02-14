
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* Type ;
struct TYPE_6__ {struct TYPE_6__* type; } ;


 int FUNC_0 (char*,char*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

Type FUNC_2(Type VAR_1) {
 if (FUNC_1(VAR_1))
  return VAR_1->type;
 FUNC_0("type error: %s\n", "function expected");
 return VAR_0;
}
