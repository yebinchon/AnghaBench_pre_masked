
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32 ;
typedef int TupleDesc ;
struct TYPE_6__ {int * vals; int tupdesc; } ;
struct TYPE_5__ {int query_host_port; int query_host_name; } ;
typedef int * MemoryContext ;
typedef int List ;
typedef int * HeapTuple ;
typedef TYPE_1__ CitusDistStat ;


 int * VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (char const*,int,int ) ;
 int FUNC_5 () ;
 size_t VAR_4 ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*) ;
 int * FUNC_9 (int *,TYPE_1__*) ;

__attribute__((used)) static List *
FUNC_10(const char *VAR_7, const char *VAR_8, int VAR_9)
{
 List *VAR_10 = VAR_1;
 int VAR_11 = 0;
 int VAR_12 = 0;
 bool VAR_13 = 1;
 uint32 VAR_14 = 0;

 MemoryContext VAR_15 = VAR_0, VAR_16 = ((void*)0);

 VAR_11 = FUNC_2();
 if (VAR_11 != VAR_2)
 {
  FUNC_7(VAR_6, (FUNC_8("could not connect to SPI manager to get "
         "the local stat activity")));

  FUNC_5();

  return VAR_1;
 }

 VAR_12 = FUNC_4(VAR_7, VAR_13, 0);
 if (VAR_12 != VAR_3)
 {
  FUNC_7(VAR_6, (FUNC_8("execution was not successful while trying to get "
         "the local stat activity")));

  FUNC_5();

  return VAR_1;
 }
 VAR_16 = FUNC_1(VAR_15);

 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++)
 {
  HeapTuple VAR_17 = ((void*)0);
  TupleDesc VAR_18 = VAR_5->tupdesc;
  CitusDistStat *VAR_19 = ((void*)0);


  VAR_17 = FUNC_3(VAR_5->vals[VAR_14]);
  VAR_19 = FUNC_0(VAR_17, VAR_18);





  VAR_19->query_host_name = FUNC_6(VAR_8);
  VAR_19->query_host_port = VAR_9;

  VAR_10 = FUNC_9(VAR_10, VAR_19);
 }

 FUNC_1(VAR_16);

 FUNC_5();

 return VAR_10;
}
