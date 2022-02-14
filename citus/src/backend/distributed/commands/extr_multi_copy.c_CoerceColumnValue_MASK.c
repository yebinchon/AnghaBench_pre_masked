
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int coercionType; int typioparam; int inputFunction; int outputFunction; int coerceFunction; } ;
typedef int Oid ;
typedef int FmgrInfo ;
typedef int Datum ;
typedef TYPE_1__ CopyCoercionData ;





 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;

Datum
FUNC_5(Datum VAR_1, CopyCoercionData *VAR_2)
{
 switch (VAR_2->coercionType)
 {
  case 0:
  {
   return VAR_1;
  }

  case 128:
  {
   return VAR_1;
  }

  case 129:
  {
   FmgrInfo *VAR_3 = &(VAR_2->coerceFunction);
   Datum VAR_4 = FUNC_0(VAR_3, VAR_1);
   return VAR_4;
  }

  case 130:
  {
   FmgrInfo *VAR_5 = &(VAR_2->outputFunction);
   Datum VAR_6 = FUNC_0(VAR_5, VAR_1);

   FmgrInfo *VAR_7 = &(VAR_2->inputFunction);
   Oid VAR_8 = VAR_2->typioparam;
   Datum VAR_9 = FUNC_1(VAR_7, VAR_6, VAR_8,
             FUNC_2(-1));

   return VAR_9;
  }

  default:
  {

   FUNC_3(VAR_0, (FUNC_4("unsupported coercion type")));
  }
 }
}
