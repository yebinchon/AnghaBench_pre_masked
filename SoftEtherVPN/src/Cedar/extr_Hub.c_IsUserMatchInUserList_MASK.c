
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int UserHashList; } ;
typedef TYPE_1__ USERLIST ;
typedef scalar_t__ UINT64 ;
typedef int LIST ;


 TYPE_1__* FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,scalar_t__) ;
 TYPE_1__* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

bool FUNC_5(LIST *VAR_0, char *VAR_1, UINT64 VAR_2)
{
 USERLIST *VAR_3;
 bool VAR_4 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == 0)
 {
  return 0;
 }

 FUNC_3(VAR_0);
 {
  VAR_3 = FUNC_0(VAR_0, VAR_1);
  if (VAR_3 == ((void*)0))
  {
   VAR_3 = FUNC_2(VAR_0, VAR_1);
  }

  if (VAR_3 != ((void*)0))
  {
   VAR_4 = FUNC_1(VAR_3->UserHashList, VAR_2);
  }
 }
 FUNC_4(VAR_0);

 return VAR_4;
}
