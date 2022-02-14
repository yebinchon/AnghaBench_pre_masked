
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf50633_mbc {scalar_t__ adapter_active; scalar_t__ adapter_online; scalar_t__ usb_active; scalar_t__ usb_online; } ;
struct pcf50633 {int mbc_pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pcf50633_mbc* FUNC_0 (int ) ;

int FUNC_1(struct pcf50633 *VAR_4)
{
 struct pcf50633_mbc *VAR_5 = FUNC_0(VAR_4->mbc_pdev);
 int VAR_6 = 0;

 if (VAR_5->usb_online)
  VAR_6 |= VAR_3;
 if (VAR_5->usb_active)
  VAR_6 |= VAR_2;
 if (VAR_5->adapter_online)
  VAR_6 |= VAR_1;
 if (VAR_5->adapter_active)
  VAR_6 |= VAR_0;

 return VAR_6;
}
