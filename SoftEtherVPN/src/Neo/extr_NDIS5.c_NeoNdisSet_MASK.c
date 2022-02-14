
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ULONG ;
typedef int UINT ;
struct TYPE_2__ {int CurrentPacketFilter; } ;
typedef int NDIS_STATUS ;
typedef int NDIS_OID ;
typedef int NDIS_HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 TYPE_1__* VAR_4 ;

NDIS_STATUS FUNC_0(
     NDIS_HANDLE VAR_5,
     NDIS_OID VAR_6,
     void *VAR_7,
     ULONG VAR_8,
     ULONG *VAR_9,
     ULONG *VAR_10)
{
 if (VAR_4 == ((void*)0))
 {
  return VAR_3;
 }


 *VAR_9 = 0;
 *VAR_10 = 0;


 switch (VAR_6)
 {
 case 128:

  if (VAR_8 != 4)
  {
   *VAR_10 = 4;
   return VAR_0;
  }
  *VAR_9 = 4;
  VAR_4->CurrentPacketFilter = *((UINT *)VAR_7);
  return VAR_2;
 case 129:

  if (VAR_8 != 4)
  {
   *VAR_10 = 4;
   return VAR_0;
  }
  *VAR_9 = 4;
  return VAR_2;

 case 130:

  *VAR_9 = VAR_8;

  return VAR_2;
 }

 return VAR_1;
}
