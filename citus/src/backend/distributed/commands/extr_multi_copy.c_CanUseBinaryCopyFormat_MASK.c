
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_7__ {scalar_t__ attgenerated; int atttypid; scalar_t__ attisdropped; } ;
struct TYPE_6__ {int natts; } ;
typedef int Oid ;
typedef TYPE_2__* Form_pg_attribute ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int) ;

bool
FUNC_2(TupleDesc VAR_2)
{
 bool VAR_3 = 1;
 int VAR_4 = VAR_2->natts;
 int VAR_5 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
 {
  Form_pg_attribute VAR_6 = FUNC_1(VAR_2, VAR_5);
  Oid VAR_7 = VAR_1;

  if (VAR_6->attisdropped



   )
  {
   continue;
  }

  VAR_7 = VAR_6->atttypid;
  if (!FUNC_0(VAR_7))
  {
   VAR_3 = 0;
   break;
  }
 }

 return VAR_3;
}
