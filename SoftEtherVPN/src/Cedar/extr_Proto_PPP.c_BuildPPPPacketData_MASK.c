
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int USHORT ;
typedef int UCHAR ;
struct TYPE_3__ {int* Data; int DataSize; int Lcp; scalar_t__ IsControl; int Protocol; } ;
typedef TYPE_1__ PPP_PACKET ;
typedef int BUF ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int*,int) ;
 int FUNC_6 (int *,int *) ;

BUF *FUNC_7(PPP_PACKET *VAR_0)
{
 BUF *VAR_1;
 UCHAR VAR_2;
 USHORT VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_3();


 VAR_2 = 0xff;
 FUNC_5(VAR_1, &VAR_2, 1);


 VAR_2 = 0x03;
 FUNC_5(VAR_1, &VAR_2, 1);


 VAR_3 = FUNC_1(VAR_0->Protocol);
 FUNC_5(VAR_1, &VAR_3, 2);

 if (VAR_0->IsControl)
 {

  BUF *VAR_4 = FUNC_0(VAR_0->Lcp);

  FUNC_6(VAR_1, VAR_4);

  FUNC_2(VAR_4);
 }
 else
 {

  FUNC_5(VAR_1, VAR_0->Data, VAR_0->DataSize);
 }

 FUNC_4(VAR_1, 0, 0);

 return VAR_1;
}
