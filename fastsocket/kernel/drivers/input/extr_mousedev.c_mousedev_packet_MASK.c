
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mousedev_motion {scalar_t__ dx; scalar_t__ dy; int buttons; scalar_t__ dz; } ;
struct mousedev_client {size_t tail; int mode; int bufsiz; size_t head; int last_buttons; scalar_t__ ready; struct mousedev_motion* packets; } ;





 int VAR_0 ;
 char FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct mousedev_client *VAR_1,
       signed char *VAR_2)
{
 struct mousedev_motion *VAR_3 = &VAR_1->packets[VAR_1->tail];

 VAR_2[0] = 0x08 |
  ((VAR_3->dx < 0) << 4) | ((VAR_3->dy < 0) << 5) | (VAR_3->buttons & 0x07);
 VAR_2[1] = FUNC_0(VAR_3->dx, 127);
 VAR_2[2] = FUNC_0(VAR_3->dy, 127);
 VAR_3->dx -= VAR_2[1];
 VAR_3->dy -= VAR_2[2];

 switch (VAR_1->mode) {
 case 130:
  VAR_2[3] = FUNC_0(VAR_3->dz, 7);
  VAR_3->dz -= VAR_2[3];
  VAR_2[3] = (VAR_2[3] & 0x0f) | ((VAR_3->buttons & 0x18) << 1);
  VAR_1->bufsiz = 4;
  break;

 case 129:
  VAR_2[0] |=
   ((VAR_3->buttons & 0x10) >> 3) | ((VAR_3->buttons & 0x08) >> 1);
  VAR_2[3] = FUNC_0(VAR_3->dz, 127);
  VAR_3->dz -= VAR_2[3];
  VAR_1->bufsiz = 4;
  break;

 case 128:
 default:
  VAR_2[0] |=
   ((VAR_3->buttons & 0x10) >> 3) | ((VAR_3->buttons & 0x08) >> 1);
  VAR_3->dz = 0;
  VAR_1->bufsiz = 3;
  break;
 }

 if (!VAR_3->dx && !VAR_3->dy && !VAR_3->dz) {
  if (VAR_1->tail == VAR_1->head) {
   VAR_1->ready = 0;
   VAR_1->last_buttons = VAR_3->buttons;
  } else
   VAR_1->tail = (VAR_1->tail + 1) % VAR_0;
 }
}
