
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct musb {int mregs; TYPE_1__* config; } ;
struct TYPE_2__ {int gpio_vrsel; } ;


 int FUNC_0 (int,char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct musb*) ;

__attribute__((used)) static void FUNC_4(struct musb *VAR_1, int VAR_2)
{
 if (VAR_2)
  FUNC_1(VAR_1->config->gpio_vrsel, 1);
 else
  FUNC_1(VAR_1->config->gpio_vrsel, 0);

 FUNC_0(1, "VBUS %s, devctl %02x "
                                    "\n",
  FUNC_3(VAR_1),
  FUNC_2(VAR_1->mregs, VAR_0));
}
