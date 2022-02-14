
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
 int FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int * FUNC_8 (int ,int ,int const,int *,int const,int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;

__attribute__((used)) static HeapTuple
FUNC_11(const char *VAR_8, int32 VAR_9)
{
 Relation VAR_10 = FUNC_7(FUNC_1(), VAR_0);
 const int VAR_11 = 2;
 const bool VAR_12 = 0;

 ScanKeyData VAR_13[2];
 SysScanDesc VAR_14 = ((void*)0);
 HeapTuple VAR_15 = ((void*)0);
 HeapTuple VAR_16 = ((void*)0);

 FUNC_4(&VAR_13[0], VAR_1,
    VAR_3, VAR_5, FUNC_0(VAR_8));
 FUNC_4(&VAR_13[1], VAR_2,
    VAR_3, VAR_4, FUNC_3(VAR_9));
 VAR_14 = FUNC_8(VAR_10, VAR_6, VAR_12,
          ((void*)0), VAR_11, VAR_13);

 VAR_15 = FUNC_10(VAR_14);
 if (FUNC_2(VAR_15))
 {
  VAR_16 = FUNC_6(VAR_15);
 }

 FUNC_9(VAR_14);
 FUNC_5(VAR_10, VAR_7);

 return VAR_16;
}
