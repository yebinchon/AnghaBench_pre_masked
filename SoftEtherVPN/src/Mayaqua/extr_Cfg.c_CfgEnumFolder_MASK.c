
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {int Folders; } ;
typedef TYPE_1__ FOLDER ;
typedef int (* ENUM_FOLDER ) (TYPE_1__*,void*) ;


 TYPE_1__* FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

void FUNC_3(FOLDER *VAR_0, ENUM_FOLDER VAR_1, void *VAR_2)
{
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 for (VAR_3 = 0;VAR_3 < FUNC_1(VAR_0->Folders);VAR_3++)
 {
  FOLDER *VAR_4 = FUNC_0(VAR_0->Folders, VAR_3);
  if (VAR_1(VAR_4, VAR_2) == 0)
  {
   break;
  }

  if ((VAR_3 % 100) == 99)
  {
   FUNC_2();
  }
 }
}
