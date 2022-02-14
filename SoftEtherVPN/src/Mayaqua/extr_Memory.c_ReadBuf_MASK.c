
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef void UCHAR ;
struct TYPE_3__ {scalar_t__ Current; scalar_t__ Size; int * Buf; } ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (void*,void*,scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (void*,scalar_t__) ;

UINT FUNC_3(BUF *VAR_1, void *VAR_2, UINT VAR_3)
{
 UINT VAR_4;

 if (VAR_1 == ((void*)0) || VAR_3 == 0)
 {
  return 0;
 }

 if (VAR_1->Buf == ((void*)0))
 {
  FUNC_2(VAR_2, VAR_3);
  return 0;
 }
 VAR_4 = VAR_3;
 if ((VAR_1->Current + VAR_3) >= VAR_1->Size)
 {
  VAR_4 = VAR_1->Size - VAR_1->Current;
  if (VAR_2 != ((void*)0))
  {
   FUNC_2((UCHAR *)VAR_2 + VAR_4, VAR_3 - VAR_4);
  }
 }

 if (VAR_2 != ((void*)0))
 {
  FUNC_0(VAR_2, (UCHAR *)VAR_1->Buf + VAR_1->Current, VAR_4);
 }

 VAR_1->Current += VAR_4;


 FUNC_1(VAR_0);

 return VAR_4;
}
