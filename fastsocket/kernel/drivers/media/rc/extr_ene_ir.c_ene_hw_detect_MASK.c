
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ene_device {int pll_freq; int rx_period_adjust; scalar_t__ hw_revision; int hw_use_gpio_0a; int hw_learning_and_tx_capable; int hw_extra_buffer; int hw_fan_input; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct ene_device*,int ,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct ene_device*,int ) ;
 int FUNC_3 (struct ene_device*,int ,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_20 ;

__attribute__((used)) static int FUNC_5(struct ene_device *VAR_21)
{
 u8 VAR_22, VAR_23;
 u8 VAR_24, VAR_25;
 u8 VAR_26, VAR_27;

 FUNC_0(VAR_21, VAR_3, VAR_4);
 VAR_22 = FUNC_2(VAR_21, VAR_5);
 VAR_23 = FUNC_2(VAR_21, VAR_6);
 FUNC_3(VAR_21, VAR_3, VAR_4);

 VAR_24 = FUNC_2(VAR_21, VAR_2);
 VAR_25 = FUNC_2(VAR_21, VAR_16);

 VAR_21->pll_freq = (FUNC_2(VAR_21, VAR_17) << 4) +
  (FUNC_2(VAR_21, VAR_18) >> 4);

 if (VAR_20 != VAR_1)
  VAR_21->rx_period_adjust =
   VAR_21->pll_freq == VAR_0 ? 2 : 4;

 if (VAR_24 == 0xFF) {
  FUNC_4("device seems to be disabled");
  FUNC_4("send a mail to lirc-list@lists.sourceforge.net");
  FUNC_4("please attach output of acpidump and dmidecode");
  return -VAR_19;
 }

 FUNC_1("chip is 0x%02x%02x - kbver = 0x%02x, rev = 0x%02x",
  VAR_22, VAR_23, VAR_25, VAR_24);

 FUNC_1("PLL freq = %d", VAR_21->pll_freq);

 if (VAR_22 == 0x33) {
  FUNC_4("chips 0x33xx aren't supported");
  return -VAR_19;
 }

 if (VAR_22 == 0x39 && VAR_23 == 0x26 && VAR_24 == 0xC0) {
  VAR_21->hw_revision = VAR_14;
  FUNC_1("KB3926C detected");
 } else if (VAR_25 == 0x24 && VAR_24 == 0xC0) {
  VAR_21->hw_revision = VAR_13;
  FUNC_1("KB3926B detected");
 } else {
  VAR_21->hw_revision = VAR_15;
  FUNC_1("KB3926D or higher detected");
 }


 if (VAR_21->hw_revision < VAR_14)
  return 0;

 VAR_27 = FUNC_2(VAR_21, VAR_7);
 VAR_26 = FUNC_2(VAR_21, VAR_9);

 FUNC_1("Firmware regs: %02x %02x", VAR_27, VAR_26);

 VAR_21->hw_use_gpio_0a = !!(VAR_26 & VAR_11);
 VAR_21->hw_learning_and_tx_capable = !!(VAR_26 & VAR_12);
 VAR_21->hw_extra_buffer = !!(VAR_27 & VAR_8);

 if (VAR_21->hw_learning_and_tx_capable)
  VAR_21->hw_fan_input = !!(VAR_26 & VAR_10);

 FUNC_1("Hardware features:");

 if (VAR_21->hw_learning_and_tx_capable) {
  FUNC_1("* Supports transmitting & learning mode");
  FUNC_1("   This feature is rare and therefore,");
  FUNC_1("   you are welcome to test it,");
  FUNC_1("   and/or contact the author via:");
  FUNC_1("   lirc-list@lists.sourceforge.net");
  FUNC_1("   or maximlevitsky@gmail.com");

  FUNC_1("* Uses GPIO %s for IR raw input",
   VAR_21->hw_use_gpio_0a ? "40" : "0A");

  if (VAR_21->hw_fan_input)
   FUNC_1("* Uses unused fan feedback input as source"
     " of demodulated IR data");
 }

 if (!VAR_21->hw_fan_input)
  FUNC_1("* Uses GPIO %s for IR demodulated input",
   VAR_21->hw_use_gpio_0a ? "0A" : "40");

 if (VAR_21->hw_extra_buffer)
  FUNC_1("* Uses new style input buffer");
 return 0;
}
