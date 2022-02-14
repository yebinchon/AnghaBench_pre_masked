
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stmp3xxx_rtc_data {int irq_count; int rtc; scalar_t__ io; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 struct stmp3xxx_rtc_data* FUNC_1 (void*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_7, void *VAR_8)
{
 struct stmp3xxx_rtc_data *VAR_9 = FUNC_1(VAR_8);
 u32 VAR_10;
 u32 VAR_11 = 0;

 VAR_10 = FUNC_0(VAR_9->io + VAR_2) &
   (VAR_0 | VAR_1);

 if (VAR_10 & VAR_0) {
  FUNC_3(VAR_0,
    VAR_9->io + VAR_2);
  VAR_11 |= VAR_4 | VAR_5;
 }

 if (VAR_10 & VAR_1) {
  FUNC_3(VAR_1,
    VAR_9->io + VAR_2);
  if (++VAR_9->irq_count % 1000 == 0) {
   VAR_11 |= VAR_6 | VAR_5;
   VAR_9->irq_count = 0;
  }
 }

 if (VAR_11)
  FUNC_2(VAR_9->rtc, 1, VAR_11);

 return VAR_3;
}
