
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef void* UCHAR ;
struct TYPE_6__ {int Checksum; void* Code; void* Type; } ;
typedef int IPV6_ADDR ;
typedef TYPE_1__ ICMP_HEADER ;
typedef int BUF ;


 int * FUNC_0 (int *,int *,scalar_t__,int ,void*,TYPE_1__*,scalar_t__) ;
 int FUNC_1 (int *,int *,int ,TYPE_1__*,scalar_t__,int ) ;
 int FUNC_2 (void*,void*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_4 (scalar_t__) ;

BUF *FUNC_5(IPV6_ADDR *VAR_1, IPV6_ADDR *VAR_2, UCHAR VAR_3, UCHAR VAR_4, UCHAR VAR_5, void *VAR_6, UINT VAR_7, UINT VAR_8)
{
 ICMP_HEADER *VAR_9;
 void *VAR_10;
 BUF *VAR_11;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_9 = FUNC_4(sizeof(ICMP_HEADER) + VAR_7);
 VAR_10 = ((UCHAR *)VAR_9) + sizeof(ICMP_HEADER);
 FUNC_2(VAR_10, VAR_6, VAR_7);

 VAR_9->Type = VAR_4;
 VAR_9->Code = VAR_5;
 VAR_9->Checksum = FUNC_1(VAR_1, VAR_2, VAR_0, VAR_9,
  sizeof(ICMP_HEADER) + VAR_7, 0);

 VAR_11 = FUNC_0(VAR_2, VAR_1, VAR_8, VAR_0, VAR_3, VAR_9,
  sizeof(ICMP_HEADER) + VAR_7);

 FUNC_3(VAR_9);

 return VAR_11;
}
