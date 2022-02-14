
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int gpio_dir; int gpio_val; } ;
struct dib8000_state {TYPE_1__ cfg; } ;


 void* FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*,int,int) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static int FUNC_3(struct dib8000_state *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 VAR_0->cfg.gpio_dir = FUNC_0(VAR_0, 1029);
 VAR_0->cfg.gpio_dir &= ~(1 << VAR_1);
 VAR_0->cfg.gpio_dir |= (VAR_2 & 0x1) << VAR_1;
 FUNC_1(VAR_0, 1029, VAR_0->cfg.gpio_dir);

 VAR_0->cfg.gpio_val = FUNC_0(VAR_0, 1030);
 VAR_0->cfg.gpio_val &= ~(1 << VAR_1);
 VAR_0->cfg.gpio_val |= (VAR_3 & 0x01) << VAR_1;
 FUNC_1(VAR_0, 1030, VAR_0->cfg.gpio_val);

 FUNC_2("gpio dir: %x: gpio val: %x", VAR_0->cfg.gpio_dir, VAR_0->cfg.gpio_val);

 return 0;
}
