
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int PayloadType; } ;
typedef TYPE_1__ IKE_PACKET_PAYLOAD ;


 TYPE_1__* FUNC_0 (int) ;

IKE_PACKET_PAYLOAD *FUNC_1(UINT VAR_0)
{
 IKE_PACKET_PAYLOAD *VAR_1;

 VAR_1 = FUNC_0(sizeof(IKE_PACKET_PAYLOAD));

 VAR_1->PayloadType = VAR_0;

 return VAR_1;
}
