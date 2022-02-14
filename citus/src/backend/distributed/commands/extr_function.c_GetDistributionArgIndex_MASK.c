
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int * HeapTuple ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (int *,int **,char***,char**) ;
 char* FUNC_12 (int ) ;
 int FUNC_13 (char*,int,int ) ;
 scalar_t__ FUNC_14 (char*,char*,int ) ;

__attribute__((used)) static int
FUNC_15(Oid VAR_5, char *VAR_6,
      Oid *VAR_7)
{
 int VAR_8 = -1;

 int VAR_9 = 0;
 int VAR_10 = 0;
 Oid *VAR_11 = ((void*)0);
 char **VAR_12 = ((void*)0);
 char *VAR_13 = ((void*)0);

 HeapTuple VAR_14 = ((void*)0);

 *VAR_7 = VAR_2;

 VAR_14 = FUNC_4(VAR_4, FUNC_2(VAR_5));
 if (!FUNC_1(VAR_14))
 {
  FUNC_6(VAR_1, "cache lookup failed for function %u", VAR_5);
 }

 VAR_9 = FUNC_11(VAR_14, &VAR_11, &VAR_12, &VAR_13);

 if (FUNC_5(VAR_6, "$"))
 {

  VAR_6++;


  VAR_8 = FUNC_13(VAR_6, 4, 0);

  if (VAR_8 < 1 || VAR_8 > VAR_9)
  {
   char *VAR_15 = FUNC_12(VAR_5);

   FUNC_7(VAR_1, (FUNC_8(VAR_0),
       FUNC_10("cannot distribute the function \"%s\" since "
           "the distribution argument is not valid",
           VAR_15),
       FUNC_9("Either provide a valid function argument name "
         "or a valid \"$paramIndex\" to "
         "create_distributed_function()")));
  }





  VAR_8 -= 1;
  *VAR_7 = VAR_11[VAR_8];

  FUNC_3(VAR_14);

  FUNC_0(*VAR_7 != VAR_2);

  return VAR_8;
 }






 for (VAR_10 = 0; VAR_10 < VAR_9; ++VAR_10)
 {
  char *VAR_16 = VAR_12 != ((void*)0) ? VAR_12[VAR_10] : ((void*)0);

  if (VAR_16 != ((void*)0) &&
   FUNC_14(VAR_16, VAR_6, VAR_3) == 0)
  {
   VAR_8 = VAR_10;

   *VAR_7 = VAR_11[VAR_10];


   break;
  }
 }


 if (VAR_8 == -1)
 {
  char *VAR_17 = FUNC_12(VAR_5);

  FUNC_7(VAR_1, (FUNC_8(VAR_0),
      FUNC_10("cannot distribute the function \"%s\" since the "
          "distribution argument is not valid ", VAR_17),
      FUNC_9("Either provide a valid function argument name "
        "or a valid \"$paramIndex\" to "
        "create_distributed_function()")));
 }

 FUNC_3(VAR_14);

 FUNC_0(*VAR_7 != VAR_2);

 return VAR_8;
}
