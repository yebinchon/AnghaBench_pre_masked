
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int realname ;
typedef int note ;
typedef int md4_password ;
typedef int hashed_password ;
typedef int groupname ;
typedef int common_name ;
typedef int X_SERIAL ;
typedef int X ;
typedef int USERGROUP ;
struct TYPE_24__ {int NumLogin; int lock; void* LastLoginTime; void* ExpireTime; void* UpdatedTime; void* CreatedTime; } ;
typedef TYPE_1__ USER ;
typedef void* UINT64 ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_26__ {int Size; int Buf; } ;
struct TYPE_25__ {char* Name; } ;
typedef int TRAFFIC ;
typedef int POLICY ;
typedef int HUB ;
typedef TYPE_2__ FOLDER ;
typedef TYPE_3__ BUF ;







 int FUNC_0 (int *,TYPE_1__*) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_3__*,int) ;
 TYPE_3__* FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*,char*,int *,int) ;
 TYPE_2__* FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (TYPE_2__*,char*) ;
 void* FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (TYPE_2__*,char*,char*,int) ;
 int FUNC_11 (TYPE_2__*,char*,int *,int) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_1__*,int *) ;
 int FUNC_16 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_17 (int *) ;
 void* FUNC_18 (int *,int *) ;
 void* FUNC_19 (int *) ;
 void* FUNC_20 (int *,int *) ;
 TYPE_1__* FUNC_21 (char*,int *,int *,int,void*) ;
 void* FUNC_22 (int *) ;
 int * FUNC_23 (int ,int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_26 (TYPE_1__*,int *) ;
 int FUNC_27 (TYPE_1__*,int *) ;
 int FUNC_28 (int *,TYPE_2__*) ;
 int FUNC_29 (TYPE_2__*,char*,int *) ;
 scalar_t__ FUNC_30 (char*) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int *,int) ;

void FUNC_33(HUB *VAR_3, FOLDER *VAR_4)
{
 char *VAR_5;
 wchar_t VAR_6[VAR_0];
 wchar_t VAR_7[VAR_0];
 char VAR_8[VAR_0];
 FOLDER *VAR_9;
 UINT64 VAR_10;
 UINT64 VAR_11;
 UINT64 VAR_12;
 UINT64 VAR_13;
 UINT VAR_14;
 POLICY VAR_15;
 TRAFFIC VAR_16;
 BUF *VAR_17;
 UINT VAR_18;
 void *VAR_19;
 X_SERIAL *VAR_20 = ((void*)0);
 wchar_t VAR_21[VAR_0];
 UCHAR VAR_22[VAR_2];
 UCHAR VAR_23[VAR_1];
 wchar_t VAR_24[VAR_0];
 USER *VAR_25;
 USERGROUP *VAR_26;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 VAR_5 = VAR_4->Name;
 FUNC_11(VAR_4, "RealName", VAR_6, sizeof(VAR_6));
 FUNC_11(VAR_4, "Note", VAR_7, sizeof(VAR_7));
 FUNC_10(VAR_4, "GroupName", VAR_8, sizeof(VAR_8));

 VAR_10 = FUNC_9(VAR_4, "CreatedTime");
 VAR_11 = FUNC_9(VAR_4, "UpdatedTime");
 VAR_12 = FUNC_9(VAR_4, "ExpireTime");
 VAR_13 = FUNC_9(VAR_4, "LastLoginTime");
 VAR_14 = FUNC_8(VAR_4, "NumLogin");
 VAR_9 = FUNC_7(VAR_4, "Policy");
 if (VAR_9 != ((void*)0))
 {
  FUNC_28(&VAR_15, VAR_9);
 }
 FUNC_29(VAR_4, "Traffic", &VAR_16);

 VAR_18 = FUNC_8(VAR_4, "AuthType");
 VAR_19 = ((void*)0);

 switch (VAR_18)
 {
 case 131:
  FUNC_32(VAR_22, sizeof(VAR_22));
  FUNC_32(VAR_23, sizeof(VAR_23));
  FUNC_6(VAR_4, "AuthPassword", VAR_22, sizeof(VAR_22));
  FUNC_6(VAR_4, "AuthNtLmSecureHash", VAR_23, sizeof(VAR_23));
  VAR_19 = FUNC_18(VAR_22, VAR_23);
  break;

 case 132:
  if (FUNC_11(VAR_4, "AuthNtUserName", VAR_24, sizeof(VAR_24)))
  {
   VAR_19 = FUNC_17(VAR_24);
  }
  else
  {
   VAR_19 = FUNC_17(((void*)0));
  }
  break;

 case 130:
  if (FUNC_11(VAR_4, "AuthRadiusUsername", VAR_24, sizeof(VAR_24)))
  {
   VAR_19 = FUNC_19(VAR_24);
  }
  else
  {
   VAR_19 = FUNC_19(((void*)0));
  }
  break;

 case 128:
  VAR_17 = FUNC_5(VAR_4, "AuthUserCert");
  if (VAR_17 != ((void*)0))
  {
   X *VAR_27 = FUNC_4(VAR_17, 0);
   if (VAR_27 != ((void*)0))
   {
    VAR_19 = FUNC_22(VAR_27);
    FUNC_13(VAR_27);
   }
   FUNC_12(VAR_17);
  }
  break;

 case 129:
  VAR_17 = FUNC_5(VAR_4, "AuthSerial");
  if (VAR_17 != ((void*)0))
  {
   VAR_20 = FUNC_23(VAR_17->Buf, VAR_17->Size);
   FUNC_12(VAR_17);
  }
  FUNC_11(VAR_4, "AuthCommonName", VAR_21, sizeof(VAR_21));
  VAR_19 = FUNC_20(VAR_20, VAR_21);
  break;
 }


 FUNC_2(VAR_3);
 {
  if (FUNC_30(VAR_8) > 0)
  {
   VAR_26 = FUNC_1(VAR_3, VAR_8);
  }
  else
  {
   VAR_26 = ((void*)0);
  }

  VAR_25 = FUNC_21(VAR_5, VAR_6, VAR_7, VAR_18, VAR_19);
  if (VAR_25 != ((void*)0))
  {
   if (VAR_26 != ((void*)0))
   {
    FUNC_15(VAR_25, VAR_26);
   }

   FUNC_27(VAR_25, &VAR_16);

   if (VAR_9 != ((void*)0))
   {
    FUNC_26(VAR_25, &VAR_15);
   }

   FUNC_16(VAR_25->lock);
   {
    VAR_25->CreatedTime = VAR_10;
    VAR_25->UpdatedTime = VAR_11;
    VAR_25->ExpireTime = VAR_12;
    VAR_25->LastLoginTime = VAR_13;
    VAR_25->NumLogin = VAR_14;
   }
   FUNC_31(VAR_25->lock);

   FUNC_0(VAR_3, VAR_25);

   FUNC_25(VAR_25);
  }

  if (VAR_26 != ((void*)0))
  {
   FUNC_24(VAR_26);
  }
 }
 FUNC_3(VAR_3);

 if (VAR_20 != ((void*)0))
 {
  FUNC_14(VAR_20);
 }
}
