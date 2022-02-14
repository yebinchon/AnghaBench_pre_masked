
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sram_channel {int int_stat; int int_mstat; } ;
struct cx25821_dev {size_t _audio_upstream_channel_select; struct sram_channel* sram_channels; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct cx25821_dev*,size_t,scalar_t__) ;
 int FUNC_2 (struct cx25821_dev*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_0, void *VAR_1)
{
 struct cx25821_dev *VAR_2 = VAR_1;
 u32 VAR_3, VAR_4;
 int VAR_5 = 0;
 struct sram_channel *VAR_6;

 if (!VAR_2)
  return -1;

 VAR_6 = &VAR_2->sram_channels[VAR_2->_audio_upstream_channel_select];

 VAR_3 = FUNC_3(VAR_6->int_mstat);
 VAR_4 = FUNC_3(VAR_6->int_stat);


 if (VAR_4) {
  VAR_5 =
      FUNC_1(VAR_2,
            VAR_2->
            _audio_upstream_channel_select,
            VAR_4);
 }

 if (VAR_5 < 0) {
  FUNC_2(VAR_2);
 } else {
  VAR_5 += VAR_5;
 }

 return FUNC_0(VAR_5);
}
