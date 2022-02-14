
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int priv ;
typedef int objects ;
typedef int obj_class ;
typedef int label ;
typedef int get ;
typedef int dummy ;
typedef int b_true ;
typedef int a ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {int SessionCreated; int * EnumCache; int SessionId; TYPE_1__* Api; void* Error; } ;
struct TYPE_8__ {int Private; int Name; scalar_t__ Object; scalar_t__ Type; } ;
struct TYPE_7__ {scalar_t__ (* C_FindObjectsInit ) (int ,char*,int) ;scalar_t__ (* C_FindObjects ) (int ,scalar_t__*,int,scalar_t__*) ;scalar_t__ (* C_GetAttributeValue ) (int ,scalar_t__,char*,int) ;int (* C_FindObjectsFinal ) (int ) ;} ;
typedef TYPE_2__ SEC_OBJ ;
typedef TYPE_3__ SECURE ;
typedef int LIST ;
typedef int CK_BBOOL ;
typedef char CK_ATTRIBUTE ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 scalar_t__ VAR_4 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_4 (int *) ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (char*,char) ;
 int FUNC_6 (char*,int) ;
 TYPE_2__* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,char*,int) ;
 scalar_t__ FUNC_9 (int ,scalar_t__*,int,scalar_t__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,scalar_t__,char*,int) ;

LIST *FUNC_13(SECURE *VAR_14)
{
 CK_BBOOL VAR_15 = 1, VAR_16 = 0;
 UINT VAR_17[VAR_6];
 UINT VAR_18;
 UINT VAR_19;
 LIST *VAR_20;
 CK_ATTRIBUTE VAR_21[1];
 CK_ATTRIBUTE VAR_22[] =
 {
  {VAR_3, &VAR_15, sizeof(VAR_15)},
 };
 UINT VAR_23 = VAR_6;

 if (VAR_14 == ((void*)0))
 {
  return ((void*)0);
 }
 if (VAR_14->SessionCreated == 0)
 {
  VAR_14->Error = VAR_10;
  return ((void*)0);
 }

 FUNC_6(VAR_21, sizeof(VAR_21));


 if (VAR_14->EnumCache != ((void*)0))
 {
  return FUNC_1(VAR_14->EnumCache);
 }





  VAR_19 = VAR_14->Api->C_FindObjectsInit(VAR_14->SessionId, VAR_22, sizeof(VAR_22) / sizeof(VAR_22[0]));







 if (VAR_19 != VAR_4)
 {
  VAR_14->Error = VAR_9;
  return ((void*)0);
 }
 if (VAR_14->Api->C_FindObjects(VAR_14->SessionId, VAR_17, sizeof(VAR_17) / sizeof(VAR_17[0]), &VAR_23) != VAR_4)
 {
  VAR_14->Api->C_FindObjectsFinal(VAR_14->SessionId);
  VAR_14->Error = VAR_9;
  return ((void*)0);
 }
 VAR_14->Api->C_FindObjectsFinal(VAR_14->SessionId);

 VAR_20 = FUNC_4(((void*)0));

 for (VAR_18 = 0;VAR_18 < VAR_23;VAR_18++)
 {
  char VAR_24[VAR_7];
  UINT VAR_25 = 0;
  bool VAR_26 = 0;
  CK_ATTRIBUTE VAR_27[] =
  {
   {VAR_1, VAR_24, sizeof(VAR_24) - 1},
   {VAR_0, &VAR_25, sizeof(VAR_25)},
   {VAR_2, &VAR_26, sizeof(VAR_26)},
  };

  FUNC_6(VAR_24, sizeof(VAR_24));

  if (VAR_14->Api->C_GetAttributeValue(VAR_14->SessionId, VAR_17[VAR_18],
   VAR_27, sizeof(VAR_27) / sizeof(VAR_27[0])) == VAR_4)
  {
   UINT VAR_28 = VAR_5;

   switch (VAR_25)
   {
   case 130:

    VAR_28 = VAR_8;
    break;

   case 131:

    VAR_28 = VAR_13;
    break;

   case 128:

    VAR_28 = VAR_12;
    break;

   case 129:

    VAR_28 = VAR_11;
    break;
   }

   if (VAR_28 != VAR_5)
   {
    SEC_OBJ *VAR_29 = FUNC_7(sizeof(SEC_OBJ));

    VAR_29->Type = VAR_28;
    VAR_29->Object = VAR_17[VAR_18];
    VAR_29->Private = (VAR_26 == 0) ? 0 : 1;
    FUNC_3(VAR_24, '?');
    FUNC_5(VAR_24, '?');
    VAR_29->Name = FUNC_2(VAR_24);

    FUNC_0(VAR_20, VAR_29);
   }
  }
 }


 VAR_14->EnumCache = FUNC_1(VAR_20);

 return VAR_20;
}
