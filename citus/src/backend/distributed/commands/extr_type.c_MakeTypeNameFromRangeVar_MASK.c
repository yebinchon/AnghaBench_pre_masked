
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TypeName ;
struct TYPE_3__ {scalar_t__ relname; scalar_t__ schemaname; } ;
typedef TYPE_1__ RangeVar ;
typedef int List ;


 int * VAR_0 ;
 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static TypeName *
FUNC_3(const RangeVar *VAR_1)
{
 List *VAR_2 = VAR_0;
 if (VAR_1->schemaname)
 {
  VAR_2 = FUNC_0(VAR_2, FUNC_1(VAR_1->schemaname));
 }
 VAR_2 = FUNC_0(VAR_2, FUNC_1(VAR_1->relname));

 return FUNC_2(VAR_2);
}
