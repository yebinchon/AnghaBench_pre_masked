
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int USHORT ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_5__ {int TotalLength; int DataSize; int Data; int AttributeId; } ;
typedef TYPE_1__ SSTP_ATTRIBUTE ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;

SSTP_ATTRIBUTE *FUNC_4(UCHAR *VAR_0, UINT VAR_1)
{
 SSTP_ATTRIBUTE *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == 0)
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_3(sizeof(SSTP_ATTRIBUTE));

 if (VAR_1 < 4)
 {
  FUNC_2(VAR_2);
  return ((void*)0);
 }

 VAR_0++;
 VAR_1--;


 VAR_2->AttributeId = *((UCHAR *)VAR_0);
 VAR_0++;
 VAR_1--;


 VAR_2->TotalLength = FUNC_1(VAR_0) & 0xFFF;
 VAR_0 += sizeof(USHORT);
 VAR_1 -= sizeof(USHORT);

 if (VAR_2->TotalLength < 4)
 {

  FUNC_2(VAR_2);
  return ((void*)0);
 }

 VAR_2->DataSize = VAR_2->TotalLength - 4;
 if (VAR_2->DataSize > VAR_1)
 {

  FUNC_2(VAR_2);
  return ((void*)0);
 }

 VAR_2->Data = FUNC_0(VAR_0, VAR_2->DataSize);

 return VAR_2;
}
