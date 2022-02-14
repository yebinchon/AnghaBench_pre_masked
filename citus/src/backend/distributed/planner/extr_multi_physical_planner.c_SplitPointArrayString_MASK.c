
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int * StringInfo ;
typedef scalar_t__ Oid ;
typedef int FmgrInfo ;
typedef int Datum ;
typedef int ArrayType ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char*,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (scalar_t__,int *) ;
 char* FUNC_6 (scalar_t__) ;
 char* FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (scalar_t__,scalar_t__*,int*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int * FUNC_10 () ;
 scalar_t__ FUNC_11 (int) ;
 char* FUNC_12 (char*) ;

__attribute__((used)) static StringInfo
FUNC_13(ArrayType *VAR_2, Oid VAR_3, int32 VAR_4)
{
 StringInfo VAR_5 = ((void*)0);
 Datum VAR_6 = FUNC_1(VAR_2);
 Oid VAR_7 = VAR_1;
 bool VAR_8 = 0;
 FmgrInfo *VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0);
 char *VAR_11 = ((void*)0);
 char *VAR_12 = ((void*)0);

 Oid VAR_13 = FUNC_9(VAR_3);
 if (VAR_13 == VAR_1)
 {
  char *VAR_14 = FUNC_6(VAR_3);
  FUNC_3(VAR_0, (FUNC_4("cannot range repartition table on column type %s",
          VAR_14)));
 }

 VAR_9 = (FmgrInfo *) FUNC_11(sizeof(FmgrInfo));
 FUNC_8(VAR_13, &VAR_7, &VAR_8);
 FUNC_5(VAR_7, VAR_9);

 VAR_10 = FUNC_0(VAR_9, VAR_6);
 VAR_11 = FUNC_12(VAR_10);


 VAR_12 = FUNC_7(VAR_13, VAR_4);

 VAR_5 = FUNC_10();
 FUNC_2(VAR_5, "%s::%s",
      VAR_11, VAR_12);

 return VAR_5;
}
