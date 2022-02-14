
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_12__ {scalar_t__ num_item; } ;
struct TYPE_11__ {TYPE_3__* SendQueue; } ;
struct TYPE_10__ {scalar_t__ PacketSize; void* PacketData; } ;
typedef TYPE_1__ PKT ;
typedef TYPE_2__ L3IF ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;

UINT FUNC_5(L3IF *VAR_0, void **VAR_1)
{
 UINT VAR_2 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

START:

 FUNC_3(VAR_0->SendQueue);
 {
  PKT *VAR_3 = FUNC_1(VAR_0->SendQueue);

  if (VAR_3 != ((void*)0))
  {

   VAR_2 = VAR_3->PacketSize;
   *VAR_1 = VAR_3->PacketData;

   FUNC_0(VAR_3);
  }
 }
 FUNC_4(VAR_0->SendQueue);

 if (VAR_2 == 0)
 {

  FUNC_2(VAR_0);


  if (VAR_0->SendQueue->num_item != 0)
  {

   goto START;
  }
 }

 return VAR_2;
}
