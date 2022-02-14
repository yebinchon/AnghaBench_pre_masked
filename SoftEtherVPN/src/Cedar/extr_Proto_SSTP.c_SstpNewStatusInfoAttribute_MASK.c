
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_6__ {int Size; int Buf; } ;
typedef int SSTP_ATTRIBUTE ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int VAR_0 ;
 int * FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,scalar_t__*,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;

SSTP_ATTRIBUTE *FUNC_5(UCHAR VAR_1, UINT VAR_2)
{
 SSTP_ATTRIBUTE *VAR_3;
 UCHAR VAR_4;
 BUF *VAR_5 = FUNC_1();

 VAR_4 = 0;
 FUNC_3(VAR_5, &VAR_4, 1);
 FUNC_3(VAR_5, &VAR_4, 1);
 FUNC_3(VAR_5, &VAR_4, 1);
 FUNC_3(VAR_5, &VAR_1, 1);

 FUNC_4(VAR_5, VAR_2);

 VAR_3 = FUNC_2(VAR_0, VAR_5->Buf, VAR_5->Size);

 FUNC_0(VAR_5);

 return VAR_3;
}
