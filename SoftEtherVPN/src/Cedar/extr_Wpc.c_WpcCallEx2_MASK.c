
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int X ;
struct TYPE_13__ {int * Pack; int Cert; } ;
typedef TYPE_1__ WPC_PACKET ;
struct TYPE_14__ {int SniString; int AdditionalHeaderValue; int AdditionalHeaderName; } ;
typedef TYPE_2__ URL_DATA ;
typedef int UINT ;
struct TYPE_15__ {int Buf; int Size; } ;
typedef int PACK ;
typedef int K ;
typedef int INTERNET_SETTING ;
typedef TYPE_3__ BUF ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int *,int ,int ,int *,int,int ,int *,int *,void*,int ,int*,int ,int *,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,char*) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,char*,int,int *) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;
 int FUNC_8 (int ,int,char*) ;
 TYPE_3__* FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,int ) ;

PACK *FUNC_12(char *VAR_2, INTERNET_SETTING *VAR_3, UINT VAR_4, UINT VAR_5,
    char *VAR_6, PACK *VAR_7, X *VAR_8, K *VAR_9, void *VAR_10, UINT VAR_11, bool *VAR_12, UINT VAR_13,
    char *VAR_14, char *VAR_15, char *VAR_16)
{
 URL_DATA VAR_17;
 BUF *VAR_18, *VAR_19;
 UINT VAR_20;
 WPC_PACKET VAR_21;

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
 {
  return FUNC_5(VAR_0);
 }

 if (FUNC_6(&VAR_17, VAR_2, 1, ((void*)0)) == 0)
 {
  return FUNC_5(VAR_0);
 }

 FUNC_4(VAR_7, "function", VAR_6);

 VAR_18 = FUNC_9(VAR_7, VAR_8, VAR_9);
 if (VAR_18 == ((void*)0))
 {
  return FUNC_5(VAR_0);
 }

 FUNC_7(VAR_18, VAR_18->Size, 0);
 FUNC_11(VAR_18, 0);
 FUNC_7(VAR_18, 0, 0);

 if (FUNC_3(VAR_14) == 0 && FUNC_3(VAR_15) == 0)
 {
  FUNC_8(VAR_17.AdditionalHeaderName, sizeof(VAR_17.AdditionalHeaderName), VAR_14);
  FUNC_8(VAR_17.AdditionalHeaderValue, sizeof(VAR_17.AdditionalHeaderValue), VAR_15);
 }

 if (VAR_16 != ((void*)0) && FUNC_3(VAR_16) == 0)
 {
  FUNC_8(VAR_17.SniString, sizeof(VAR_17.SniString), VAR_16);
 }

 VAR_19 = FUNC_2(&VAR_17, VAR_3, VAR_4, VAR_5, &VAR_20,
  0, VAR_18->Buf, ((void*)0), ((void*)0), VAR_10, VAR_11, VAR_12, VAR_13,
  ((void*)0), ((void*)0));

 FUNC_0(VAR_18);

 if (VAR_19 == ((void*)0))
 {
  return FUNC_5(VAR_20);
 }

 if (FUNC_10(&VAR_21, VAR_19) == 0)
 {
  FUNC_0(VAR_19);
  return FUNC_5(VAR_1);
 }

 FUNC_0(VAR_19);

 FUNC_1(VAR_21.Cert);

 return VAR_21.Pack;
}
