
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int coercionType; int coerceFunction; int inputFunction; int typioparam; int outputFunction; } ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ CopyCoercionData ;
typedef int CoercionPathType ;


 int FUNC_0 (int) ;
 int VAR_0 ;





 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ,scalar_t__*) ;
 int FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (scalar_t__,scalar_t__*,int *) ;
 int FUNC_6 (scalar_t__,scalar_t__*,int*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

void
FUNC_8(Oid VAR_3, Oid VAR_4, CopyCoercionData *VAR_5)
{
 Oid VAR_6 = VAR_2;
 CoercionPathType VAR_7 = 128;

 if (VAR_4 == VAR_3)
 {
  VAR_5->coercionType = 128;
  return;
 }

 VAR_7 = FUNC_3(VAR_4, VAR_3,
           VAR_0,
           &VAR_6);

 switch (VAR_7)
 {
  case 129:
  {
   FUNC_1(VAR_1, (FUNC_2("cannot cast %d to %d", VAR_3, VAR_4)));
   return;
  }

  case 132:
  {
   Oid VAR_8 = FUNC_7(VAR_3);
   Oid VAR_9 = FUNC_7(VAR_4);
   CoercionPathType VAR_10 = 129;

   if (VAR_8 != VAR_2 && VAR_9 != VAR_2)
   {
    VAR_10 = FUNC_3(VAR_8, VAR_9,
               VAR_0,
               &VAR_6);
   }

   if (VAR_10 != 131)
   {
    FUNC_1(VAR_1, (FUNC_2("can not run query which uses an implicit coercion"
            " between array types")));
   }
  }



  case 131:
  {
   VAR_5->coercionType = 131;

   {
    bool VAR_11 = 0;
    Oid VAR_12 = VAR_2;
    FUNC_6(VAR_3, &VAR_12, &VAR_11);
    FUNC_4(VAR_12, &(VAR_5->outputFunction));
   }

   {
    Oid VAR_13 = VAR_2;
    FUNC_5(VAR_4, &VAR_13, &(VAR_5->typioparam));
    FUNC_4(VAR_13, &(VAR_5->inputFunction));
   }

   return;
  }

  case 130:
  {
   VAR_5->coercionType = 130;
   FUNC_4(VAR_6, &(VAR_5->coerceFunction));
   return;
  }

  case 128:
  {
   VAR_5->coercionType = 128;
   return;
  }

  default:
   FUNC_0(0);
 }
}
