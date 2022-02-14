
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* Next; struct TYPE_5__* NetworkAddresses; } ;
typedef TYPE_1__* PVOID ;
typedef TYPE_1__* PADAPTER_INFO ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int * VAR_3 ;

void FUNC_8()
{

 PADAPTER_INFO VAR_4;
 PVOID VAR_5, VAR_6;

 FUNC_7(VAR_1, VAR_2);

 if(VAR_0)
 {

  VAR_4 = VAR_0;
  while(VAR_4 != ((void*)0))
  {
   VAR_5 = VAR_4->NetworkAddresses;
   VAR_6 = VAR_4;

   VAR_4 = VAR_4->Next;

   if (VAR_5 != ((void*)0))
    FUNC_0(VAR_5);
   FUNC_0(VAR_6);
  }

  VAR_0 = ((void*)0);
 }




 if(!FUNC_3())
 {

  FUNC_1("PacketPopulateAdaptersInfoList: registry scan for adapters failed!\n");
 }

 if(!FUNC_5())
 {

  FUNC_1("PacketPopulateAdaptersInfoList: failed to get adapters from the IP Helper API!\n");
 }

 if (!FUNC_2())
 {
  FUNC_1("PacketPopulateAdaptersInfoList: adding fake NdisWan adapter failed.\n");
 }
 FUNC_6(VAR_1);
}
