
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct lgs8gxx_state {TYPE_1__* config; } ;
struct TYPE_2__ {scalar_t__ prod; int if_clk_freq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct lgs8gxx_state*,int,int*) ;

__attribute__((used)) static int FUNC_2(struct lgs8gxx_state *VAR_1)
{
 u64 VAR_2;
 u32 VAR_3 = 0;
 u8 VAR_4, VAR_5;
 int VAR_6;

 if (VAR_1->config->prod == VAR_0)
  VAR_4 = 0x23;
 else
  VAR_4 = 0x48;

 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  FUNC_1(VAR_1, VAR_4, &VAR_5);
  VAR_3 <<= 8;
  VAR_3 |= VAR_5;
  VAR_4--;
 }

 VAR_2 = VAR_3;
 VAR_2 *= VAR_1->config->if_clk_freq;
 VAR_2 >>= 32;
 FUNC_0("AFC = %u kHz\n", (u32)VAR_2);
 return 0;
}
