
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_4__ {int Value; int Type; } ;
typedef TYPE_1__ IKE_PACKET_TRANSFORM_VALUE ;


 TYPE_1__* FUNC_0 (int) ;

IKE_PACKET_TRANSFORM_VALUE *FUNC_1(UCHAR VAR_0, UINT VAR_1)
{
 IKE_PACKET_TRANSFORM_VALUE *VAR_2 = FUNC_0(sizeof(IKE_PACKET_TRANSFORM_VALUE));

 VAR_2->Type = VAR_0;
 VAR_2->Value = VAR_1;

 return VAR_2;
}
