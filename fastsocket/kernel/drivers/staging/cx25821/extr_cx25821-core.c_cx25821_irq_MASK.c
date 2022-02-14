
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cx25821_dev {TYPE_1__* sram_channels; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int int_stat; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct cx25821_dev*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct cx25821_dev *VAR_5 = VAR_4;
 u32 VAR_6, VAR_7;
 u32 VAR_8;
 int VAR_9, VAR_10 = 0;
 u32 VAR_11[8] = { 1, 2, 4, 8, 16, 32, 64, 128 };

 VAR_6 = FUNC_2(VAR_1);
 VAR_7 = FUNC_2(VAR_0);

 if (VAR_6 == 0)
  goto out;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  if (VAR_6 & VAR_11[VAR_9]) {
   VAR_8 = FUNC_2(VAR_5->sram_channels[VAR_9].int_stat);

   if (VAR_8)
    VAR_10 +=
        FUNC_1(VAR_5, VAR_9, VAR_8);

   FUNC_3(VAR_1, VAR_11[VAR_9]);
  }
 }

      out:
 return FUNC_0(VAR_10);
}
