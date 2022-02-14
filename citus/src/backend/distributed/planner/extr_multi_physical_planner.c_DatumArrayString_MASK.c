
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int int16 ;
typedef int * StringInfo ;
typedef int Oid ;
typedef int FmgrInfo ;
typedef int Datum ;
typedef int ArrayType ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*) ;
 int * FUNC_4 (int *,int ,int ,int ,int,char) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *,int*,char*) ;
 int * FUNC_7 () ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static StringInfo
FUNC_9(Datum *VAR_1, uint32 VAR_2, Oid VAR_3)
{
 StringInfo VAR_4 = ((void*)0);
 FmgrInfo *VAR_5 = ((void*)0);
 ArrayType *VAR_6 = ((void*)0);
 Datum VAR_7 = 0;
 Datum VAR_8 = 0;
 char *VAR_9 = ((void*)0);
 int16 VAR_10 = 0;
 bool VAR_11 = 0;
 char VAR_12 = 0;


 FUNC_6(VAR_3, &VAR_10, &VAR_11, &VAR_12);
 VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_3,
          VAR_10, VAR_11, VAR_12);
 VAR_7 = FUNC_2(VAR_6);


 VAR_5 = (FmgrInfo *) FUNC_8(sizeof(FmgrInfo));
 FUNC_5(VAR_0, VAR_5);

 VAR_8 = FUNC_1(VAR_5, VAR_7);
 VAR_9 = FUNC_0(VAR_8);

 VAR_4 = FUNC_7();
 FUNC_3(VAR_4, "%s", VAR_9);

 return VAR_4;
}
