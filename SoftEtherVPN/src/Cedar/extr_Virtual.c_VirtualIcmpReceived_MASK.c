
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VH ;
typedef scalar_t__ USHORT ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_3__ {scalar_t__ Checksum; int Type; } ;
typedef TYPE_1__ ICMP_HEADER ;


 int FUNC_0 (char*) ;


 scalar_t__ FUNC_1 (void*,int) ;
 int FUNC_2 (int *,int,int,int *,int,int ,TYPE_1__*,int,int *,int,int) ;

void FUNC_3(VH *VAR_0, UINT VAR_1, UINT VAR_2, void *VAR_3, UINT VAR_4, UCHAR VAR_5, UCHAR *VAR_6, UINT VAR_7, UINT VAR_8)
{
 ICMP_HEADER *VAR_9;
 UINT VAR_10;
 USHORT VAR_11, VAR_12;

 if (VAR_0 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }


 if (VAR_4 < sizeof(ICMP_HEADER))
 {
  return;
 }


 VAR_9 = (ICMP_HEADER *)VAR_3;


 VAR_10 = VAR_4 - sizeof(ICMP_HEADER);


 VAR_12 = VAR_9->Checksum;
 VAR_9->Checksum = 0;
 VAR_11 = FUNC_1(VAR_3, VAR_4);
 VAR_9->Checksum = VAR_12;

 if (VAR_11 != VAR_12)
 {

  FUNC_0("ICMP CheckSum Failed.\n");
  return;
 }


 switch (VAR_9->Type)
 {
 case 129:
  FUNC_2(VAR_0, VAR_1, VAR_2, ((UCHAR *)VAR_3) + sizeof(ICMP_HEADER), VAR_10, VAR_5,
   VAR_9, VAR_4, VAR_6, VAR_7, VAR_8);
  break;

 case 128:

  break;
 }
}
