
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UCHAR ;
struct TYPE_5__ {int Size; int Buf; } ;
typedef int SSTP_ATTRIBUTE ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,scalar_t__*,int) ;

SSTP_ATTRIBUTE *FUNC_4(UCHAR VAR_2, UCHAR *VAR_3)
{
 SSTP_ATTRIBUTE *VAR_4;
 UCHAR VAR_5;
 BUF *VAR_6 = FUNC_1();

 VAR_5 = 0;
 FUNC_3(VAR_6, &VAR_5, 1);
 FUNC_3(VAR_6, &VAR_5, 1);
 FUNC_3(VAR_6, &VAR_5, 1);
 FUNC_3(VAR_6, &VAR_2, 1);

 FUNC_3(VAR_6, VAR_3, VAR_1);

 VAR_4 = FUNC_2(VAR_0, VAR_6->Buf, VAR_6->Size);

 FUNC_0(VAR_6);

 return VAR_4;
}
