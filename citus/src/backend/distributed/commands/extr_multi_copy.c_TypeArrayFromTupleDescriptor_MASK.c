
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_7__ {int atttypid; scalar_t__ attisdropped; } ;
struct TYPE_6__ {int natts; } ;
typedef int Oid ;
typedef TYPE_2__* Form_pg_attribute ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,int) ;
 int * FUNC_1 (int) ;

__attribute__((used)) static Oid *
FUNC_2(TupleDesc VAR_1)
{
 int VAR_2 = VAR_1->natts;
 Oid *VAR_3 = FUNC_1(VAR_2 * sizeof(Oid));
 int VAR_4 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {
  Form_pg_attribute VAR_5 = FUNC_0(VAR_1, VAR_4);
  if (VAR_5->attisdropped)
  {
   VAR_3[VAR_4] = VAR_0;
  }
  else
  {
   VAR_3[VAR_4] = VAR_5->atttypid;
  }
 }

 return VAR_3;
}
