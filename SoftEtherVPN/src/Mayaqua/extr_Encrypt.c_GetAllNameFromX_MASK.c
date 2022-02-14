
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp3 ;
typedef int tmp2 ;
typedef int tmp1 ;
typedef int tmp ;
struct TYPE_6__ {TYPE_1__* serial; int subject_name; } ;
typedef TYPE_2__ X ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_5__ {int size; int * data; } ;


 int FUNC_0 (char*,int,int *,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int,char*,char*,...) ;
 int FUNC_4 (int *,int ,int *) ;

void FUNC_5(wchar_t *VAR_2, UINT VAR_3, X *VAR_4)
{
 UCHAR VAR_5[VAR_0], VAR_6[VAR_1];
 char VAR_7[VAR_0 * 3 + 8], VAR_8[VAR_1 * 3 + 8];
 wchar_t VAR_9[sizeof(VAR_7) + sizeof(VAR_8) + 64];

 if (VAR_2 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_2, VAR_3, VAR_4->subject_name);

 if (VAR_4->serial != ((void*)0) && VAR_4->serial->size >= 1)
 {
  char VAR_10[128];
  wchar_t VAR_11[128];

  FUNC_0(VAR_10, sizeof(VAR_10), VAR_4->serial->data, VAR_4->serial->size);
  FUNC_3(VAR_11, sizeof(VAR_11), L", SERIAL=\"%S\"", VAR_10);

  FUNC_4(VAR_2, VAR_3, VAR_11);
 }


 FUNC_2(VAR_4, VAR_5, 0);
 FUNC_2(VAR_4, VAR_6, 1);

 FUNC_0(VAR_7, sizeof(VAR_7), VAR_5, VAR_0);
 FUNC_0(VAR_8, sizeof(VAR_8), VAR_6, VAR_1);

 FUNC_3(VAR_9, sizeof(VAR_9), L" (Digest: MD5=\"%S\", SHA1=\"%S\")", VAR_7, VAR_8);
 FUNC_4(VAR_2, VAR_3, VAR_9);
}
