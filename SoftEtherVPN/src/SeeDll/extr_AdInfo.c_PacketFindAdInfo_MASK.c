
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* Next; int Name; } ;
typedef int PCHAR ;
typedef TYPE_1__* PADAPTER_INFO ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;

PADAPTER_INFO FUNC_2(PCHAR VAR_1)
{

 PADAPTER_INFO VAR_2;

 if (VAR_0 == ((void*)0))
  FUNC_0();

 VAR_2 = VAR_0;

 while(VAR_2 != ((void*)0))
 {
  if(FUNC_1(VAR_2->Name, VAR_1) == 0) break;

  VAR_2 = VAR_2->Next;
 }

 return VAR_2;
}
