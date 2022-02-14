
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleDesc ;
typedef int * Name ;
typedef int HeapTuple ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int*) ;

__attribute__((used)) static Name
FUNC_2(HeapTuple VAR_0, TupleDesc VAR_1, int VAR_2)
{
 Datum VAR_3;
 bool VAR_4 = 0;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_4);
 if (VAR_4)
 {
  return ((void*)0);
 }

 return (Name) FUNC_0(VAR_3);
}
