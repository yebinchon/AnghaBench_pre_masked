
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nsc_gpio_ops {int (* gpio_config ) (unsigned int,int ,int ) ;int (* gpio_current ) (unsigned int) ;int (* gpio_get ) (unsigned int) ;int dev; } ;


 int FUNC_0 (int ,char*,unsigned int,int,char*,char*,char*,char*,char*,char*,char*,int ,int ) ;
 int FUNC_1 (unsigned int,int ,int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;

void FUNC_4(struct nsc_gpio_ops *VAR_0, unsigned VAR_1)
{

 u32 VAR_2 = VAR_0->gpio_config(VAR_1, ~0, 0);


 FUNC_0(VAR_0->dev, "io%02u: 0x%04x %s %s %s %s %s %s %s\tio:%d/%d\n",
   VAR_1, VAR_2,
   (VAR_2 & 1) ? "OE" : "TS",
   (VAR_2 & 2) ? "PP" : "OD",
   (VAR_2 & 4) ? "PUE" : "PUD",
   (VAR_2 & 8) ? "LOCKED" : "",
   (VAR_2 & 16) ? "LEVEL" : "EDGE",
   (VAR_2 & 32) ? "HI" : "LO",
   (VAR_2 & 64) ? "DEBOUNCE" : "",

   VAR_0->gpio_get(VAR_1), VAR_0->gpio_current(VAR_1));
}
