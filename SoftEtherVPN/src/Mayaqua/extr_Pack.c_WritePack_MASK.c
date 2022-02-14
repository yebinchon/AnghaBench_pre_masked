
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int elements; } ;
typedef TYPE_1__ PACK ;
typedef int ELEMENT ;
typedef int BUF ;


 int * FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(BUF *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }


 FUNC_2(VAR_0, FUNC_1(VAR_1->elements));


 for (VAR_2 = 0;VAR_2 < FUNC_1(VAR_1->elements);VAR_2++)
 {
  ELEMENT *VAR_3 = FUNC_0(VAR_1->elements, VAR_2);
  FUNC_3(VAR_0, VAR_3);
 }
}
