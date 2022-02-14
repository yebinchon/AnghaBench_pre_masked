
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_7__ {scalar_t__ attgenerated; int attisdropped; } ;
struct TYPE_6__ {scalar_t__ natts; } ;
typedef TYPE_2__* Form_pg_attribute ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static uint32
FUNC_1(TupleDesc VAR_1)
{
 uint32 VAR_2 = 0;
 uint32 VAR_3 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->natts; VAR_3++)
 {
  Form_pg_attribute VAR_4 = FUNC_0(VAR_1, VAR_3);

  if (!VAR_4->attisdropped



   )
  {
   VAR_2++;
  }
 }

 return VAR_2;
}
