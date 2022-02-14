
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * relname; int * schemaname; int * catalogname; } ;
typedef TYPE_1__ RangeVar ;
typedef int List ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;

List *
FUNC_5(const RangeVar *VAR_0)
{
 if (VAR_0->catalogname != ((void*)0))
 {
  FUNC_0(VAR_0->schemaname != ((void*)0));
  FUNC_0(VAR_0->relname != ((void*)0));
  return FUNC_3(FUNC_4(VAR_0->catalogname),
        FUNC_4(VAR_0->schemaname),
        FUNC_4(VAR_0->relname));
 }
 else if (VAR_0->schemaname != ((void*)0))
 {
  FUNC_0(VAR_0->relname != ((void*)0));
  return FUNC_2(FUNC_4(VAR_0->schemaname),
        FUNC_4(VAR_0->relname));
 }
 else
 {
  FUNC_0(VAR_0->relname != ((void*)0));
  return FUNC_1(FUNC_4(VAR_0->relname));
 }
}
