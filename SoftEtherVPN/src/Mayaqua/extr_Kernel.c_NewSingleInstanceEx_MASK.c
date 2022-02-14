
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int name ;
struct TYPE_4__ {void* pData; int Name; } ;
typedef TYPE_1__ INSTANCE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (char*,int,char*) ;
 int VAR_0 ;
 void* FUNC_3 (char*) ;
 TYPE_1__* FUNC_4 (int) ;

INSTANCE *FUNC_5(char *VAR_1, bool VAR_2)
{
 char VAR_3[VAR_0];
 INSTANCE *VAR_4;
 void *VAR_5;

 if (VAR_1 != ((void*)0))
 {
  if (VAR_2 == 0)
  {
   FUNC_1(VAR_3, sizeof(VAR_3), VAR_1);
  }
  else
  {
   FUNC_2(VAR_3, sizeof(VAR_3), VAR_1);
  }

  VAR_5 = FUNC_3(VAR_3);
 }
 else
 {
  VAR_5 = FUNC_3(((void*)0));
 }

 if (VAR_5 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_4(sizeof(INSTANCE));
 if (VAR_1 != ((void*)0))
 {
  VAR_4->Name = FUNC_0(VAR_1);
 }

 VAR_4->pData = VAR_5;

 return VAR_4;
}
