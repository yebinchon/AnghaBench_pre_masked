
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tmp ;
typedef int name ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {TYPE_1__* Serial; int DigestSHA1; int DigestMD5; TYPE_2__* Name; } ;
struct TYPE_6__ {int Local; int State; int Country; int Unit; int Organization; int CommonName; } ;
struct TYPE_5__ {int size; int data; } ;
typedef TYPE_2__ NAME ;
typedef int LIST ;
typedef int FOLDER ;
typedef TYPE_3__ CRL ;


 int FUNC_0 (char*,int,int ,int ) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int *,char*,int ) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (char*,int,char*,scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 TYPE_3__* FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

void FUNC_11(FOLDER *VAR_3, LIST *VAR_4)
{

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 FUNC_8(VAR_4);
 {
  UINT VAR_5;
  for (VAR_5 = 0;VAR_5 < FUNC_7(VAR_4);VAR_5++)
  {
   char VAR_6[VAR_0];
   CRL *VAR_7 = FUNC_6(VAR_4, VAR_5);
   FOLDER *VAR_8;
   NAME *VAR_9;

   FUNC_4(VAR_6, sizeof(VAR_6), "Crl%u", VAR_5);

   VAR_8 = FUNC_3(VAR_3, VAR_6);
   VAR_9 = VAR_7->Name;

   if (FUNC_9(VAR_9->CommonName) == 0)
   {
    FUNC_2(VAR_8, "CommonName", VAR_9->CommonName);
   }

   if (FUNC_9(VAR_9->Organization) == 0)
   {
    FUNC_2(VAR_8, "Organization", VAR_9->Organization);
   }

   if (FUNC_9(VAR_9->Unit) == 0)
   {
    FUNC_2(VAR_8, "Unit", VAR_9->Unit);
   }

   if (FUNC_9(VAR_9->Country) == 0)
   {
    FUNC_2(VAR_8, "Country", VAR_9->Country);
   }

   if (FUNC_9(VAR_9->State) == 0)
   {
    FUNC_2(VAR_8, "State", VAR_9->State);
   }

   if (FUNC_9(VAR_9->Local) == 0)
   {
    FUNC_2(VAR_8, "Local", VAR_9->Local);
   }

   if (FUNC_5(VAR_7->DigestMD5, VAR_1) == 0)
   {
    char VAR_10[VAR_0];

    FUNC_0(VAR_10, sizeof(VAR_10), VAR_7->DigestMD5, VAR_1);
    FUNC_1(VAR_8, "DigestMD5", VAR_10);
   }

   if (FUNC_5(VAR_7->DigestSHA1, VAR_2) == 0)
   {
    char VAR_11[VAR_0];

    FUNC_0(VAR_11, sizeof(VAR_11), VAR_7->DigestSHA1, VAR_2);
    FUNC_1(VAR_8, "DigestSHA1", VAR_11);
   }

   if (VAR_7->Serial != ((void*)0))
   {
    char VAR_12[VAR_0];

    FUNC_0(VAR_12, sizeof(VAR_12), VAR_7->Serial->data, VAR_7->Serial->size);
    FUNC_1(VAR_8, "Serial", VAR_12);
   }
  }
 }
 FUNC_10(VAR_4);
}
