
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmp_buffer ;
typedef int USHORT ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_2__ {scalar_t__ Reserved; int Protocol; int PacketLength; scalar_t__ DstIP; scalar_t__ SrcIP; } ;
typedef TYPE_1__ IPV4_PSEUDO_HEADER ;


 int FUNC_0 (int *,void*,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *,scalar_t__) ;
 int * FUNC_4 (scalar_t__) ;

USHORT FUNC_5(UINT VAR_1, UINT VAR_2, UCHAR VAR_3, void *VAR_4, UINT VAR_5, UINT VAR_6)
{
 UCHAR *VAR_7;
 UINT VAR_8;
 IPV4_PSEUDO_HEADER *VAR_9;
 USHORT VAR_10;
 bool VAR_11 = 0;
 UCHAR VAR_12[1600];

 if (VAR_4 == ((void*)0) && VAR_5 != 0)
 {
  return 0;
 }

 if (VAR_6 == 0)
 {
  VAR_6 = VAR_5;
 }

 if (VAR_6 == VAR_0)
 {
  VAR_6 = 0;
 }

 VAR_8 = VAR_5 + sizeof(IPV4_PSEUDO_HEADER);

 if (VAR_8 > sizeof(VAR_12))
 {
  VAR_7 = FUNC_4(VAR_8);

  VAR_11 = 1;
 }
 else
 {
  VAR_7 = VAR_12;
 }

 VAR_9 = (IPV4_PSEUDO_HEADER *)VAR_7;
 VAR_9->SrcIP = VAR_1;
 VAR_9->DstIP = VAR_2;
 VAR_9->PacketLength = FUNC_1(VAR_6);
 VAR_9->Protocol = VAR_3;
 VAR_9->Reserved = 0;

 if (VAR_5 >= 1)
 {
  FUNC_0(((UCHAR *)VAR_7) + sizeof(IPV4_PSEUDO_HEADER), VAR_4, VAR_5);
 }

 VAR_10 = FUNC_3(VAR_7, VAR_8);

 if (VAR_11)
 {
  FUNC_2(VAR_7);
 }

 return VAR_10;
}
