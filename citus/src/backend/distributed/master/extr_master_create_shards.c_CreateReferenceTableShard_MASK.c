
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int text ;
typedef int Oid ;
typedef int List ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 int * FUNC_3 (int ,int ,int *,int,int) ;
 int FUNC_4 (int ,int ,char,int *,int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int * VAR_5 ;
 int * FUNC_8 (int ) ;
 int FUNC_9 () ;
 char FUNC_10 (int ) ;
 int VAR_6 ;
 int * FUNC_11 (int *,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,char*) ;
 char* FUNC_15 (int ) ;

void
FUNC_16(Oid VAR_7)
{
 char VAR_8 = 0;
 List *VAR_9 = VAR_5;
 List *VAR_10 = VAR_5;
 uint64 VAR_11 = VAR_4;
 int VAR_12 = 0;
 int VAR_13 = 0;
 text *VAR_14 = ((void*)0);
 text *VAR_15 = ((void*)0);
 bool VAR_16 = 0;
 bool VAR_17 = 0;
 List *VAR_18 = VAR_5;







 FUNC_1(VAR_7);


 FUNC_6(VAR_7, VAR_3);


 VAR_8 = FUNC_10(VAR_7);


 VAR_10 = FUNC_5(VAR_7);
 if (VAR_10 != VAR_5)
 {
  char *VAR_19 = FUNC_15(VAR_7);
  FUNC_12(VAR_2, (FUNC_13(VAR_1),
      FUNC_14("table \"%s\" has already had shards created for it",
          VAR_19)));
 }





 VAR_9 = FUNC_8(VAR_6);
 VAR_9 = FUNC_11(VAR_9, VAR_0);

 VAR_13 = FUNC_9();


 VAR_11 = FUNC_2();







 FUNC_7(VAR_11, VAR_3);

 FUNC_4(VAR_7, VAR_11, VAR_8, VAR_14,
       VAR_15);

 VAR_18 = FUNC_3(VAR_7, VAR_11,
                VAR_9, VAR_12,
                VAR_13);

 FUNC_0(VAR_7, VAR_18,
        VAR_16, VAR_17);
}
