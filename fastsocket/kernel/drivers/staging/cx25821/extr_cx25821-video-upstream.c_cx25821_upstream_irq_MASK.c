
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sram_channel {int int_stat; int int_mstat; } ;
struct cx25821_dev {struct sram_channel* sram_channels; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct cx25821_dev*) ;
 int FUNC_2 (struct cx25821_dev*,int,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct cx25821_dev *VAR_3 = VAR_2;
 u32 VAR_4, VAR_5;
 int VAR_6 = 0;
 int VAR_7 = 0;
 struct sram_channel *VAR_8;

 if (!VAR_3)
  return -1;

 VAR_7 = VAR_0;

 VAR_8 = &VAR_3->sram_channels[VAR_7];

 VAR_4 = FUNC_3(VAR_8->int_mstat);
 VAR_5 = FUNC_3(VAR_8->int_stat);


 if (VAR_5) {
  VAR_6 =
      FUNC_2(VAR_3, VAR_7, VAR_5);
 }

 if (VAR_6 < 0) {
  FUNC_1(VAR_3);
 } else {
  VAR_6 += VAR_6;
 }

 return FUNC_0(VAR_6);
}
