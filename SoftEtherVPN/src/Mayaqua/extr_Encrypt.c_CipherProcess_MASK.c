
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_3__ {int Ctx; int Encrypt; scalar_t__ IsNullCipher; } ;
typedef TYPE_1__ CIPHER ;


 int FUNC_0 (void*,void*,int) ;
 scalar_t__ FUNC_1 (int ,int *,int*) ;
 scalar_t__ FUNC_2 (int ,int *,int *,void*,int ) ;
 scalar_t__ FUNC_3 (int ,void*,int*,void*,int) ;

UINT FUNC_4(CIPHER *VAR_0, void *VAR_1, void *VAR_2, void *VAR_3, UINT VAR_4)
{
 int VAR_5 = VAR_4;
 int VAR_6 = 0;
 if (VAR_0 != ((void*)0) && VAR_0->IsNullCipher)
 {
  if (VAR_2 != VAR_3)
  {
   FUNC_0(VAR_2, VAR_3, VAR_4);
  }
  return VAR_4;
 }

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == 0)
 {
  return 0;
 }

 if (FUNC_2(VAR_0->Ctx, ((void*)0), ((void*)0), VAR_1, VAR_0->Encrypt) == 0)
 {
  return 0;
 }

 if (FUNC_3(VAR_0->Ctx, VAR_2, &VAR_5, VAR_3, VAR_4) == 0)
 {
  return 0;
 }

 if (FUNC_1(VAR_0->Ctx, ((UCHAR *)VAR_2) + (UINT)VAR_5, &VAR_6) == 0)
 {
  return 0;
 }

 return VAR_5 + VAR_6;
}
