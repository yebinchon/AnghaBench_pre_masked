
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int url2 ;
struct TYPE_10__ {char* SniString; } ;
typedef TYPE_1__ URL_DATA ;
typedef scalar_t__ UINT ;
struct TYPE_12__ {int Size; int * Buf; } ;
struct TYPE_11__ {int InternetSetting; } ;
typedef TYPE_2__ DDNS_CLIENT ;
typedef TYPE_3__ BUF ;


 int FUNC_0 (char*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_2 (char*,int,char*,char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (TYPE_1__*,int *,int ,int ,scalar_t__*,int,int *,int *,int *,int *,int,int *,int ,int *,int *) ;
 int FUNC_6 () ;
 int VAR_18 ;
 int FUNC_7 (TYPE_1__*,char*,int,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,int,char*,char*,char*) ;
 int VAR_19 ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,scalar_t__,char*) ;
 TYPE_3__* FUNC_12 (int ) ;
 char* FUNC_13 (int) ;

UINT FUNC_14(DDNS_CLIENT *VAR_20, bool VAR_21, char *VAR_22, UINT VAR_23, bool VAR_24, char *VAR_25)
{
 char *VAR_26;
 char VAR_27[VAR_18];
 UINT VAR_28 = VAR_12;
 URL_DATA VAR_29;
 BUF *VAR_30;
 BUF *VAR_31 = ((void*)0);

 if (VAR_22 == ((void*)0) || VAR_20 == ((void*)0))
 {
  return VAR_12;
 }

 if (VAR_21 == 0)
 {
  VAR_26 = VAR_8;

  if (FUNC_6())
  {
   VAR_26 = VAR_7;
  }
 }
 else
 {
  VAR_26 = VAR_10;

  if (FUNC_6())
  {
   VAR_26 = VAR_9;
  }

  if (VAR_25)
  {
   VAR_26 = VAR_25;
  }
 }

 FUNC_2(VAR_27, sizeof(VAR_27), "%s?v=%I64u", VAR_26, FUNC_8());

 if (VAR_24)
 {
  FUNC_9(VAR_27, sizeof(VAR_27), VAR_27, "http://", "https://");
 }


 if (FUNC_7(&VAR_29, VAR_27, 0, ((void*)0)) == 0)
 {
  return VAR_12;
 }

 VAR_31 = FUNC_12(VAR_0);

 FUNC_11(VAR_29.SniString, sizeof(VAR_29.SniString), VAR_6);

 VAR_30 = FUNC_5(&VAR_29, (VAR_21 ? ((void*)0) : &VAR_20->InternetSetting), VAR_2, VAR_1, &VAR_28, 0, ((void*)0), ((void*)0),
  ((void*)0), ((VAR_31 != ((void*)0) && (VAR_31->Size % VAR_19) == 0) ? VAR_31->Buf : ((void*)0)),
  (VAR_31 != ((void*)0) ? VAR_31->Size / VAR_19 : 0), ((void*)0), 0, ((void*)0), ((void*)0));

 FUNC_4(VAR_31);

 if (VAR_30 != ((void*)0))
 {
  char *VAR_32 = FUNC_13(VAR_30->Size + 1);
  FUNC_0(VAR_32, VAR_30->Buf, VAR_30->Size);

  if (FUNC_10(VAR_32, "IP=") == 0)
  {
   VAR_28 = VAR_14;
  }
  else
  {
   FUNC_11(VAR_22, VAR_23, VAR_32 + 3);
   VAR_28 = VAR_13;
  }

  FUNC_3(VAR_32);
  FUNC_4(VAR_30);
 }

 if (FUNC_6() == 0)
 {
  if (VAR_28 == VAR_11)
  {
   if (VAR_21 && VAR_25 == ((void*)0) && VAR_24 == 0)
   {
    UINT VAR_33 = FUNC_1();

    if (VAR_33 & VAR_15 && VAR_28 != VAR_13)
    {
     VAR_28 = FUNC_14(VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_3);
    }

    if (VAR_33 & VAR_16 && VAR_28 != VAR_13)
    {
     VAR_28 = FUNC_14(VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_4);
    }

    if (VAR_33 & VAR_17 && VAR_28 != VAR_13)
    {
     VAR_28 = FUNC_14(VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_5);
    }
   }
  }
 }

 return VAR_28;
}
