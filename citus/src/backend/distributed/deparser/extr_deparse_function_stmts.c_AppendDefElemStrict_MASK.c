
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int arg; } ;
typedef int StringInfo ;
typedef TYPE_1__ DefElem ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(StringInfo VAR_0, DefElem *VAR_1)
{
 if (FUNC_1(VAR_1->arg) == 1)
 {
  FUNC_0(VAR_0, " STRICT");
 }
 else
 {
  FUNC_0(VAR_0, " CALLED ON NULL INPUT");
 }
}
