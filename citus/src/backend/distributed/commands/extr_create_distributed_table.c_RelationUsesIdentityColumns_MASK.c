
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_7__ {char attidentity; } ;
struct TYPE_6__ {int natts; } ;
typedef TYPE_2__* Form_pg_attribute ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static bool
FUNC_1(TupleDesc VAR_0)
{
 int VAR_1 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->natts; VAR_1++)
 {
  Form_pg_attribute VAR_2 = FUNC_0(VAR_0, VAR_1);

  if (VAR_2->attidentity != '\0')
  {
   return 1;
  }
 }

 return 0;
}
