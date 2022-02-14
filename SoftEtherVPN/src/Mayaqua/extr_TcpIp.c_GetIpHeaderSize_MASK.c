
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_3__ {int TotalHeaderSize; int * IPv6Header; } ;
typedef int TCP_HEADER ;
typedef TYPE_1__ IPV6_HEADER_PACKET_INFO ;
typedef int IPV6_HEADER ;
typedef int IPV4_HEADER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int*,int) ;

UINT FUNC_2(UCHAR *VAR_0, UINT VAR_1)
{
 UCHAR VAR_2;
 TCP_HEADER *VAR_3 = ((void*)0);
 IPV4_HEADER *VAR_4 = ((void*)0);
 IPV6_HEADER *VAR_5 = ((void*)0);

 if (VAR_0 == ((void*)0) || VAR_1 == 0)
 {
  return 0;
 }


 VAR_2 = (VAR_0[0] >> 4) & 0x0f;

 if (VAR_2 == 4)
 {

  UINT VAR_6;
  if (VAR_1 < sizeof(IPV4_HEADER))
  {

   return 0;
  }

  VAR_4 = (IPV4_HEADER *)VAR_0;

  VAR_6 = FUNC_0(VAR_4) * 4;
  if (VAR_6 < sizeof(IPV4_HEADER))
  {

   return 0;
  }

  if (VAR_1 < VAR_6)
  {

   return 0;
  }

  return VAR_6;
 }
 else if (VAR_2 == 6)
 {

  IPV6_HEADER_PACKET_INFO VAR_7;

  if (FUNC_1(&VAR_7, VAR_0, VAR_1) == 0)
  {

   return 0;
  }

  VAR_5 = VAR_7;
  if (VAR_5 == ((void*)0))
  {
   return 0;
  }

  if (VAR_1 < VAR_7)
  {

   return 0;
  }

  return VAR_7;
 }
 else
 {

  return 0;
 }
}
