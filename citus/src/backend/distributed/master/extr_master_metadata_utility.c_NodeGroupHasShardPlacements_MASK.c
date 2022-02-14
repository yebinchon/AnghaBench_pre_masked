
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int * HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int * FUNC_7 (int ,int ,int const,int *,int const,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;

bool
FUNC_10(int32 VAR_7, bool VAR_8)
{
 const int VAR_9 = (VAR_8 ? 2 : 1);
 const bool VAR_10 = 0;

 bool VAR_11 = 0;

 HeapTuple VAR_12 = ((void*)0);
 SysScanDesc VAR_13 = ((void*)0);
 ScanKeyData VAR_14[2];

 Relation VAR_15 = FUNC_6(FUNC_1(),
          VAR_0);

 FUNC_4(&VAR_14[0], VAR_1,
    VAR_3, VAR_5, FUNC_3(VAR_7));
 if (VAR_8)
 {
  FUNC_4(&VAR_14[1], VAR_2,
     VAR_3, VAR_5, FUNC_3(VAR_4));
 }

 VAR_13 = FUNC_7(VAR_15,
          FUNC_0(), VAR_10,
          ((void*)0), VAR_9, VAR_14);

 VAR_12 = FUNC_9(VAR_13);
 VAR_11 = FUNC_2(VAR_12);

 FUNC_8(VAR_13);
 FUNC_5(VAR_15, VAR_6);

 return VAR_11;
}
