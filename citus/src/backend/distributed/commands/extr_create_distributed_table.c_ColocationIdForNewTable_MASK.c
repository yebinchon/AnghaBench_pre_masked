
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef int text ;
struct TYPE_3__ {int vartype; } ;
typedef TYPE_1__ Var ;
typedef int Relation ;
typedef int Oid ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 () ;
 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,char,int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *,int) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (int ) ;
 int * FUNC_8 (char*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (char*,char*,int ) ;

__attribute__((used)) static uint32
FUNC_16(Oid VAR_11, Var *VAR_12,
      char VAR_13, char VAR_14,
      char *VAR_15, bool VAR_16)
{
 uint32 VAR_17 = VAR_6;

 if (VAR_16)
 {
  return VAR_17;
 }
 else if (VAR_13 == VAR_0 ||
    VAR_13 == VAR_2)
 {
  if (FUNC_15(VAR_15, "default", VAR_7) != 0)
  {
   FUNC_9(VAR_4, (FUNC_10(VAR_3),
       FUNC_12("cannot distribute relation"),
       FUNC_11("Currently, colocate_with option is only supported "
           "for hash distributed tables.")));
  }

  return VAR_17;
 }
 else if (VAR_13 == VAR_1)
 {
  return FUNC_2();
 }
 else
 {





  Relation VAR_18 = FUNC_14(FUNC_3(), VAR_5);

  Oid VAR_19 = VAR_12->vartype;
  bool VAR_20 = 0;

  if (FUNC_15(VAR_15, "default", VAR_7) == 0)
  {

   VAR_17 = FUNC_0(VAR_9, VAR_10,
          VAR_19);

   if (VAR_17 == VAR_6)
   {
    VAR_17 = FUNC_1(VAR_9, VAR_10,
              VAR_19);
    VAR_20 = 1;
   }
  }
  else if (FUNC_15(VAR_15, "none", VAR_7) == 0)
  {
   VAR_17 = FUNC_5();

   VAR_20 = 1;
  }
  else
  {
   text *VAR_21 = FUNC_8(VAR_15);
   Oid VAR_22 = FUNC_6(VAR_21, 0);

   FUNC_4(VAR_11, VAR_14,
            VAR_19, VAR_22);

   VAR_17 = FUNC_7(VAR_22);
  }







  if (VAR_20)
  {

   FUNC_13(VAR_18, VAR_8);
  }
  else
  {

   FUNC_13(VAR_18, VAR_5);
  }
 }

 return VAR_17;
}
