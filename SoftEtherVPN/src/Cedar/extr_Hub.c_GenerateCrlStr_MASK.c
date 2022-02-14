
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char wchar_t ;
typedef int uni ;
typedef int tmp ;
typedef int str ;
typedef int name ;
struct TYPE_5__ {int DigestSHA1; int DigestMD5; TYPE_1__* Serial; int * Name; } ;
struct TYPE_4__ {int size; int data; } ;
typedef TYPE_2__ CRL ;


 int FUNC_0 (char*,int,int ,int ) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,int,int *) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,int,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int,char*) ;
 int FUNC_7 (char*,int,char*) ;
 int FUNC_8 (char*) ;

wchar_t *FUNC_9(CRL *VAR_3)
{
 wchar_t VAR_4[2048];

 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_7(VAR_4, sizeof(VAR_4), L"");

 if (VAR_3->Name != ((void*)0))
 {

  wchar_t VAR_5[VAR_0];

  FUNC_6(VAR_4, sizeof(VAR_4), L"Subject=\"");

  FUNC_2(VAR_5, sizeof(VAR_5), VAR_3->Name);
  FUNC_6(VAR_4, sizeof(VAR_4), VAR_5);
  FUNC_6(VAR_4, sizeof(VAR_4), L"\", ");
 }

 if (VAR_3->Serial != ((void*)0))
 {

  char VAR_6[128];
  wchar_t VAR_7[128];

  FUNC_0(VAR_6, sizeof(VAR_6), VAR_3->Serial->data, VAR_3->Serial->size);
  FUNC_4(VAR_7, sizeof(VAR_7), VAR_6);
  FUNC_6(VAR_4, sizeof(VAR_4), L"Serial=\"");
  FUNC_6(VAR_4, sizeof(VAR_4), VAR_7);
  FUNC_6(VAR_4, sizeof(VAR_4), L"\", ");
 }

 if (FUNC_3(VAR_3->DigestMD5, VAR_1) == 0)
 {

  char VAR_8[128];
  wchar_t VAR_9[128];

  FUNC_0(VAR_8, sizeof(VAR_8), VAR_3->DigestMD5, VAR_1);
  FUNC_4(VAR_9, sizeof(VAR_9), VAR_8);
  FUNC_6(VAR_4, sizeof(VAR_4), L"MD5=\"");
  FUNC_6(VAR_4, sizeof(VAR_4), VAR_9);
  FUNC_6(VAR_4, sizeof(VAR_4), L"\", ");
 }

 if (FUNC_3(VAR_3->DigestSHA1, VAR_2) == 0)
 {

  char VAR_10[128];
  wchar_t VAR_11[128];

  FUNC_0(VAR_10, sizeof(VAR_10), VAR_3->DigestSHA1, VAR_2);
  FUNC_4(VAR_11, sizeof(VAR_11), VAR_10);
  FUNC_6(VAR_4, sizeof(VAR_4), L"SHA1=\"");
  FUNC_6(VAR_4, sizeof(VAR_4), VAR_11);
  FUNC_6(VAR_4, sizeof(VAR_4), L"\", ");
 }

 if (FUNC_5(VAR_4, L", "))
 {
  VAR_4[FUNC_8(VAR_4) - 2] = 0;
 }

 return FUNC_1(VAR_4);
}
