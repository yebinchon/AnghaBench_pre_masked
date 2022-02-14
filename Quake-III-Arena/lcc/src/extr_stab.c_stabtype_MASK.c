
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sclass; scalar_t__ type; int name; } ;
typedef TYPE_1__* Symbol ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int ,int ,int ) ;

void FUNC_2(Symbol VAR_2) {
 if (VAR_2->type) {
  if (VAR_2->sclass == 0)
   FUNC_0(VAR_2->type);
  else if (VAR_2->sclass == VAR_1)
   FUNC_1(".stabs \"%s:t%d\",%d,0,0,0\n", VAR_2->name, FUNC_0(VAR_2->type), VAR_0);
 }
}
