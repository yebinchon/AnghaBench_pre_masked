
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_6__ {int IpAddress; } ;
struct TYPE_7__ {TYPE_1__ NatOa; } ;
struct TYPE_8__ {int PayloadType; TYPE_2__ Payload; } ;
typedef int IP ;
typedef TYPE_3__ IKE_PACKET_PAYLOAD ;


 int FUNC_0 (int *,int *,int) ;
 TYPE_3__* FUNC_1 (int ) ;

IKE_PACKET_PAYLOAD *FUNC_2(UCHAR VAR_0, IP *VAR_1)
{
 IKE_PACKET_PAYLOAD *VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_1(VAR_0);
 FUNC_0(&VAR_2->Payload.NatOa.IpAddress, VAR_1, sizeof(IP));
 VAR_2->PayloadType = VAR_0;

 return VAR_2;
}
