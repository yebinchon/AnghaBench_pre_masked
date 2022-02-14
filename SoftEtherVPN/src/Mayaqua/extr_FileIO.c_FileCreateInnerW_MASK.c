
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int name2 ;
struct TYPE_4__ {int WriteMode; int * NameW; int Name; void* pData; } ;
typedef TYPE_1__ IO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int *) ;
 int FUNC_4 (int ,int,int *) ;
 TYPE_1__* FUNC_5 (int) ;

IO *FUNC_6(wchar_t *VAR_2)
{
 IO *VAR_3;
 void *VAR_4;
 wchar_t VAR_5[VAR_1];

 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_3(VAR_5, sizeof(VAR_5), VAR_2);
 FUNC_0(VAR_5);

 VAR_4 = FUNC_2(VAR_5);
 if (VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_5(sizeof(IO));
 VAR_3->pData = VAR_4;
 FUNC_3(VAR_3->NameW, sizeof(VAR_3->NameW), VAR_5);
 FUNC_4(VAR_3->Name, sizeof(VAR_3->Name), VAR_3->NameW);
 VAR_3->WriteMode = 1;


 FUNC_1(VAR_0);

 return VAR_3;
}
