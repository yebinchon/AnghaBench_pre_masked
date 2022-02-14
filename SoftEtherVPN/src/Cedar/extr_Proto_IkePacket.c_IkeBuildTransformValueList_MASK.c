
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int LIST ;
typedef int IKE_PACKET_TRANSFORM_VALUE ;
typedef int BUF ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int *) ;

BUF *FUNC_6(LIST *VAR_0)
{
 BUF *VAR_1;
 UINT VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_4();

 for (VAR_2 = 0;VAR_2 < FUNC_3(VAR_0);VAR_2++)
 {
  IKE_PACKET_TRANSFORM_VALUE *VAR_3 = FUNC_2(VAR_0, VAR_2);
  BUF *VAR_4 = FUNC_1(VAR_3);

  FUNC_5(VAR_1, VAR_4);

  FUNC_0(VAR_4);
 }

 return VAR_1;
}
