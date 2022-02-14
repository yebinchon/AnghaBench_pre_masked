
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TupleDesc ;
typedef int TableScanDesc ;
struct TYPE_2__ {int rolname; } ;
typedef int Relation ;
typedef int List ;
typedef int * HeapTuple ;
typedef int HeapScanDesc ;
typedef TYPE_1__* Form_pg_authid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 char* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (char const*) ;
 int * VAR_3 ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int * FUNC_10 (int *,void*) ;
 int FUNC_11 (int ,int ,int *) ;

List *
FUNC_12()
{
 Relation VAR_4 = FUNC_9(VAR_1, VAR_0);
 TupleDesc VAR_5 = FUNC_4(VAR_4);
 HeapTuple VAR_6 = ((void*)0);
 List *VAR_7 = VAR_3;
 const char *VAR_8 = ((void*)0);




 HeapScanDesc VAR_9 = FUNC_5(VAR_4, 0, ((void*)0));


 while ((VAR_6 = FUNC_8(VAR_9, VAR_2)) != ((void*)0))
 {
  const char *VAR_10 = FUNC_3(((Form_pg_authid) FUNC_0(VAR_6))->rolname);





  if (FUNC_2(VAR_10))
  {
   continue;
  }
  VAR_8 = FUNC_1(VAR_6, VAR_5);
  VAR_7 = FUNC_10(VAR_7, (void *) VAR_8);
 }

 FUNC_7(VAR_9);
 FUNC_6(VAR_4, VAR_0);

 return VAR_7;
}
