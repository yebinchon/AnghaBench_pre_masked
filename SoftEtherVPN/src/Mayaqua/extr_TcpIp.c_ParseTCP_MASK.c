
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_4__ {int * TCPHeader; } ;
struct TYPE_5__ {int PayloadSize; int * Payload; int TypeL4; TYPE_1__ L4; } ;
typedef int TCP_HEADER ;
typedef TYPE_2__ PKT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

bool FUNC_1(PKT *VAR_2, UCHAR *VAR_3, UINT VAR_4)
{
 UINT VAR_5;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }


 if (VAR_4 < sizeof(TCP_HEADER))
 {

  return 0;
 }


 VAR_2->L4.TCPHeader = (TCP_HEADER *)VAR_3;
 VAR_2->TypeL4 = VAR_0;


 VAR_5 = FUNC_0(VAR_2->L4.TCPHeader) * 4;
 if (VAR_5 < sizeof(TCP_HEADER) || VAR_4 < VAR_5)
 {

  VAR_2->L4.TCPHeader = ((void*)0);
  VAR_2->TypeL4 = VAR_1;
  return 1;
 }

 VAR_3 += VAR_5;
 VAR_4 -= VAR_5;

 VAR_2->Payload = VAR_3;
 VAR_2->PayloadSize = VAR_4;

 return 1;
}
