
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_device {int features; } ;




 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int,int ) ;

void FUNC_1(struct virtio_device *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = VAR_1; VAR_3 < VAR_0; VAR_3++) {
  switch (VAR_3) {
  case 128:
   break;
  case 129:
   break;
  default:

   FUNC_0(VAR_3, VAR_2->features);
  }
 }
}
