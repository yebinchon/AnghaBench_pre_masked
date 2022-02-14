
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct urb {int* setup_packet; TYPE_2__* dev; } ;
struct r8a66597_device {int usb_address; size_t root_port; int hub_port; int address; int device_list; scalar_t__ ep_out_toggle; scalar_t__ ep_in_toggle; int state; TYPE_2__* udev; } ;
struct r8a66597 {TYPE_1__* root_hub; int child_device; } ;
struct TYPE_4__ {int speed; int devpath; int dev; } ;
struct TYPE_3__ {struct r8a66597_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct r8a66597_device*) ;
 int FUNC_2 (struct r8a66597*,TYPE_2__*) ;
 int FUNC_3 (struct r8a66597*,int ,size_t*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct r8a66597_device* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct r8a66597*,int ,int ,int ,int ,size_t) ;

__attribute__((used)) static int FUNC_9(struct r8a66597 *VAR_3,
    struct urb *VAR_4, u8 VAR_5)
{
 struct r8a66597_device *VAR_6;
 int VAR_7 = VAR_4->setup_packet[2];

 VAR_6 = FUNC_6(sizeof(struct r8a66597_device), VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 FUNC_1(&VAR_4->dev->dev, VAR_6);
 VAR_6->udev = VAR_4->dev;
 VAR_6->address = VAR_5;
 VAR_6->usb_address = VAR_7;
 VAR_6->state = VAR_2;
 VAR_6->ep_in_toggle = 0;
 VAR_6->ep_out_toggle = 0;
 FUNC_0(&VAR_6->device_list);
 FUNC_7(&VAR_6->device_list, &VAR_3->child_device);

 FUNC_3(VAR_3, VAR_4->dev->devpath,
   &VAR_6->root_port, &VAR_6->hub_port);
 if (!FUNC_5(VAR_4->dev->devpath))
  VAR_3->root_hub[VAR_6->root_port].dev = VAR_6;

 FUNC_8(VAR_3, VAR_6->address,
         FUNC_4(VAR_4->dev->speed),
         FUNC_2(VAR_3, VAR_4->dev),
         VAR_6->hub_port, VAR_6->root_port);

 return 0;
}
