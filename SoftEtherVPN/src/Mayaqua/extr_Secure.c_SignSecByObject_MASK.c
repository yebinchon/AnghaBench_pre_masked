
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int hash ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_11__ {int member_2; int * member_1; int member_0; } ;
struct TYPE_10__ {int SessionCreated; int LoginFlag; void* Error; int SessionId; TYPE_1__* Api; } ;
struct TYPE_9__ {scalar_t__ Type; int Object; scalar_t__ Private; } ;
struct TYPE_8__ {scalar_t__ (* C_SignInit ) (int ,TYPE_4__*,int ) ;scalar_t__ (* C_Sign ) (int ,int *,int,void*,scalar_t__*) ;} ;
typedef TYPE_2__ SEC_OBJ ;
typedef TYPE_3__ SECURE ;
typedef TYPE_4__ CK_MECHANISM ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (int *,int,void*,scalar_t__) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ,TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (int ,int *,int,void*,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ,int *,int,void*,scalar_t__*) ;

bool FUNC_5(SECURE *VAR_8, SEC_OBJ *VAR_9, void *VAR_10, void *VAR_11, UINT VAR_12)
{
 CK_MECHANISM VAR_13 = {VAR_0, ((void*)0), 0};
 UINT VAR_14;
 UCHAR VAR_15[VAR_7];

 if (VAR_8 == ((void*)0))
 {
  return 0;
 }
 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0) || VAR_11 == ((void*)0))
 {
  VAR_8->Error = VAR_2;
  return 0;
 }
 if (VAR_8->SessionCreated == 0)
 {
  VAR_8->Error = VAR_5;
  return 0;
 }
 if (VAR_8->LoginFlag == 0 && VAR_9->Private)
 {
  VAR_8->Error = VAR_4;
  return 0;
 }
 if (VAR_9->Type != VAR_6)
 {
  VAR_8->Error = VAR_2;
  return 0;
 }


 FUNC_1(VAR_15, sizeof(VAR_15), VAR_11, VAR_12);


 VAR_14 = VAR_8->Api->C_SignInit(VAR_8->SessionId, &VAR_13, VAR_9->Object);
 if (VAR_14 != VAR_1)
 {

  VAR_8->Error = VAR_3;
  FUNC_0("C_SignInit Error: 0x%x\n", VAR_14);
  return 0;
 }


 VAR_12 = 128;

 VAR_14 = VAR_8->Api->C_Sign(VAR_8->SessionId, VAR_15, sizeof(VAR_15), VAR_10, &VAR_12);
 if (VAR_14 != VAR_1 && 128 < VAR_12 && VAR_12 <= 4096/8)
 {

  VAR_14 = VAR_8->Api->C_Sign(VAR_8->SessionId, VAR_15, sizeof(VAR_15), VAR_10, &VAR_12);
 }
 if (VAR_14 != VAR_1 || VAR_12 == 0 || VAR_12 > 4096/8)
 {

  VAR_8->Error = VAR_3;
  FUNC_0("C_Sign Error: 0x%x  size:%d\n", VAR_14, VAR_12);
  return 0;
 }

 return 1;
}
