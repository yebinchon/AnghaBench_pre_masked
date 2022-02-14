
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int IpCombine; } ;
typedef TYPE_1__ VH ;
typedef int USHORT ;
typedef void* UINT ;
typedef int UCHAR ;
struct TYPE_8__ {int Protocol; int Id; void* SrcIP; void* DestIP; } ;
typedef TYPE_2__ IP_COMBINE ;


 TYPE_2__* FUNC_0 (int ,TYPE_2__*) ;

IP_COMBINE *FUNC_1(VH *VAR_0, UINT VAR_1, UINT VAR_2, USHORT VAR_3, UCHAR VAR_4)
{
 IP_COMBINE *VAR_5, VAR_6;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_6.DestIP = VAR_2;
 VAR_6.SrcIP = VAR_1;
 VAR_6.Id = VAR_3;
 VAR_6.Protocol = VAR_4;

 VAR_5 = FUNC_0(VAR_0->IpCombine, &VAR_6);

 return VAR_5;
}
