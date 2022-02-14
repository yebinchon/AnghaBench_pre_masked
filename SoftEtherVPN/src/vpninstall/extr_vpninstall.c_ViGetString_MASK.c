
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
struct TYPE_5__ {int * String; int Id; } ;
typedef TYPE_1__ VI_STRING ;
typedef int UINT ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int VAR_0 ;

wchar_t *FUNC_4(UINT VAR_1)
{
 VI_STRING VAR_2, *VAR_3;
 wchar_t *VAR_4 = ((void*)0);

 FUNC_3(&VAR_2, sizeof(VAR_2));
 VAR_2.Id = VAR_1;

 FUNC_0(VAR_0);
 {
  VAR_3 = FUNC_1(VAR_0, &VAR_2);

  if (VAR_3 != ((void*)0))
  {
   VAR_4 = VAR_3->String;
  }
 }
 FUNC_2(VAR_0);

 return VAR_4;
}
