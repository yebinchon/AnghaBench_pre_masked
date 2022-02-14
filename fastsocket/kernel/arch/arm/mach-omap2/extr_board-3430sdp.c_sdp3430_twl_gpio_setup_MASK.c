
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {unsigned int gpio_cd; int dev; } ;


 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,char*) ;
 TYPE_1__* VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_4,
  unsigned VAR_5, unsigned VAR_6)
{



 VAR_0[0].gpio_cd = VAR_5 + 0;
 VAR_0[1].gpio_cd = VAR_5 + 1;
 FUNC_2(VAR_0);




 VAR_1.dev = VAR_0[0].dev;
 VAR_3.dev = VAR_0[0].dev;
 VAR_2.dev = VAR_0[1].dev;


 FUNC_1(VAR_5 + 7, "sub_lcd_en_bkl");
 FUNC_0(VAR_5 + 7, 0);


 FUNC_1(VAR_5 + 15, "sub_lcd_nRST");
 FUNC_0(VAR_5 + 15, 0);

 return 0;
}
