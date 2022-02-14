
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_17__ ;


typedef int wchar_t ;
typedef int tmp ;
struct TYPE_27__ {int serial; TYPE_1__* subject_name; } ;
typedef TYPE_3__ X ;
struct TYPE_28__ {scalar_t__ AuthType; int lock; scalar_t__ AuthData; } ;
typedef TYPE_4__ USER ;
struct TYPE_31__ {TYPE_17__* Serial; int * CommonName; } ;
struct TYPE_30__ {int UserX; } ;
struct TYPE_29__ {TYPE_2__* HubDb; } ;
struct TYPE_26__ {int RootCertList; } ;
struct TYPE_25__ {int CommonName; } ;
struct TYPE_24__ {int size; } ;
typedef TYPE_5__ HUB ;
typedef TYPE_6__ AUTHUSERCERT ;
typedef TYPE_7__ AUTHROOTCERT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* FUNC_0 (TYPE_5__*,char*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int ,TYPE_3__*) ;
 int FUNC_5 (int ,TYPE_17__*) ;
 int VAR_2 ;
 int FUNC_6 (int *,int,TYPE_3__*) ;
 scalar_t__ FUNC_7 (int ) ;
 TYPE_3__* FUNC_8 (int ,TYPE_3__*) ;
 int FUNC_9 (TYPE_5__*,char*,char*,int *) ;
 int FUNC_10 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_3 ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;

bool FUNC_18(HUB *VAR_4, char *VAR_5, X *VAR_6)
{
 bool VAR_7 = 0;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_7(VAR_2) != 0)
 {
  return 0;
 }


 if (FUNC_3(VAR_6) == 0)
 {
  return 0;
 }


 if (FUNC_10(VAR_4, VAR_6) == 0)
 {

  wchar_t VAR_8[VAR_3 * 2];


  FUNC_6(VAR_8, sizeof(VAR_8), VAR_6);

  FUNC_9(VAR_4, "LH_AUTH_NG_CERT", VAR_5, VAR_8);
  return 0;
 }

 FUNC_1(VAR_4);
 {
  USER *VAR_9;
  VAR_9 = FUNC_0(VAR_4, VAR_5);
  if (VAR_9)
  {
   FUNC_11(VAR_9->lock);
   {
    if (VAR_9->AuthType == VAR_1)
    {

     AUTHUSERCERT *VAR_10 = (AUTHUSERCERT *)VAR_9->AuthData;
     if (FUNC_4(VAR_10->UserX, VAR_6))
     {
      VAR_7 = 1;
     }
    }
    else if (VAR_9->AuthType == VAR_0)
    {

     AUTHROOTCERT *VAR_11 = (AUTHROOTCERT *)VAR_9->AuthData;
     if (VAR_4->HubDb != ((void*)0))
     {
      FUNC_12(VAR_4->HubDb->RootCertList);
      {
       X *VAR_12;
       VAR_12 = FUNC_8(VAR_4->HubDb->RootCertList, VAR_6);
       if (VAR_12 != ((void*)0))
       {
        VAR_7 = 1;
        if (VAR_11->CommonName != ((void*)0) && FUNC_14(VAR_11->CommonName) == 0)
        {

         if (FUNC_15(VAR_6->subject_name->CommonName, VAR_11->CommonName) != 0)
         {
          VAR_7 = 0;
         }
        }
        if (VAR_11->Serial != ((void*)0) && VAR_11->Serial->size >= 1)
        {

         if (FUNC_5(VAR_6->serial, VAR_11->Serial) == 0)
         {
          VAR_7 = 0;
         }
        }
       }
      }
      FUNC_17(VAR_4->HubDb->RootCertList);
     }
    }
   }
   FUNC_16(VAR_9->lock);
   FUNC_13(VAR_9);
  }
 }
 FUNC_2(VAR_4);

 if (VAR_7)
 {
  wchar_t VAR_13[VAR_3 * 2];


  FUNC_6(VAR_13, sizeof(VAR_13), VAR_6);

  FUNC_9(VAR_4, "LH_AUTH_OK_CERT", VAR_5, VAR_13);
 }

 return VAR_7;
}
