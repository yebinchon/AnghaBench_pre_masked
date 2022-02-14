
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucb1400_ts {int irq; TYPE_1__* ts_idev; int ac97; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ucb1400_ts *VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_2(VAR_3->ac97, VAR_1);
 FUNC_3(VAR_3->ac97, VAR_0, VAR_4);
 FUNC_3(VAR_3->ac97, VAR_0, 0);

 if (VAR_4 & VAR_2)
  FUNC_4(VAR_3->ac97);
 else
  FUNC_0(&VAR_3->ts_idev->dev, "ucb1400: unexpected IE_STATUS = %#x\n", VAR_4);
 FUNC_1(VAR_3->irq);
}
