
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int h ;
typedef scalar_t__ USHORT ;
typedef void* UINT ;
typedef void* UCHAR ;
struct TYPE_17__ {scalar_t__ Size; } ;
struct TYPE_16__ {int Checksum; void* DstIP; void* SrcIP; void* Protocol; void* TimeToLive; int Identification; int TotalLength; } ;
typedef TYPE_1__ IPV4_HEADER ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 TYPE_2__* FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_9 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*,int) ;

BUF *FUNC_11(BUF *VAR_0, UINT VAR_1, UINT VAR_2, UCHAR VAR_3, UCHAR VAR_4)
{
 BUF *VAR_5 = FUNC_5();
 IPV4_HEADER VAR_6;

 if (VAR_4 == 0)
 {
  VAR_4 = 127;
 }


 FUNC_10(&VAR_6, sizeof(VAR_6));
 FUNC_3(&VAR_6, 4);
 FUNC_2(&VAR_6, sizeof(IPV4_HEADER) / 4);
 VAR_6.TotalLength = FUNC_0((USHORT)sizeof(IPV4_HEADER) + VAR_0->Size);
 VAR_6.Identification = FUNC_6();
 VAR_6.TimeToLive = VAR_4;
 VAR_6.Protocol = VAR_3;
 VAR_6.SrcIP = VAR_1;
 VAR_6.DstIP = VAR_2;

 VAR_6.Checksum = FUNC_4(&VAR_6, sizeof(VAR_6));

 FUNC_8(VAR_5, &VAR_6, sizeof(VAR_6));
 FUNC_9(VAR_5, VAR_0);

 FUNC_7(VAR_5);

 FUNC_1(VAR_0);

 return VAR_5;
}
