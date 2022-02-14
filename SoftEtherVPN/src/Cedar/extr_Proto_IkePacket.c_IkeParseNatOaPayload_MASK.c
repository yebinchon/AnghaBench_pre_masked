
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ip6 ;
typedef int ip4 ;
typedef int ip ;
typedef int h ;
struct TYPE_11__ {int IdType; } ;
typedef TYPE_1__ UCHAR ;
struct TYPE_12__ {int IpAddress; } ;
typedef int IP ;
typedef TYPE_2__ IKE_PACKET_NAT_OA_PAYLOAD ;
typedef TYPE_1__ IKE_NAT_OA_HEADER ;
typedef int BUF ;


 int FUNC_0 (int *,int *,int) ;


 int FUNC_1 (int *,TYPE_1__*,int) ;
 int FUNC_2 (int *,TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,int) ;

bool FUNC_5(IKE_PACKET_NAT_OA_PAYLOAD *VAR_0, BUF *VAR_1)
{
 IKE_NAT_OA_HEADER VAR_2;
 UCHAR VAR_3[4];
 UCHAR VAR_4[16];
 IP VAR_5;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_4(&VAR_5, sizeof(VAR_5));

 if (FUNC_1(VAR_1, &VAR_2, sizeof(VAR_2)) != sizeof(VAR_2))
 {
  return 0;
 }

 if (VAR_2.IdType != 129 && VAR_2.IdType != 128)
 {
  return 0;
 }

 switch (VAR_2.IdType)
 {
 case 129:
  if (FUNC_1(VAR_1, VAR_3, sizeof(VAR_3)) != sizeof(VAR_3))
  {
   return 0;
  }

  FUNC_2(&VAR_5, VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3]);

  break;

 case 128:
  if (FUNC_1(VAR_1, VAR_4, sizeof(VAR_4)) != sizeof(VAR_4))
  {
   return 0;
  }

  FUNC_3(&VAR_5, VAR_4);

  break;

 default:
  return 0;
 }

 FUNC_0(&VAR_0->IpAddress, &VAR_5, sizeof(IP));

 return 1;
}
