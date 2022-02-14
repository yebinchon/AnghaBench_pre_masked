
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ subtype; scalar_t__ behavior; int def; int name; } ;
typedef int StringInfo ;
typedef TYPE_1__ AlterTableCmd ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(StringInfo VAR_3, AlterTableCmd *VAR_4)
{
 FUNC_1(VAR_4->subtype == VAR_0);
 FUNC_2(VAR_3, " ALTER ATTRIBUTE %s SET DATA TYPE ", FUNC_5(
       VAR_4->name));
 FUNC_0(VAR_3, FUNC_4(VAR_1, VAR_4->def));

 if (VAR_4->behavior == VAR_2)
 {
  FUNC_3(VAR_3, " CASCADE");
 }
}
