
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int WorkerNode ;
typedef int TupleDesc ;
typedef int Relation ;
typedef int * HeapTuple ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (char const*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

WorkerNode *
FUNC_6(const char *VAR_2, int32 VAR_3)
{
 WorkerNode *VAR_4 = ((void*)0);

 Relation VAR_5 = FUNC_5(FUNC_0(), VAR_0);
 TupleDesc VAR_6 = FUNC_2(VAR_5);

 HeapTuple VAR_7 = FUNC_1(VAR_2, VAR_3);
 if (VAR_7 != ((void*)0))
 {
  VAR_4 = FUNC_3(VAR_6, VAR_7);
 }

 FUNC_4(VAR_5, VAR_1);
 return VAR_4;
}
