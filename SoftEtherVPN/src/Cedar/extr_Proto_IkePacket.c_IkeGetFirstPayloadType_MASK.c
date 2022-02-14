
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_2__ {int PayloadType; } ;
typedef int LIST ;
typedef TYPE_1__ IKE_PACKET_PAYLOAD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;

UCHAR FUNC_2(LIST *VAR_1)
{
 IKE_PACKET_PAYLOAD *VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return VAR_0;
 }

 if (FUNC_1(VAR_1) == 0)
 {
  return VAR_0;
 }

 VAR_2 = (IKE_PACKET_PAYLOAD *)FUNC_0(VAR_1, 0);

 return VAR_2->PayloadType;
}
