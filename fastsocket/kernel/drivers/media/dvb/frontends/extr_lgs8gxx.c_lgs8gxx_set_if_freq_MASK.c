
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct lgs8gxx_state {TYPE_1__* config; } ;
struct TYPE_2__ {scalar_t__ if_clk_freq; scalar_t__ prod; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct lgs8gxx_state*,int,int) ;

__attribute__((used)) static int FUNC_3(struct lgs8gxx_state *VAR_1, u32 VAR_2 )
{
 u64 VAR_3;
 u32 VAR_4;
 u32 VAR_5;

 VAR_5 = VAR_1->config->if_clk_freq;

 VAR_3 = VAR_2;
 if (VAR_2 != 0) {
  VAR_3 <<= 32;
  if (VAR_5 != 0)
   FUNC_0(VAR_3, VAR_5);
  VAR_4 = VAR_3 & 0xFFFFFFFF;
  FUNC_1("Set IF Freq to %dkHz\n", VAR_2);
 } else {
  VAR_4 = 0;
  FUNC_1("Set IF Freq to baseband\n");
 }
 FUNC_1("AFC_INIT_FREQ = 0x%08X\n", VAR_4);

 if (VAR_1->config->prod == VAR_0) {
  FUNC_2(VAR_1, 0x08, 0xFF & (VAR_4));
  FUNC_2(VAR_1, 0x09, 0xFF & (VAR_4 >> 8));
  FUNC_2(VAR_1, 0x0A, 0xFF & (VAR_4 >> 16));
  FUNC_2(VAR_1, 0x0B, 0xFF & (VAR_4 >> 24));
 } else {
  FUNC_2(VAR_1, 0x09, 0xFF & (VAR_4));
  FUNC_2(VAR_1, 0x0A, 0xFF & (VAR_4 >> 8));
  FUNC_2(VAR_1, 0x0B, 0xFF & (VAR_4 >> 16));
  FUNC_2(VAR_1, 0x0C, 0xFF & (VAR_4 >> 24));
 }

 return 0;
}
