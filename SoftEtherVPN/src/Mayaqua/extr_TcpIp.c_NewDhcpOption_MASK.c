
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
typedef void* UCHAR ;
struct TYPE_3__ {void* Id; void* Size; void* Data; } ;
typedef TYPE_1__ DHCP_OPTION ;


 int FUNC_0 (void*,void*,int) ;
 void* FUNC_1 (int) ;

DHCP_OPTION *FUNC_2(UINT VAR_0, void *VAR_1, UINT VAR_2)
{
 DHCP_OPTION *VAR_3;
 if (VAR_2 != 0 && VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_1(sizeof(DHCP_OPTION));
 VAR_3->Data = FUNC_1(VAR_2);
 FUNC_0(VAR_3->Data, VAR_1, VAR_2);
 VAR_3->Size = (UCHAR)VAR_2;
 VAR_3->Id = (UCHAR)VAR_0;

 return VAR_3;
}
