
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int VH ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_6__ {scalar_t__ Checksum; int Type; scalar_t__ Code; } ;
typedef TYPE_1__ ICMP_HEADER ;


 int FUNC_0 (void*,void*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__,int ,TYPE_1__*,scalar_t__) ;
 TYPE_1__* FUNC_4 (scalar_t__) ;

void FUNC_5(VH *VAR_2, UINT VAR_3, UINT VAR_4, void *VAR_5, UINT VAR_6)
{
 ICMP_HEADER *VAR_7;
 void *VAR_8;

 if (VAR_2 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return;
 }


 VAR_7 = FUNC_4(sizeof(ICMP_HEADER) + VAR_6);

 VAR_8 = ((UCHAR *)VAR_7) + sizeof(ICMP_HEADER);
 FUNC_0(VAR_8, VAR_5, VAR_6);

 VAR_7->Checksum = 0;
 VAR_7->Code = 0;
 VAR_7->Type = VAR_0;

 VAR_7->Checksum = FUNC_2(VAR_7, sizeof(ICMP_HEADER) + VAR_6);


 FUNC_3(VAR_2, VAR_4, VAR_3, VAR_1, VAR_7, sizeof(ICMP_HEADER) + VAR_6);


 FUNC_1(VAR_7);
}
