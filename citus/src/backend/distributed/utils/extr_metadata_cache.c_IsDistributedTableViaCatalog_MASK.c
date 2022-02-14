
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int * HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int * FUNC_7 (int ,int ,int,int *,int const,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;

__attribute__((used)) static bool
FUNC_10(Oid VAR_4)
{
 HeapTuple VAR_5 = ((void*)0);
 SysScanDesc VAR_6 = ((void*)0);
 const int VAR_7 = 1;
 ScanKeyData VAR_8[1];
 bool VAR_9 = 1;

 Relation VAR_10 = FUNC_6(FUNC_1(), VAR_0);

 FUNC_4(&VAR_8[0], VAR_1,
    VAR_2, VAR_3, FUNC_3(VAR_4));

 VAR_6 = FUNC_7(VAR_10,
          FUNC_0(),
          VAR_9, ((void*)0), VAR_7, VAR_8);

 VAR_5 = FUNC_9(VAR_6);
 FUNC_8(VAR_6);
 FUNC_5(VAR_10, VAR_0);

 return FUNC_2(VAR_5);
}
