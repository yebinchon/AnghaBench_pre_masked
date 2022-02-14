
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int S_addr; } ;
struct TYPE_6__ {TYPE_1__ S_un; } ;
struct sockaddr_in {void* sin_family; TYPE_2__ sin_addr; } ;
struct TYPE_7__ {int SubnetMask; int Broadcast; int IPAddress; } ;
typedef TYPE_3__ npf_if_addr ;
typedef scalar_t__ WCHAR ;
typedef scalar_t__ ULONG ;
typedef scalar_t__* PLONG ;
typedef scalar_t__* LPTSTR ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOLEAN ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__*,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,scalar_t__*,int *,scalar_t__*,int ,scalar_t__*) ;
 scalar_t__* FUNC_4 (char*) ;
 scalar_t__* FUNC_5 (char*) ;
 int VAR_5 ;
 int FUNC_6 (scalar_t__*) ;
 scalar_t__ FUNC_7 (scalar_t__*,char*,int) ;
 scalar_t__* FUNC_8 (scalar_t__*,char) ;

BOOLEAN FUNC_9(LPTSTR VAR_6, npf_if_addr* VAR_7, PLONG VAR_8)
{
 char *VAR_9;
 WCHAR *VAR_10;
 WCHAR *VAR_11;
 HKEY VAR_12;
 HKEY VAR_13;
 HKEY VAR_14;
 HKEY VAR_15;
 HKEY VAR_16;
 LONG VAR_17;
 WCHAR VAR_18[1024+1];
 DWORD VAR_19;
 ULONG VAR_20;
 DWORD VAR_21;
 struct sockaddr_in *VAR_22, *VAR_23;
 LONG VAR_24,VAR_25,VAR_26;
 DWORD VAR_27;

 VAR_9 = (char*)VAR_6;
 if(VAR_9[1] != 0) {
  VAR_10 = FUNC_4(VAR_9);
  VAR_6 = VAR_10;
 } else {
  VAR_10 = ((void*)0);
 }
 VAR_11 = FUNC_8(VAR_6, '\\');
 if (VAR_11 == ((void*)0))
  VAR_11 = VAR_6;
 else
  VAR_11++;
 if (FUNC_7(VAR_11, L"SEE_", 4) == 0)
  VAR_11 += 4;

 if( FUNC_2(VAR_3, FUNC_5("SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters\\Interfaces"), 0, VAR_4, &VAR_16) == VAR_1)
 {
  VAR_17 = FUNC_2(VAR_16,VAR_11,0,VAR_4,&VAR_15);
  if (VAR_17 != VAR_1) {
   FUNC_1(VAR_16);
   goto fail;
  }
 }
 else
 {


  VAR_17 = FUNC_2(VAR_3,FUNC_5("SYSTEM\\CurrentControlSet\\Services"),0,VAR_4,&VAR_12);
  if (VAR_17 != VAR_1)
   goto fail;
  VAR_17 = FUNC_2(VAR_12,VAR_11,0,VAR_4,&VAR_13);
  if (VAR_17 != VAR_1) {
   FUNC_1(VAR_12);
   FUNC_1(VAR_16);
   goto fail;
  }
  FUNC_1(VAR_12);
  VAR_17 = FUNC_2(VAR_13,FUNC_5("Parameters"),0,VAR_4,&VAR_14);
  if (VAR_17 != VAR_1) {
   FUNC_1(VAR_13);
   FUNC_1(VAR_16);
   goto fail;
  }
  FUNC_1(VAR_13);
  VAR_17 = FUNC_2(VAR_14,FUNC_5("TcpIp"),0,VAR_4,&VAR_15);
  if (VAR_17 != VAR_1) {
   FUNC_1(VAR_14);
   FUNC_1(VAR_16);
   goto fail;
  }
  FUNC_1(VAR_14);
  VAR_20 = sizeof VAR_18;
 }

 VAR_20 = 4;

 VAR_17=FUNC_3(VAR_15,FUNC_5("UseZeroBroadcast"),((void*)0),&VAR_19,(LPBYTE)&VAR_27,&VAR_20);
 if (VAR_17 != VAR_1)
  VAR_27=0;

 VAR_20 = 4;

 VAR_17=FUNC_3(VAR_15,FUNC_5("EnableDHCP"),((void*)0),&VAR_19,(LPBYTE)&VAR_21,&VAR_20);
 if (VAR_17 != VAR_1)
  VAR_21=0;



 if(VAR_21){

  VAR_20 = sizeof VAR_18;

  VAR_17 = FUNC_3(VAR_15,FUNC_5("DhcpIPAddress"),((void*)0),&VAR_19,(LPBYTE)VAR_18,&VAR_20);
  if (VAR_17 != VAR_1) {
   FUNC_1(VAR_15);
   FUNC_1(VAR_16);
   goto fail;
  }


  VAR_26 = 0;
  for(VAR_24 = 0;VAR_24 <* VAR_8;VAR_24++){
   VAR_22 = (struct sockaddr_in *) &(VAR_7[VAR_24].IPAddress);

   if((VAR_22->sin_addr.S_un.S_addr = FUNC_6(VAR_18 + VAR_26))!= -1){
    VAR_22->sin_family = VAR_0;

    VAR_23 = (struct sockaddr_in *) &(VAR_7[VAR_24].Broadcast);
    VAR_23->sin_family = VAR_0;
    if(VAR_27==0)
     VAR_23->sin_addr.S_un.S_addr = 0xffffffff;
    else
     VAR_23->sin_addr.S_un.S_addr = 0;

    while(*(VAR_18 + VAR_26) != 0)VAR_26++;
    VAR_26++;

    if(*(VAR_18 + VAR_26) == 0 || (VAR_26 * sizeof (WCHAR)) >= VAR_20)
     break;
   }
   else break;
  }

  VAR_20 = sizeof VAR_18;

  VAR_17 = FUNC_3(VAR_15,FUNC_5("DhcpSubnetMask"),((void*)0),&VAR_19,(LPBYTE)VAR_18,&VAR_20);
  if (VAR_17 != VAR_1) {
   FUNC_1(VAR_15);
   FUNC_1(VAR_16);
   goto fail;
  }


  VAR_26 = 0;
  for(VAR_25 = 0;VAR_25 < *VAR_8;VAR_25++){
   VAR_22 = (struct sockaddr_in *) &(VAR_7[VAR_25].SubnetMask);

   if((VAR_22->sin_addr.S_un.S_addr = FUNC_6(VAR_18 + VAR_26))!= -1){
    VAR_22->sin_family = VAR_0;

    while(*(VAR_18 + VAR_26) != 0)VAR_26++;
    VAR_26++;

    if(*(VAR_18 + VAR_26) == 0 || (VAR_26 * sizeof (WCHAR)) >= VAR_20)
     break;
   }
   else break;
  }


  if(VAR_25 != VAR_24){
   FUNC_1(VAR_15);
   FUNC_1(VAR_16);
   goto fail;
  }

 }
 else{

  VAR_20 = sizeof VAR_18;

  VAR_17 = FUNC_3(VAR_15,FUNC_5("IPAddress"),((void*)0),&VAR_19,(LPBYTE)VAR_18,&VAR_20);
  if (VAR_17 != VAR_1) {
   FUNC_1(VAR_15);
   FUNC_1(VAR_16);
   goto fail;
  }


  VAR_26 = 0;
  for(VAR_24 = 0;VAR_24 < *VAR_8;VAR_24++){
   VAR_22 = (struct sockaddr_in *) &(VAR_7[VAR_24].IPAddress);

   if((VAR_22->sin_addr.S_un.S_addr = FUNC_6(VAR_18 + VAR_26))!= -1){
    VAR_22->sin_family = VAR_0;

    VAR_23 = (struct sockaddr_in *) &(VAR_7[VAR_24].Broadcast);
    VAR_23->sin_family = VAR_0;
    if(VAR_27==0)
     VAR_23->sin_addr.S_un.S_addr = 0xffffffff;
    else
     VAR_23->sin_addr.S_un.S_addr = 0;

    while(*(VAR_18 + VAR_26) != 0)VAR_26++;
    VAR_26++;

    if(*(VAR_18 + VAR_26) == 0 || (VAR_26 * sizeof (WCHAR)) >= VAR_20)
     break;
   }
   else break;
  }

  VAR_20 = sizeof VAR_18;

  VAR_17 = FUNC_3(VAR_15,FUNC_5("SubnetMask"),((void*)0),&VAR_19,(LPBYTE)VAR_18,&VAR_20);
  if (VAR_17 != VAR_1) {
   FUNC_1(VAR_15);
   FUNC_1(VAR_16);
   goto fail;
  }


  VAR_26 = 0;
  for(VAR_25 = 0;VAR_25 <* VAR_8;VAR_25++){
   VAR_22 = (struct sockaddr_in *) &(VAR_7[VAR_25].SubnetMask);

   if((VAR_22->sin_addr.S_un.S_addr = FUNC_6(VAR_18 + VAR_26))!= -1){
    VAR_22->sin_family = VAR_0;

    while(*(VAR_18 + VAR_26) != 0)VAR_26++;
    VAR_26++;

    if(*(VAR_18 + VAR_26) == 0 || (VAR_26 * sizeof (WCHAR)) >= VAR_20)
     break;
   }
   else break;
  }


  if(VAR_25 != VAR_24){
   FUNC_1(VAR_15);
   FUNC_1(VAR_16);
   goto fail;
  }

 }

 *VAR_8 = VAR_24 + 1;

 FUNC_1(VAR_15);
 FUNC_1(VAR_16);

 if (VAR_17 != VAR_1) {
  goto fail;
 }


 if (VAR_10 != ((void*)0))
  FUNC_0(VAR_10);
 return VAR_5;

fail:
 if (VAR_10 != ((void*)0))
  FUNC_0(VAR_10);
    return VAR_2;
}
