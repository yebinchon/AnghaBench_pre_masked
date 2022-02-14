
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u16 ;
struct input_dev {int dummy; } ;
struct TYPE_3__ {unsigned int x; unsigned int y; unsigned int z1; unsigned int z2; scalar_t__ ignore; } ;
struct ads7846_packet {TYPE_1__ tc; } ;
struct ads7846 {int model; int pressure_max; unsigned int x_plate_ohms; int pendown; int timer; TYPE_2__* spi; scalar_t__ swap_xy; struct input_dev* input; scalar_t__ penirq_recheck_delay_usecs; struct ads7846_packet* packet; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ads7846*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct input_dev*,int ,unsigned int) ;
 int FUNC_5 (struct input_dev*,int ,int) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char*,int ,scalar_t__,unsigned int) ;
 int FUNC_10 (unsigned int,unsigned int) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static void FUNC_12(void *VAR_7)
{
 struct ads7846 *VAR_8 = VAR_7;
 struct ads7846_packet *VAR_9 = VAR_8->packet;
 unsigned VAR_10;
 u16 VAR_11, VAR_12, VAR_13, VAR_14;




 VAR_11 = VAR_9->tc.x;
 VAR_12 = VAR_9->tc.y;
 VAR_13 = VAR_9->tc.z1;
 VAR_14 = VAR_9->tc.z2;


 if (VAR_11 == VAR_5)
  VAR_11 = 0;

 if (VAR_8->model == 7843) {
  VAR_10 = VAR_8->pressure_max / 2;
 } else if (FUNC_8(VAR_11 && VAR_13)) {

  VAR_10 = VAR_14;
  VAR_10 -= VAR_13;
  VAR_10 *= VAR_11;
  VAR_10 *= VAR_8->x_plate_ohms;
  VAR_10 /= VAR_13;
  VAR_10 = (VAR_10 + 2047) >> 12;
 } else {
  VAR_10 = 0;
 }





 if (VAR_9->tc.ignore || VAR_10 > VAR_8->pressure_max) {




  FUNC_3(&VAR_8->timer, FUNC_7(0, VAR_6),
         VAR_4);
  return;
 }




 if (VAR_8->penirq_recheck_delay_usecs) {
  FUNC_11(VAR_8->penirq_recheck_delay_usecs);
  if (!FUNC_2(VAR_8))
   VAR_10 = 0;
 }
 if (VAR_10) {
  struct input_dev *VAR_15 = VAR_8->input;

  if (!VAR_8->pendown) {
   FUNC_5(VAR_15, VAR_3, 1);
   VAR_8->pendown = 1;



  }

  if (VAR_8->swap_xy)
   FUNC_10(VAR_11, VAR_12);

  FUNC_4(VAR_15, VAR_1, VAR_11);
  FUNC_4(VAR_15, VAR_2, VAR_12);
  FUNC_4(VAR_15, VAR_0, VAR_10);

  FUNC_6(VAR_15);



 }

 FUNC_3(&VAR_8->timer, FUNC_7(0, VAR_6),
   VAR_4);
}
