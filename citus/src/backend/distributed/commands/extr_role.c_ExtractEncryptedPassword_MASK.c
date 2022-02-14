
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupleDesc ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int*) ;
 int FUNC_7 (int ,int ) ;
 char const* FUNC_8 (int ) ;

__attribute__((used)) static const char *
FUNC_9(Oid VAR_4)
{
 Relation VAR_5 = FUNC_7(VAR_3, VAR_1);
 TupleDesc VAR_6 = FUNC_1(VAR_5);
 HeapTuple VAR_7 = FUNC_3(VAR_0, VAR_4);
 bool VAR_8 = 1;
 Datum VAR_9;

 if (!FUNC_0(VAR_7))
 {
  return ((void*)0);
 }

 VAR_9 = FUNC_6(VAR_7, VAR_2,
         VAR_6, &VAR_8);

 FUNC_5(VAR_5, VAR_1);
 FUNC_2(VAR_7);

 if (VAR_8)
 {
  return ((void*)0);
 }

 return FUNC_8(FUNC_4(VAR_9));
}
