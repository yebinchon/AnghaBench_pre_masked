
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int get ;
typedef int buf ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_11__ {int member_2; scalar_t__ ulValueLen; int * member_1; int member_0; } ;
struct TYPE_10__ {int SessionCreated; int LoginFlag; void* Error; int SessionId; TYPE_1__* Api; } ;
struct TYPE_9__ {scalar_t__ Type; int Object; scalar_t__ Private; } ;
struct TYPE_8__ {scalar_t__ (* C_GetAttributeValue ) (int ,int ,TYPE_4__*,int) ;} ;
typedef TYPE_2__ SEC_OBJ ;
typedef TYPE_3__ SECURE ;
typedef TYPE_4__ CK_ATTRIBUTE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*,int *,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_4__*,int) ;

int FUNC_2(SECURE *VAR_9, SEC_OBJ *VAR_10, void *VAR_11, UINT VAR_12)
{
 UCHAR VAR_13[VAR_2];
 UINT VAR_14;
 CK_ATTRIBUTE VAR_15[] =
 {
  {VAR_0, VAR_13, sizeof(VAR_13)},
 };

 if (VAR_9 == ((void*)0))
 {
  return 0;
 }
 if (VAR_10 == ((void*)0) || VAR_11 == ((void*)0) || VAR_12 == 0)
 {
  VAR_9->Error = VAR_4;
  return 0;
 }
 if (VAR_10->Type != VAR_3)
 {
  VAR_9->Error = VAR_4;
  return 0;
 }
 if (VAR_9->SessionCreated == 0)
 {
  VAR_9->Error = VAR_8;
  return 0;
 }
 if (VAR_9->LoginFlag == 0 && VAR_10->Private)
 {
  VAR_9->Error = VAR_7;
  return 0;
 }


 if (VAR_9->Api->C_GetAttributeValue(
  VAR_9->SessionId, VAR_10->Object, VAR_15, sizeof(VAR_15) / sizeof(VAR_15[0])) != VAR_1)
 {
  VAR_9->Error = VAR_6;
  return 0;
 }


 VAR_14 = VAR_15[0].ulValueLen;
 if (VAR_14 > VAR_2 || VAR_14 > VAR_12)
 {

  VAR_9->Error = VAR_5;
  return 0;
 }


 FUNC_0(VAR_11, VAR_13, VAR_14);

 return VAR_14;
}
