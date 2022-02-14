
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mask; int set; } ;
struct sm501_initdata {scalar_t__ mclk; scalar_t__ m1xclk; int gpio_high; int gpio_low; int misc_timing; TYPE_1__ misc_control; } ;
struct sm501_devdata {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (struct sm501_devdata*,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct sm501_devdata *VAR_5,
       struct sm501_initdata *VAR_6)
{
 FUNC_2(VAR_5->dev,
      VAR_6->misc_control.set,
      VAR_6->misc_control.mask);

 FUNC_1(VAR_5, VAR_4, &VAR_6->misc_timing);
 FUNC_1(VAR_5, VAR_2, &VAR_6->gpio_low);
 FUNC_1(VAR_5, VAR_3, &VAR_6->gpio_high);

 if (VAR_6->m1xclk) {
  FUNC_0(VAR_5->dev, "setting M1XCLK to %ld\n", VAR_6->m1xclk);
  FUNC_3(VAR_5->dev, VAR_0, VAR_6->m1xclk);
 }

 if (VAR_6->mclk) {
  FUNC_0(VAR_5->dev, "setting MCLK to %ld\n", VAR_6->mclk);
  FUNC_3(VAR_5->dev, VAR_1, VAR_6->mclk);
 }

}
