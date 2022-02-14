
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_4__ {int IsControl; int DataSize; int Data; } ;
typedef TYPE_1__ SSTP_PACKET ;


 int FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int) ;

SSTP_PACKET *FUNC_2(UCHAR *VAR_0, UINT VAR_1)
{
 SSTP_PACKET *VAR_2 = FUNC_1(sizeof(SSTP_PACKET));

 VAR_2->IsControl = 0;
 VAR_2->Data = FUNC_0(VAR_0, VAR_1);
 VAR_2->DataSize = VAR_1;

 return VAR_2;
}
