
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct work_struct {int dummy; } ;
struct lm8323_chip {int lock; int * pwm; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct lm8323_chip*) ;
 int FUNC_4 (struct lm8323_chip*) ;
 int FUNC_5 (struct lm8323_chip*,int ,int*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct lm8323_chip*) ;
 int FUNC_9 (int *) ;
 struct lm8323_chip* FUNC_10 (struct work_struct*) ;

__attribute__((used)) static void FUNC_11(struct work_struct *VAR_7)
{
 struct lm8323_chip *VAR_8 = FUNC_10(VAR_7);
 u8 VAR_9;
 int VAR_10;

 FUNC_6(&VAR_8->lock);

 while ((FUNC_5(VAR_8, VAR_5, &VAR_9, 1) == 1) && VAR_9) {
  if (FUNC_2(VAR_9 & VAR_1))
   FUNC_8(VAR_8);
  if (VAR_9 & VAR_4) {

   FUNC_1(&VAR_8->client->dev, "rotator fired\n");
  }
  if (VAR_9 & VAR_0) {
   FUNC_1(&VAR_8->client->dev, "error!\n");
   FUNC_4(VAR_8);
  }
  if (VAR_9 & VAR_2) {
   FUNC_0(&VAR_8->client->dev, "chip lost config; "
        "reinitialising\n");
   FUNC_3(VAR_8);
  }
  for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
   if (VAR_9 & (1 << (VAR_3 + VAR_10))) {
    FUNC_1(&VAR_8->client->dev,
      "pwm%d engine completed\n", VAR_10);
    FUNC_9(&VAR_8->pwm[VAR_10]);
   }
  }
 }

 FUNC_7(&VAR_8->lock);
}
