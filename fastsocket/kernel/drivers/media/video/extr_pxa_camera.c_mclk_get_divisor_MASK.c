
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pxa_camera_dev {unsigned long mclk; unsigned long ciclk; int platform_flags; int clk; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,unsigned long,unsigned long,int) ;
 int FUNC_2 (struct device*,char*,unsigned long) ;

__attribute__((used)) static u32 FUNC_3(struct platform_device *VAR_1,
       struct pxa_camera_dev *VAR_2)
{
 unsigned long VAR_3 = VAR_2->mclk;
 struct device *VAR_4 = &VAR_1->dev;
 u32 VAR_5;
 unsigned long VAR_6;

 VAR_6 = FUNC_0(VAR_2->clk);
 VAR_2->ciclk = VAR_6;


 if (VAR_3 > VAR_6 / 4) {
  VAR_3 = VAR_6 / 4;
  FUNC_2(VAR_4, "Limiting master clock to %lu\n", VAR_3);
 }


 VAR_5 = (VAR_6 + 2 * VAR_3 - 1) / (2 * VAR_3) - 1;


 if (VAR_2->platform_flags & VAR_0)
  VAR_2->mclk = VAR_6 / (2 * (VAR_5 + 1));

 FUNC_1(VAR_4, "LCD clock %luHz, target freq %luHz, divisor %u\n",
  VAR_6, VAR_3, VAR_5);

 return VAR_5;
}
