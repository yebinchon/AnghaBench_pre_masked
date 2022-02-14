
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smsusb_device_t {TYPE_1__* surbs; int coredev; } ;
struct TYPE_2__ {int * cb; int urb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct smsusb_device_t *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_1(&VAR_1->surbs[VAR_2].urb);

  if (VAR_1->surbs[VAR_2].cb) {
   FUNC_0(VAR_1->coredev, VAR_1->surbs[VAR_2].cb);
   VAR_1->surbs[VAR_2].cb = ((void*)0);
  }
 }
}
