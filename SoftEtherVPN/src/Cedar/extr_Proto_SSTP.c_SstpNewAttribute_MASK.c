
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_4__ {int DataSize; int Data; int AttributeId; } ;
typedef TYPE_1__ SSTP_ATTRIBUTE ;


 int FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int) ;

SSTP_ATTRIBUTE *FUNC_2(UCHAR VAR_0, UCHAR *VAR_1, UINT VAR_2)
{
 SSTP_ATTRIBUTE *VAR_3 = FUNC_1(sizeof(SSTP_ATTRIBUTE));

 VAR_3->AttributeId = VAR_0;
 VAR_3->Data = FUNC_0(VAR_1, VAR_2);
 VAR_3->DataSize = VAR_2;

 return VAR_3;
}
