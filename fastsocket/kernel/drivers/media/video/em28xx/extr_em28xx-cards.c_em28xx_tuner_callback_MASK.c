
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tuner_gpio; } ;
struct em28xx {scalar_t__ tuner_type; TYPE_1__ board; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct em28xx*,int ) ;

int FUNC_1(void *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 struct em28xx *VAR_7 = VAR_2;

 if (VAR_7->tuner_type != VAR_0)
  return 0;

 if (VAR_4 != VAR_1)
  return 0;

 VAR_6 = FUNC_0(VAR_7, VAR_7->board.tuner_gpio);

 return VAR_6;
}
