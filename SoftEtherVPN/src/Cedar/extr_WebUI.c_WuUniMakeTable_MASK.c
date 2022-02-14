
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
typedef int UINT ;
struct TYPE_3__ {char* Name; int Value; } ;
typedef TYPE_1__ STRMAP_ENTRY ;
typedef int LIST ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 () ;
 int FUNC_5 (char*,int,scalar_t__*) ;
 scalar_t__* FUNC_6 (scalar_t__*,int,scalar_t__**) ;

__attribute__((used)) static LIST *FUNC_7(wchar_t *VAR_0)
{
 LIST *VAR_1;
 STRMAP_ENTRY *VAR_2;

 if(VAR_0==((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_4();
 while(*VAR_0)
 {
  wchar_t *VAR_3;
  UINT VAR_4;
  VAR_2 = (STRMAP_ENTRY*)FUNC_3(sizeof(STRMAP_ENTRY));
  VAR_0 = FUNC_6(VAR_0, L':', &VAR_3);
  VAR_4 = FUNC_1(VAR_3);
  VAR_2->Name = (char*)FUNC_3(VAR_4);
  FUNC_5(VAR_2->Name, VAR_4, VAR_3);
  VAR_0 = FUNC_6(VAR_0, L',', (wchar_t**)&(VAR_2->Value));
  FUNC_0(VAR_1, VAR_2);
  FUNC_2(VAR_3);
 }
 return VAR_1;
}
