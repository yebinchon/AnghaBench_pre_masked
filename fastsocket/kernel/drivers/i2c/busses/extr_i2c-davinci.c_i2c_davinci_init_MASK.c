
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct davinci_i2c_platform_data {int bus_freq; int bus_delay; } ;
struct davinci_i2c_dev {TYPE_1__* dev; int clk; } ;
struct TYPE_2__ {struct davinci_i2c_platform_data* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int ) ;
 struct davinci_i2c_platform_data VAR_8 ;
 int FUNC_2 (struct davinci_i2c_dev*,int ) ;
 int FUNC_3 (struct davinci_i2c_dev*,int ,int) ;
 int FUNC_4 (TYPE_1__*,char*,int,...) ;

__attribute__((used)) static int FUNC_5(struct davinci_i2c_dev *VAR_9)
{
 struct davinci_i2c_platform_data *VAR_10 = VAR_9->dev->platform_data;
 u16 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16 = FUNC_1(VAR_9->clk);
 u16 VAR_17;

 if (!VAR_10)
  VAR_10 = &VAR_8;


 VAR_17 = FUNC_2(VAR_9, VAR_4);
 FUNC_0(VAR_17, VAR_3, 0);
 FUNC_3(VAR_9, VAR_4, VAR_17);
 VAR_11 = (VAR_16 / 7000000) - 1;
 if ((VAR_16 / (VAR_11 + 1)) > 12000000)
  VAR_11++;
 VAR_13 = (VAR_11 >= 2) ? 5 : 7 - VAR_11;

 VAR_12 = ((VAR_16 / (VAR_11 + 1)) / (VAR_10->bus_freq * 1000)) - (VAR_13 << 1);
 VAR_14 = VAR_12 >> 1;
 VAR_15 = VAR_12 - VAR_14;

 FUNC_3(VAR_9, VAR_6, VAR_11);
 FUNC_3(VAR_9, VAR_0, VAR_14);
 FUNC_3(VAR_9, VAR_1, VAR_15);




 FUNC_3(VAR_9, VAR_5, 0x08);

 FUNC_4(VAR_9->dev, "input_clock = %d, CLK = %d\n", VAR_16, VAR_12);
 FUNC_4(VAR_9->dev, "PSC  = %d\n",
  FUNC_2(VAR_9, VAR_6));
 FUNC_4(VAR_9->dev, "CLKL = %d\n",
  FUNC_2(VAR_9, VAR_1));
 FUNC_4(VAR_9->dev, "CLKH = %d\n",
  FUNC_2(VAR_9, VAR_0));
 FUNC_4(VAR_9->dev, "bus_freq = %dkHz, bus_delay = %d\n",
  VAR_10->bus_freq, VAR_10->bus_delay);


 VAR_17 = FUNC_2(VAR_9, VAR_4);
 FUNC_0(VAR_17, VAR_3, 1);
 FUNC_3(VAR_9, VAR_4, VAR_17);


 FUNC_3(VAR_9, VAR_2, VAR_7);

 return 0;
}
