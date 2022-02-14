
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbduxsub {int numOfInBuffers; TYPE_1__* interface; scalar_t__* urbIn; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct usbduxsub *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2 = 0;

 if (VAR_0 && VAR_0->urbIn) {
  for (VAR_1 = 0; VAR_1 < VAR_0->numOfInBuffers; VAR_1++) {
   if (VAR_0->urbIn[VAR_1]) {


    FUNC_1(VAR_0->urbIn[VAR_1]);
   }
   FUNC_0(&VAR_0->interface->dev,
    "comedi: usbdux: unlinked InURB %d, err=%d\n",
    VAR_1, VAR_2);
  }
 }
 return VAR_2;
}
