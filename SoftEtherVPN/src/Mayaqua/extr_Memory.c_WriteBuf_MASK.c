
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_4__ {scalar_t__ Current; scalar_t__ Size; int * Buf; } ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (int *,void*,scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

void FUNC_3(BUF *VAR_1, void *VAR_2, UINT VAR_3)
{
 UINT VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == 0)
 {
  return;
 }

 VAR_4 = VAR_1->Current + VAR_3;
 if (VAR_4 > VAR_1->Size)
 {

  FUNC_0(VAR_1, VAR_4);
 }
 if (VAR_1->Buf != ((void*)0))
 {
  FUNC_1((UCHAR *)VAR_1->Buf + VAR_1->Current, VAR_2, VAR_3);
 }
 VAR_1->Current += VAR_3;
 VAR_1->Size = VAR_4;


 FUNC_2(VAR_0);
}
