
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_3__ {int Size; int dh; } ;
typedef TYPE_1__ DH_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (void*,int) ;
 int * FUNC_2 (void*,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (void*,int *,int ) ;
 int FUNC_5 (void*,int) ;

bool FUNC_6(DH_CTX *VAR_0, void *VAR_1, void *VAR_2, UINT VAR_3)
{
 int VAR_4;
 BIGNUM *VAR_5;
 bool VAR_6 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }
 if (VAR_3 > VAR_0->Size)
 {
  return 0;
 }

 VAR_5 = FUNC_1(VAR_2, VAR_3);

 VAR_4 = FUNC_4(VAR_1, VAR_5, VAR_0->dh);

 if (VAR_4 == VAR_0->Size)
 {
  VAR_6 = 1;
 }
 else if ((UINT)VAR_4 < VAR_0->Size)
 {
  UCHAR *VAR_7 = FUNC_2(VAR_1, VAR_4);

  FUNC_5(VAR_1, VAR_0->Size);

  FUNC_3(((UCHAR *)VAR_1) + (VAR_0->Size - VAR_4), VAR_7, VAR_4);

  VAR_6 = 1;
 }

 FUNC_0(VAR_5);

 return VAR_6;
}
