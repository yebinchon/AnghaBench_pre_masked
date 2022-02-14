
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;
typedef int Oid ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int*) ;
 int VAR_3 ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,char*,char*) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (int ,int ,int,int,char,int **,int *,int*) ;
 int FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (char*) ;
 int FUNC_14 (TYPE_1__*,char*) ;
 char* FUNC_15 (char*,char) ;

__attribute__((used)) static char *
FUNC_16(Oid VAR_4)
{
 char *VAR_5 = ((void*)0);
 HeapTuple VAR_6;
 Datum VAR_7;
 bool VAR_8;

 VAR_6 = FUNC_4(VAR_2, FUNC_2(VAR_4));
 if (!FUNC_1(VAR_6))
 {
  FUNC_10(VAR_1, "cache lookup failed for relation %u", VAR_4);
 }

 VAR_7 = FUNC_5(VAR_2, VAR_6,
         VAR_0, &VAR_8);
 if (!VAR_8)
 {
  StringInfoData VAR_9;
  Datum *VAR_10;
  int VAR_11;
  int VAR_12;

  FUNC_11(&VAR_9);

  FUNC_9(FUNC_0(VAR_7),
        VAR_3, -1, 0, 'i',
        &VAR_10, ((void*)0), &VAR_11);

  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
  {
   char *VAR_13 = FUNC_6(VAR_10[VAR_12]);
   char *VAR_14;
   char *VAR_15;
   char *VAR_16;





   VAR_14 = VAR_13;
   VAR_15 = FUNC_15(VAR_13, '=');
   if (VAR_15)
   {
    *VAR_15 = '\0';
    VAR_16 = VAR_15 + 1;
   }
   else
   {
    VAR_16 = "";
   }

   if (VAR_12 > 0)
   {
    FUNC_8(&VAR_9, ", ");
   }
   FUNC_7(&VAR_9, "%s=", FUNC_13(VAR_14));
   if (FUNC_13(VAR_16) == VAR_16)
   {
    FUNC_8(&VAR_9, VAR_16);
   }
   else
   {
    FUNC_14(&VAR_9, VAR_16);
   }

   FUNC_12(VAR_13);
  }

  VAR_5 = VAR_9.data;
 }

 FUNC_3(VAR_6);

 return VAR_5;
}
