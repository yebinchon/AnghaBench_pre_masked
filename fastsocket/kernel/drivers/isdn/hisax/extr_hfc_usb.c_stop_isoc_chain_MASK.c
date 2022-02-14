
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ active; int * urb; TYPE_1__* iso; int fifonum; } ;
typedef TYPE_2__ usb_fifo ;
struct TYPE_4__ {int * purb; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(usb_fifo * VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  if (VAR_1->iso[VAR_2].purb) {
   FUNC_0(VAR_0,
       "HFC-S USB: Stopping iso chain for fifo %i.%i",
       VAR_1->fifonum, VAR_2);
   FUNC_2(VAR_1->iso[VAR_2].purb);
   FUNC_1(VAR_1->iso[VAR_2].purb);
   VAR_1->iso[VAR_2].purb = ((void*)0);
  }
 }

 FUNC_2(VAR_1->urb);
 FUNC_1(VAR_1->urb);
 VAR_1->urb = ((void*)0);
 VAR_1->active = 0;
}
