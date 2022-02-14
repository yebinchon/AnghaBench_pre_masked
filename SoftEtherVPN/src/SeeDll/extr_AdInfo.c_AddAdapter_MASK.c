
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int npf_if_addr ;
typedef scalar_t__ UINT ;
struct TYPE_10__ {int Length; int MacAddressLen; int NNetworkAddresses; struct TYPE_10__* Next; scalar_t__ Flags; struct TYPE_10__* NetworkAddresses; scalar_t__ Name; int MacAddress; scalar_t__ Data; int Oid; int LinkLayer; scalar_t__ Description; } ;
typedef TYPE_1__* PWCHAR ;
typedef TYPE_1__* PPACKET_OID_DATA ;
typedef scalar_t__ PCHAR ;
typedef TYPE_1__* PADAPTER_INFO ;
typedef int LPTSTR ;
typedef int * LPADAPTER ;
typedef int LONG ;
typedef int DWORD ;
typedef int BOOLEAN ;
typedef int ADAPTER_INFO ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,TYPE_1__*,int*) ;
 int FUNC_7 (int *,int *) ;
 int * FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *,int ,TYPE_1__*) ;
 int FUNC_10 (int ) ;
 TYPE_1__* FUNC_11 (scalar_t__) ;
 int VAR_11 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (scalar_t__,int) ;
 int FUNC_14 (int ,scalar_t__,int) ;
 int FUNC_15 (int ,int ,int) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 int FUNC_17 (scalar_t__,scalar_t__) ;

BOOLEAN FUNC_18(PCHAR VAR_12, UINT VAR_13)
{

 DWORD VAR_14=0;
 LONG VAR_15;
 LPADAPTER VAR_16;
 PPACKET_OID_DATA VAR_17;
 int VAR_18=0;
 PADAPTER_INFO VAR_19;
 PADAPTER_INFO VAR_20;
 PWCHAR VAR_21;

 FUNC_2("AddAdapter\n");

 FUNC_12(VAR_1, VAR_5);

 for(VAR_20 = VAR_0; VAR_20 != ((void*)0); VAR_20 = VAR_20->Next)
 {
  if(FUNC_16(VAR_12, VAR_20->Name) == 0)
  {
   FUNC_2("AddAdapter: Adapter already present in the list\n");
   FUNC_10(VAR_1);
   return VAR_11;
  }
 }

 VAR_21 = FUNC_11(VAR_12);




 if(VAR_13 != VAR_6)
 {


  VAR_16 = FUNC_8((PCHAR)VAR_21);

  FUNC_1(VAR_21);

  if(VAR_16 == ((void*)0))
  {

   FUNC_10(VAR_1);
   return VAR_2;
  }


  VAR_17 = FUNC_0(VAR_3 | VAR_4,512);
  if (VAR_17 == ((void*)0))
  {
   FUNC_2("AddAdapter: GlobalAlloc Failed\n");
   FUNC_5(VAR_16);
   FUNC_10(VAR_1);
   return VAR_2;
  }
 }






 VAR_19 = FUNC_0(VAR_3 | VAR_4, sizeof(ADAPTER_INFO));
 if (VAR_19 == ((void*)0))
 {
  FUNC_2("AddAdapter: GlobalAlloc Failed\n");
  FUNC_1(VAR_17);
  FUNC_5(VAR_16);
  FUNC_10(VAR_1);
  return VAR_2;
 }


 FUNC_17(VAR_19->Name, VAR_12);

 if(VAR_13 != VAR_6)
 {

  VAR_17->Oid = VAR_10;
  VAR_17->Length = 256;
  FUNC_13(VAR_17->Data, 256);

  VAR_15 = FUNC_9(VAR_16, VAR_2, VAR_17);

  if(VAR_15==0 || ((char*)VAR_17->Data)[0]==0)
  {
   FUNC_2("AddAdapter: unable to get a valid adapter description from the NIC driver\n");
  }

  FUNC_3("Adapter Description=%s\n\n",VAR_17->Data);


  FUNC_17(VAR_19->Description, VAR_17->Data);

  FUNC_7(VAR_16, &(VAR_19->LinkLayer));


  VAR_17->Oid = VAR_9;

  VAR_17->Length = 256;
  FUNC_13(VAR_17->Data, 256);

  VAR_15 = FUNC_9(VAR_16, VAR_2, VAR_17);
  if(VAR_15)
  {
   FUNC_14(VAR_19->MacAddress, VAR_17->Data, 6);
   VAR_19->MacAddressLen = 6;
  }
  else
  {
   FUNC_15(VAR_19->MacAddress, 0, 6);
   VAR_19->MacAddressLen = 0;
  }


  VAR_19->NetworkAddresses = FUNC_0(VAR_3 | VAR_4, VAR_8 * sizeof(npf_if_addr));
  if (VAR_19->NetworkAddresses == ((void*)0)) {
   FUNC_2("AddAdapter: GlobalAlloc Failed\n");
   FUNC_5(VAR_16);
   FUNC_1(VAR_17);
   FUNC_1(VAR_19);
   FUNC_10(VAR_1);
   return VAR_2;
  }

  VAR_19->NNetworkAddresses = VAR_8;
  if(!FUNC_6((LPTSTR)VAR_19->Name, VAR_19->NetworkAddresses, &VAR_19->NNetworkAddresses))
  {


   VAR_19->NNetworkAddresses = 0;

   if(!FUNC_4(VAR_19))
   {

    FUNC_1(VAR_19->NetworkAddresses);
    VAR_19->NetworkAddresses = ((void*)0);
    VAR_19->NNetworkAddresses = 0;

   }

  }



  FUNC_4(VAR_19);


  VAR_19->Flags = VAR_7;



  FUNC_5(VAR_16);
  FUNC_1(VAR_17);
 }
 else
 {


  VAR_19->Flags = VAR_6;
 }


 VAR_19->Next = VAR_0;
 VAR_0 = VAR_19;

 FUNC_10(VAR_1);
 return VAR_11;
}
