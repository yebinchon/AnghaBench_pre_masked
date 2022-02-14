
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_data {int front; int endpoint_addr; TYPE_1__* pd; scalar_t__* urb_array; } ;
struct TYPE_2__ {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int ,int ,int ,int,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct video_data *VAR_3)
{
 if (VAR_3->urb_array[0])
  return 0;

 FUNC_0(VAR_3->urb_array, VAR_1,
   VAR_3->pd->udev, VAR_3->endpoint_addr,
   0x2000, VAR_0,
   VAR_2, VAR_3->front);
 return 0;
}
