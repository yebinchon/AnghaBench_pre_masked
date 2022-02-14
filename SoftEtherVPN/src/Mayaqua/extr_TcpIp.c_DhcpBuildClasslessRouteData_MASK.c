
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp ;
typedef size_t UINT ;
typedef size_t UCHAR ;
struct TYPE_5__ {int SubnetMaskLen; int Gateway; int Network; scalar_t__ Exists; } ;
struct TYPE_4__ {scalar_t__ NumExistingRoutes; TYPE_2__* Entries; } ;
typedef TYPE_1__ DHCP_CLASSLESS_ROUTE_TABLE ;
typedef TYPE_2__ DHCP_CLASSLESS_ROUTE ;
typedef int BUF ;


 int FUNC_0 (size_t*,int *,size_t) ;
 size_t FUNC_1 (int *) ;
 size_t VAR_0 ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,size_t*,int) ;
 int FUNC_5 (size_t*,int) ;

BUF *FUNC_6(DHCP_CLASSLESS_ROUTE_TABLE *VAR_1)
{
 BUF *VAR_2;
 UINT VAR_3;

 if (VAR_1 == ((void*)0) || VAR_1->NumExistingRoutes == 0)
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_2();

 for (VAR_3 = 0;VAR_3 < VAR_0;VAR_3++)
 {
  DHCP_CLASSLESS_ROUTE *VAR_4 = &VAR_1->Entries[VAR_3];

  if (VAR_4->Exists && VAR_4->SubnetMaskLen <= 32)
  {
   UCHAR VAR_5;
   UINT VAR_6;
   UINT VAR_7;
   UCHAR VAR_8[4];


   VAR_5 = (UCHAR)VAR_4->SubnetMaskLen;
   FUNC_4(VAR_2, &VAR_5, 1);


   VAR_6 = (VAR_4->SubnetMaskLen + 7) / 8;
   FUNC_5(VAR_8, sizeof(VAR_8));
   FUNC_0(VAR_8, &VAR_4->Network, VAR_6);
   FUNC_4(VAR_2, VAR_8, VAR_6);


   VAR_7 = FUNC_1(&VAR_4->Gateway);
   FUNC_4(VAR_2, &VAR_7, sizeof(UINT));
  }
 }

 FUNC_3(VAR_2);

 return VAR_2;
}
