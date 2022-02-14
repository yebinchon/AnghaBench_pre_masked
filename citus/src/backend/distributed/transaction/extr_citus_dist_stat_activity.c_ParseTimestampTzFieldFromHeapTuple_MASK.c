
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleDesc ;
typedef int TimestampTz ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int*) ;

__attribute__((used)) static TimestampTz
FUNC_2(HeapTuple VAR_1, TupleDesc VAR_2, int VAR_3)
{
 Datum VAR_4;
 bool VAR_5 = 0;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_5);
 if (VAR_5)
 {
  return VAR_0;
 }

 return FUNC_0(VAR_4);
}
