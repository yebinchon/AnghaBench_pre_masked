
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
typedef scalar_t__ UCHAR ;
struct TYPE_3__ {int TotalLength; int DataSize; scalar_t__* Data; scalar_t__ AttributeId; } ;
typedef TYPE_1__ SSTP_ATTRIBUTE ;
typedef int BUF ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,scalar_t__*,int) ;

BUF *FUNC_3(SSTP_ATTRIBUTE *VAR_0)
{
 UCHAR VAR_1;
 USHORT VAR_2;
 BUF *VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_1();


 VAR_1 = 0;
 FUNC_2(VAR_3, &VAR_1, sizeof(UCHAR));


 VAR_1 = VAR_0->AttributeId;
 FUNC_2(VAR_3, &VAR_1, sizeof(UCHAR));


 VAR_0->TotalLength = VAR_0->DataSize + 4;
 VAR_2 = (USHORT)VAR_0->TotalLength;
 VAR_2 = FUNC_0(VAR_2);
 FUNC_2(VAR_3, &VAR_2, sizeof(USHORT));


 FUNC_2(VAR_3, VAR_0->Data, VAR_0->DataSize);

 return VAR_3;
}
