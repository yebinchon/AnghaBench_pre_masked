
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int name2 ;
struct TYPE_4__ {int WriteMode; int GetAccessTime; int GetUpdateTime; int GetCreateTime; int * NameW; int Name; void* pData; } ;
typedef TYPE_1__ IO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int,int *) ;
 int FUNC_4 (int ,int,int *) ;
 int FUNC_5 (void*,int *,int *,int *) ;
 TYPE_1__* FUNC_6 (int) ;

IO *FUNC_7(wchar_t *VAR_2, bool VAR_3, bool VAR_4)
{
 IO *VAR_5;
 void *VAR_6;
 wchar_t VAR_7[VAR_1];

 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_3(VAR_7, sizeof(VAR_7), VAR_2);
 FUNC_0(VAR_7);

 VAR_6 = FUNC_2(VAR_7, VAR_3, VAR_4);
 if (VAR_6 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_6(sizeof(IO));
 VAR_5->pData = VAR_6;
 FUNC_3(VAR_5->NameW, sizeof(VAR_5->NameW), VAR_7);
 FUNC_4(VAR_5->Name, sizeof(VAR_5->Name), VAR_5->NameW);
 VAR_5->WriteMode = VAR_3;






 FUNC_1(VAR_0);

 return VAR_5;
}
