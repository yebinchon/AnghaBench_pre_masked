
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef scalar_t__ Oid ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,...) ;
 char* FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (char*,char*,int ) ;

__attribute__((used)) static int
FUNC_15(Oid VAR_11, char *VAR_12,
      Oid VAR_13)
{
 int VAR_14 = VAR_2;
 Relation VAR_15 = FUNC_13(FUNC_2(), VAR_10);

 if (FUNC_14(VAR_12, "default", VAR_4) == 0)
 {
  Oid VAR_16 = VAR_3;


  VAR_14 = FUNC_1(VAR_8, VAR_9,
         VAR_13);

  if (VAR_14 == VAR_2)
  {
   char *VAR_17 = FUNC_11(VAR_11);

   FUNC_7(VAR_1, (FUNC_8(VAR_0),
       FUNC_10("cannot distribute the function \"%s\" since there "
           "is no table to colocate with", VAR_17),
       FUNC_9("Provide a distributed table via \"colocate_with\" "
         "option to create_distributed_function()")));
  }

  VAR_16 = FUNC_0(VAR_14);
  if (VAR_16 != VAR_3)
  {
   FUNC_3(VAR_11, VAR_13,
              VAR_16);
  }
  else if (VAR_7 == VAR_6)
  {

   FUNC_7(VAR_1, (FUNC_10("cannot create a function with a distribution "
           "argument when citus.replication_model is "
           "'statement'"),
       FUNC_9("Set citus.replication_model to 'streaming' "
         "before creating distributed tables")));
  }
 }
 else
 {
  Oid VAR_18 =
   FUNC_4(FUNC_6(VAR_12), 0);

  FUNC_3(VAR_11, VAR_13,
             VAR_18);

  VAR_14 = FUNC_5(VAR_18);
 }


 FUNC_12(VAR_15, VAR_5);

 return VAR_14;
}
