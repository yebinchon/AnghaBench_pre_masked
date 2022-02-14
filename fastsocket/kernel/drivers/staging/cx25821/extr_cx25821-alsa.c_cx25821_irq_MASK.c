
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct cx25821_dev {int dummy; } ;
struct TYPE_3__ {struct cx25821_dev* dev; } ;
typedef TYPE_1__ snd_cx25821_card_t ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 snd_cx25821_card_t *VAR_6 = VAR_5;
 struct cx25821_dev *VAR_7 = VAR_6->dev;
 u32 VAR_8, VAR_9;
 u32 VAR_10, VAR_11;
 int VAR_12, VAR_13 = 0;
 int VAR_14 = 0;

 VAR_10 = FUNC_2(VAR_2);
 VAR_11 = FUNC_2(VAR_1);
 VAR_14 = FUNC_2(VAR_0);
 VAR_8 = FUNC_2(VAR_3);

 for (VAR_12 = 0; VAR_12 < 1; VAR_12++) {
  VAR_8 = FUNC_2(VAR_3);
  if (0 == VAR_8) {
   VAR_8 = FUNC_2(VAR_3);
   VAR_10 = FUNC_2(VAR_2);
   VAR_11 = FUNC_2(VAR_1);

   if (VAR_8) {
    VAR_13 = 1;
    FUNC_3(VAR_3, VAR_8);

    FUNC_1(VAR_6, VAR_10,
      VAR_11);
    break;
   } else
    goto out;
  }

  VAR_13 = 1;
  FUNC_3(VAR_3, VAR_8);

  FUNC_1(VAR_6, VAR_10, VAR_11);
 }

 VAR_9 = FUNC_2(VAR_3);

 if (VAR_13)
  FUNC_3(VAR_3, VAR_9);

      out:
 return FUNC_0(VAR_13);
}
