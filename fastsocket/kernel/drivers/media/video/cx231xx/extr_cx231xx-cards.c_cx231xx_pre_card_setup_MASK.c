
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tuner_sif_gpio; TYPE_2__* tuner_gpio; int name; } ;
struct cx231xx {TYPE_1__ board; int model; } ;
struct TYPE_4__ {scalar_t__ bit; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct cx231xx*,scalar_t__,int) ;
 int FUNC_2 (struct cx231xx*,scalar_t__,int) ;
 int FUNC_3 (struct cx231xx*,int ) ;
 int FUNC_4 (struct cx231xx*) ;

void FUNC_5(struct cx231xx *VAR_1)
{

 FUNC_4(VAR_1);

 FUNC_0("Identified as %s (card=%d)\n",
       VAR_1->board.name, VAR_1->model);


 if (VAR_1->board.tuner_gpio) {
  FUNC_1(VAR_1, VAR_1->board.tuner_gpio->bit, 1);
  FUNC_2(VAR_1, VAR_1->board.tuner_gpio->bit, 1);
 }
 if (VAR_1->board.tuner_sif_gpio >= 0)
  FUNC_1(VAR_1, VAR_1->board.tuner_sif_gpio, 1);




 FUNC_3(VAR_1, VAR_0);




}
