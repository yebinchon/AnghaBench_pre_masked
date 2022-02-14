
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_6__ {int natts; } ;
typedef scalar_t__ Oid ;
typedef int ListCell ;
typedef int List ;
typedef int CopyCoercionData ;


 int FUNC_0 (scalar_t__,scalar_t__,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_1__*,char*) ;
 char* FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int) ;

__attribute__((used)) static CopyCoercionData *
FUNC_7(TupleDesc VAR_1, TupleDesc VAR_2,
     Oid VAR_3, List *VAR_4,
     Oid *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = VAR_2->natts;
 CopyCoercionData *VAR_8 = FUNC_6(VAR_7 * sizeof(CopyCoercionData));
 Oid *VAR_9 = FUNC_1(VAR_2);
 ListCell *VAR_10 = FUNC_4(VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
 {
  Oid VAR_11 = VAR_0;
  Oid VAR_12 = VAR_9[VAR_6];
  char *VAR_13 = FUNC_3(VAR_10);

  if (VAR_12 == VAR_0)
  {

   continue;
  }

  VAR_11 = FUNC_2(VAR_3, VAR_1, VAR_13);

  VAR_5[VAR_6] = VAR_11;

  FUNC_0(VAR_12, VAR_11,
          &VAR_8[VAR_6]);

  VAR_10 = FUNC_5(VAR_10);

  if (VAR_10 == ((void*)0))
  {

   break;
  }
 }

 return VAR_8;
}
