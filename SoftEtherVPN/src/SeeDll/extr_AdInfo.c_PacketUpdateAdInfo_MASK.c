
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* Next; struct TYPE_4__* NetworkAddresses; int Name; } ;
typedef int PCHAR ;
typedef TYPE_1__* PADAPTER_INFO ;
typedef scalar_t__ BOOLEAN ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int ,int ) ;
 int * VAR_5 ;
 scalar_t__ FUNC_7 (int ,int ) ;

BOOLEAN FUNC_8(PCHAR VAR_6)
{

 PADAPTER_INFO VAR_7, VAR_8;

 FUNC_6(VAR_1, VAR_3);

 VAR_8 = VAR_7 = VAR_0;




 while(VAR_7 != ((void*)0))
 {
  if(FUNC_7(VAR_7->Name, VAR_6) == 0)
  {
   if (FUNC_7(VAR_6, VAR_2) == 0)
   {
    FUNC_5(VAR_1);
    return VAR_4;
   }

   if(VAR_7 == VAR_0)
   {
    VAR_0 = VAR_7->Next;
   }
   else
   {
    VAR_8->Next = VAR_7->Next;
   }

   if (VAR_7->NetworkAddresses != ((void*)0))
    FUNC_1(VAR_7->NetworkAddresses);
   FUNC_1(VAR_7);

   break;
  }

  VAR_8 = VAR_7;

  VAR_7 = VAR_7->Next;
 }

 FUNC_5(VAR_1);




 if(FUNC_0(VAR_6, 0) == VAR_4)
  return VAR_4;





 FUNC_4();
 FUNC_2();
 return VAR_4;
}
