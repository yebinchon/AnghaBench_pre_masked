
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* subject_name; int * serial; } ;
typedef TYPE_1__ X ;
typedef int UCHAR ;
struct TYPE_9__ {TYPE_2__* Name; int DigestSHA1; int DigestMD5; int * Serial; } ;
struct TYPE_8__ {int * Local; int * State; int * Country; int * Unit; int * Organization; int * CommonName; } ;
typedef TYPE_2__ NAME ;
typedef TYPE_3__ CRL ;


 scalar_t__ FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;

bool FUNC_6(X *VAR_2, CRL *VAR_3)
{
 bool VAR_4 = 1;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (VAR_3->Serial != ((void*)0))
 {

  if (VAR_2->serial == ((void*)0) || FUNC_1(VAR_2->serial, VAR_3->Serial) == 0)
  {

   VAR_4 = 0;
  }
 }

 if (FUNC_3(VAR_3->DigestMD5, sizeof(VAR_3->DigestMD5)) == 0)
 {
  UCHAR VAR_5[VAR_0];

  FUNC_2(VAR_2, VAR_5, 0);

  if (FUNC_0(VAR_5, VAR_3->DigestMD5, VAR_0) != 0)
  {
   VAR_4 = 0;
  }
 }

 if (FUNC_3(VAR_3->DigestSHA1, sizeof(VAR_3->DigestSHA1)) == 0)
 {
  UCHAR VAR_6[VAR_1];

  FUNC_2(VAR_2, VAR_6, 1);

  if (FUNC_0(VAR_6, VAR_3->DigestSHA1, VAR_1) != 0)
  {
   VAR_4 = 0;
  }
 }

 if (VAR_3->Name != ((void*)0))
 {

  NAME *VAR_7, *VAR_8;
  VAR_7 = VAR_2->subject_name;
  VAR_8 = VAR_3->Name;

  if (VAR_8->CommonName != ((void*)0) && (FUNC_4(VAR_8->CommonName) == 0))
  {
   if (VAR_7->CommonName == ((void*)0) || FUNC_5(VAR_7->CommonName, VAR_8->CommonName) != 0)
   {

    VAR_4 = 0;
   }
  }

  if (VAR_8->Organization != ((void*)0) && (FUNC_4(VAR_8->Organization) == 0))
  {
   if (VAR_7->Organization == ((void*)0) || FUNC_5(VAR_7->Organization, VAR_8->Organization) != 0)
   {

    VAR_4 = 0;
   }
  }

  if (VAR_8->Unit != ((void*)0) && (FUNC_4(VAR_8->Unit) == 0))
  {
   if (VAR_7->Unit == ((void*)0) || FUNC_5(VAR_7->Unit, VAR_8->Unit) != 0)
   {

    VAR_4 = 0;
   }
  }

  if (VAR_8->Country != ((void*)0) && (FUNC_4(VAR_8->Country) == 0))
  {
   if (VAR_7->Country == ((void*)0) || FUNC_5(VAR_7->Country, VAR_8->Country) != 0)
   {

    VAR_4 = 0;
   }
  }

  if (VAR_8->State != ((void*)0) && (FUNC_4(VAR_8->State) == 0))
  {
   if (VAR_7->State == ((void*)0) || FUNC_5(VAR_7->State, VAR_8->State) != 0)
   {

    VAR_4 = 0;
   }
  }

  if (VAR_8->Local != ((void*)0) && (FUNC_4(VAR_8->Local) == 0))
  {
   if (VAR_7->Local == ((void*)0) || FUNC_5(VAR_7->Local, VAR_8->Local) != 0)
   {

    VAR_4 = 0;
   }
  }
 }

 return VAR_4;
}
