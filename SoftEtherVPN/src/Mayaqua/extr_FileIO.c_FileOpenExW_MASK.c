
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
struct TYPE_6__ {int HamMode; int * HamBuf; int NameW; int Name; } ;
typedef TYPE_1__ IO ;


 TYPE_1__* FUNC_0 (int*,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int*,int,int*) ;
 int VAR_0 ;
 int * FUNC_3 (int*) ;
 int FUNC_4 (int ,int,int*) ;
 int FUNC_5 (int ,int,int ) ;
 TYPE_1__* FUNC_6 (int) ;

IO *FUNC_7(wchar_t *VAR_1, bool VAR_2, bool VAR_3)
{
 wchar_t VAR_4[VAR_0];

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_2(VAR_4, sizeof(VAR_4), VAR_1);

 if (VAR_1[0] == L'|')
 {
  IO *VAR_5 = FUNC_6(sizeof(IO));
  VAR_1++;
  FUNC_4(VAR_5->NameW, sizeof(VAR_5->NameW), VAR_1);
  FUNC_5(VAR_5->Name, sizeof(VAR_5->Name), VAR_5->NameW);
  VAR_5->HamMode = 1;
  VAR_5->HamBuf = FUNC_3(VAR_1);
  if (VAR_5->HamBuf == ((void*)0))
  {
   FUNC_1(VAR_5);
   return ((void*)0);
  }
  return VAR_5;
 }
 else
 {
  return FUNC_0(VAR_4, VAR_2, VAR_3);
 }
}
