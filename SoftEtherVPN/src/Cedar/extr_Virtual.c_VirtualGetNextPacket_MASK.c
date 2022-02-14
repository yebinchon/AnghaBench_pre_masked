
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_6__* SendQueue; int Now; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT ;
struct TYPE_14__ {scalar_t__ num_item; } ;
struct TYPE_13__ {scalar_t__ Size; void* Buf; } ;
typedef TYPE_2__ BLOCK ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

UINT FUNC_8(VH *VAR_0, void **VAR_1)
{
 UINT VAR_2 = 0;

START:

 FUNC_2(VAR_0->SendQueue);
 {
  BLOCK *VAR_3 = FUNC_1(VAR_0->SendQueue);

  if (VAR_3 != ((void*)0))
  {

   VAR_2 = VAR_3->Size;
   *VAR_1 = VAR_3->Buf;

   FUNC_0(VAR_3);
  }
 }
 FUNC_5(VAR_0->SendQueue);

 if (VAR_2 == 0)
 {
  FUNC_3(VAR_0);
  {
   VAR_0->Now = FUNC_4();

   FUNC_7(VAR_0);
  }
  FUNC_6(VAR_0);
  if (VAR_0->SendQueue->num_item != 0)
  {
   goto START;
  }
 }

 return VAR_2;
}
