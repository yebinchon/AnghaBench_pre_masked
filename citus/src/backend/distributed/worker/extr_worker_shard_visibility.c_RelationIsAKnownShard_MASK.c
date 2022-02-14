
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64 ;
typedef int * Relation ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (char**,scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int) ;
 int VAR_2 ;
 int FUNC_4 (scalar_t__,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int*) ;
 char VAR_5 ;
 int FUNC_7 (int ) ;
 char* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 char FUNC_10 (int ) ;
 int FUNC_11 (int *,int ) ;
 scalar_t__ FUNC_12 (char*,char*,int ) ;
 int * FUNC_13 (int ,int ) ;

bool
FUNC_14(Oid VAR_6, bool VAR_7)
{
 int VAR_8 = -1;
 char *VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0);
 bool VAR_11 = 1;
 uint64 VAR_12 = VAR_1;
 Oid VAR_13 = VAR_2;
 char VAR_14 = '\0';
 Relation VAR_15 = ((void*)0);

 if (!FUNC_5(VAR_6))
 {

  return 0;
 }

 VAR_8 = FUNC_2();
 if (VAR_8 == 0)
 {
  bool VAR_16 = 0;
  FUNC_6(0, &VAR_16);

  if (!VAR_16)
  {





   return 0;
  }
 }

 VAR_15 = FUNC_13(VAR_6, VAR_0);
 if (VAR_15 == ((void*)0))
 {
  return 0;
 }
 FUNC_11(VAR_15, VAR_4);


 if (!FUNC_7(VAR_6) && VAR_7)
 {
  return 0;
 }






 VAR_14 = FUNC_10(VAR_6);
 if (VAR_14 == VAR_5)
 {
  VAR_6 = FUNC_3(VAR_6, 0);
 }


 VAR_9 = FUNC_8(VAR_6);

 VAR_12 = FUNC_1(VAR_9, VAR_11);
 if (VAR_12 == VAR_1)
 {




  return 0;
 }


 VAR_13 = FUNC_4(VAR_12, 1);
 if (!FUNC_5(VAR_13))
 {

  return 0;
 }


 if (FUNC_9(VAR_6) != FUNC_9(VAR_13))
 {
  return 0;
 }






 VAR_10 = FUNC_8(VAR_13);
 FUNC_0(&VAR_10, VAR_12);
 if (FUNC_12(VAR_9, VAR_10, VAR_3) == 0)
 {

  return 1;
 }

 return 0;
}
