
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct powermate_device {void* configcr; int configcr_dma; void* data; int data_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct usb_device*,int,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct usb_device *VAR_2, struct powermate_device *VAR_3)
{
 VAR_3->data = FUNC_0(VAR_2, VAR_1,
        VAR_0, &VAR_3->data_dma);
 if (!VAR_3->data)
  return -1;

 VAR_3->configcr = FUNC_0(VAR_2, sizeof(*(VAR_3->configcr)),
     VAR_0, &VAR_3->configcr_dma);
 if (!VAR_3->configcr)
  return -1;

 return 0;
}
