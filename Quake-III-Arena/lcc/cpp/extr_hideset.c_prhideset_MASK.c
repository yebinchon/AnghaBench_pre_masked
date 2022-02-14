
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ name; int len; } ;
typedef TYPE_1__** Hideset ;


 int FUNC_0 (int ,char*,...) ;
 TYPE_1__*** VAR_0 ;
 int VAR_1 ;

void
FUNC_1(int VAR_2)
{
 Hideset VAR_3;

 for (VAR_3 = VAR_0[VAR_2]; *VAR_3; VAR_3++) {
  FUNC_0(VAR_1, (char*)(*VAR_3)->name, (*VAR_3)->len);
  FUNC_0(VAR_1, " ");
 }
}
