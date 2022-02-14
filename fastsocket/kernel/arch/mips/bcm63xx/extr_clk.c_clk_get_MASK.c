
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk {int dummy; } ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 struct clk* FUNC_1 (int ) ;
 struct clk VAR_1 ;
 struct clk VAR_2 ;
 struct clk VAR_3 ;
 struct clk VAR_4 ;
 struct clk VAR_5 ;
 struct clk VAR_6 ;
 struct clk VAR_7 ;
 int FUNC_2 (char const*,char*) ;

struct clk *FUNC_3(struct device *VAR_8, const char *VAR_9)
{
 if (!FUNC_2(VAR_9, "enet0"))
  return &VAR_1;
 if (!FUNC_2(VAR_9, "enet1"))
  return &VAR_2;
 if (!FUNC_2(VAR_9, "ephy"))
  return &VAR_3;
 if (!FUNC_2(VAR_9, "usbh"))
  return &VAR_7;
 if (!FUNC_2(VAR_9, "spi"))
  return &VAR_6;
 if (!FUNC_2(VAR_9, "periph"))
  return &VAR_5;
 if (FUNC_0() && !FUNC_2(VAR_9, "pcm"))
  return &VAR_4;
 return FUNC_1(-VAR_0);
}
