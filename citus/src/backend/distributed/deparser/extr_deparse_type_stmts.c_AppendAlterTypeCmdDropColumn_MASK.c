
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ subtype; scalar_t__ behavior; int name; } ;
typedef int StringInfo ;
typedef TYPE_1__ AlterTableCmd ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(StringInfo VAR_2, AlterTableCmd *VAR_3)
{
 FUNC_0(VAR_3->subtype == VAR_0);
 FUNC_1(VAR_2, " DROP ATTRIBUTE %s", FUNC_3(VAR_3->name));

 if (VAR_3->behavior == VAR_1)
 {
  FUNC_2(VAR_2, " CASCADE");
 }
}
