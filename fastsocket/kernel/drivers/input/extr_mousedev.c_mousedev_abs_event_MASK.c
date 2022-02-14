
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int x; int abs_event; int y; } ;
struct mousedev {TYPE_1__ packet; } ;
struct input_dev {int* absmax; int* absmin; } ;




 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct input_dev *VAR_2, struct mousedev *VAR_3,
    unsigned int VAR_4, int VAR_5)
{
 int VAR_6;

 switch (VAR_4) {

 case 129:
  VAR_6 = VAR_2->absmax[129] - VAR_2->absmin[129];
  if (VAR_6 == 0)
   VAR_6 = VAR_0 ? : 1;
  if (VAR_5 > VAR_2->absmax[129])
   VAR_5 = VAR_2->absmax[129];
  if (VAR_5 < VAR_2->absmin[129])
   VAR_5 = VAR_2->absmin[129];
  VAR_3->packet.x =
   ((VAR_5 - VAR_2->absmin[129]) * VAR_0) / VAR_6;
  VAR_3->packet.abs_event = 1;
  break;

 case 128:
  VAR_6 = VAR_2->absmax[128] - VAR_2->absmin[128];
  if (VAR_6 == 0)
   VAR_6 = VAR_1 ? : 1;
  if (VAR_5 > VAR_2->absmax[128])
   VAR_5 = VAR_2->absmax[128];
  if (VAR_5 < VAR_2->absmin[128])
   VAR_5 = VAR_2->absmin[128];
  VAR_3->packet.y = VAR_1 -
   ((VAR_5 - VAR_2->absmin[128]) * VAR_1) / VAR_6;
  VAR_3->packet.abs_event = 1;
  break;
 }
}
