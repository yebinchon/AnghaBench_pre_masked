
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* tuner_gpio; } ;
struct cx231xx {scalar_t__ tuner_type; int model; TYPE_2__ board; } ;
struct TYPE_3__ {int bit; } ;


 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,scalar_t__) ;
 int FUNC_1 (struct cx231xx*,int) ;
 int FUNC_2 (struct cx231xx*,int ,int) ;
 int FUNC_3 (int) ;

int FUNC_4(void *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9 = 0;
 struct cx231xx *VAR_10 = VAR_5;

 if (VAR_10->tuner_type == VAR_3) {
  if (VAR_7 == VAR_4) {
   FUNC_0
    ("Tuner CB: RESET: cmd %d : tuner type %d \n",
     VAR_7, VAR_10->tuner_type);
   FUNC_2(VAR_10, VAR_10->board.tuner_gpio->bit,
            1);
   FUNC_3(10);
   FUNC_2(VAR_10, VAR_10->board.tuner_gpio->bit,
            0);
   FUNC_3(330);
   FUNC_2(VAR_10, VAR_10->board.tuner_gpio->bit,
            1);
   FUNC_3(10);
  }
 } else if (VAR_10->tuner_type == VAR_2) {
  switch (VAR_7) {
  case 128:
   if (VAR_10->model == VAR_0)
    VAR_9 = FUNC_1(VAR_10, VAR_8);
   break;
  default:
   VAR_9 = -VAR_1;
   break;
  }
 }
 return VAR_9;
}
