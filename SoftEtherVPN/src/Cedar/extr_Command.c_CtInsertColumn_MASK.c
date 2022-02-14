
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char wchar_t ;
struct TYPE_7__ {int Columns; } ;
struct TYPE_6__ {int Right; int String; } ;
typedef TYPE_1__ CTC ;
typedef TYPE_2__ CT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;

void FUNC_3(CT *VAR_0, wchar_t *VAR_1, bool VAR_2)
{
 CTC *VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return;
 }
 if (VAR_1 == ((void*)0))
 {
  VAR_1 = L"";
 }

 VAR_3 = FUNC_2(sizeof(CTC));
 VAR_3->String = FUNC_0(VAR_1);
 VAR_3->Right = VAR_2;

 FUNC_1(VAR_0->Columns, VAR_3);
}
