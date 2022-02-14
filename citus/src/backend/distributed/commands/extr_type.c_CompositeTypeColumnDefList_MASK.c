
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_8__ {scalar_t__ attisdropped; } ;
struct TYPE_7__ {int natts; } ;
typedef int * Relation ;
typedef int Oid ;
typedef int List ;
typedef TYPE_2__* Form_pg_attribute ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 TYPE_1__* FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static List *
FUNC_7(Oid VAR_3)
{
 Relation VAR_4 = ((void*)0);
 Oid VAR_5 = VAR_1;
 TupleDesc VAR_6 = ((void*)0);
 int VAR_7 = 0;
 List *VAR_8 = VAR_2;

 VAR_5 = FUNC_6(VAR_3);
 VAR_4 = FUNC_5(VAR_5, VAR_0);

 VAR_6 = FUNC_0(VAR_4);
 for (VAR_7 = 0; VAR_7 < VAR_6->natts; VAR_7++)
 {
  Form_pg_attribute VAR_9 = FUNC_1(VAR_6, VAR_7);

  if (VAR_9->attisdropped)
  {

   continue;
  }

  VAR_8 = FUNC_3(VAR_8, FUNC_2(VAR_9));
 }

 FUNC_4(VAR_4, VAR_0);

 return VAR_8;
}
