
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int type ;
typedef int size_or_value ;
typedef int af_bit ;
typedef int USHORT ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_3__ {int Type; int Value; } ;
typedef TYPE_1__ IKE_PACKET_TRANSFORM_VALUE ;
typedef int BUF ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int*,int) ;

BUF *FUNC_4(IKE_PACKET_TRANSFORM_VALUE *VAR_0)
{
 BUF *VAR_1;
 UCHAR VAR_2, VAR_3;
 USHORT VAR_4;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = VAR_0->Type;

 if (VAR_0->Value >= 65536)
 {

  VAR_2 = 0;
  VAR_4 = FUNC_0(sizeof(UINT));
 }
 else
 {

  VAR_2 = 0x80;
  VAR_4 = FUNC_0((USHORT)VAR_0->Value);
 }

 VAR_1 = FUNC_2();
 FUNC_3(VAR_1, &VAR_2, sizeof(VAR_2));
 FUNC_3(VAR_1, &VAR_3, sizeof(VAR_3));
 FUNC_3(VAR_1, &VAR_4, sizeof(VAR_4));

 if (VAR_2 == 0)
 {
  UINT VAR_5 = FUNC_1(VAR_0->Value);
  FUNC_3(VAR_1, &VAR_5, sizeof(UINT));
 }

 return VAR_1;
}
