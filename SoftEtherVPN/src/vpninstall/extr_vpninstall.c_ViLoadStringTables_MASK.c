
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {int Id; int StringA; int * String; } ;
typedef TYPE_1__ VI_STRING ;
typedef int UINT ;
typedef int HINSTANCE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int * FUNC_4 (int ,int) ;
 TYPE_1__* FUNC_5 (int) ;
 int VAR_1 ;

void FUNC_6()
{
 UINT VAR_2, VAR_3;
 HINSTANCE VAR_4 = FUNC_1(((void*)0));

 VAR_1 = FUNC_3(VAR_0);

 VAR_3 = 0;
 for (VAR_2 = 1;;VAR_2++)
 {
  wchar_t *VAR_5 = FUNC_4(VAR_4, VAR_2);
  if (VAR_5 != ((void*)0))
  {
   VI_STRING *VAR_6;
   VAR_3 = 0;

   VAR_6 = FUNC_5(sizeof(VI_STRING));
   VAR_6->Id = VAR_2;
   VAR_6->String = VAR_5;
   VAR_6->StringA = FUNC_0(VAR_5);

   FUNC_2(VAR_1, VAR_6);
  }
  else
  {
   VAR_3++;
   if (VAR_3 >= 1500)
   {
    break;
   }
  }
 }
}
