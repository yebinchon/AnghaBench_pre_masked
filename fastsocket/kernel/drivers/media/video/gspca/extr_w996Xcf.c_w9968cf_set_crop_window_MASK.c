
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int height; int width; } ;
struct sd {scalar_t__ sensor; int sensor_width; int sensor_height; TYPE_2__ gspca_dev; TYPE_1__* ctrls; scalar_t__ sif; } ;
struct TYPE_3__ {int val; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct sd*,int,int) ;

__attribute__((used)) static void FUNC_2(struct sd *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
     VAR_11, VAR_12;

 if (VAR_2->sif) {
  VAR_11 = 352;
  VAR_12 = 288;
 } else {
  VAR_11 = 640;
  VAR_12 = 480;
 }

 if (VAR_2->sensor == VAR_1) {


  if (VAR_2->ctrls[VAR_0].val == 1) {
   VAR_3 = 277;
   VAR_4 = 37;
  } else {
   VAR_3 = 105;
   VAR_4 = 37;
  }
 } else {
  VAR_3 = 320;
  VAR_4 = 35;
 }





 VAR_7 = ((VAR_2->gspca_dev.width) << 10) / VAR_11;
 VAR_8 = ((VAR_2->gspca_dev.height) << 10) / VAR_12;

 VAR_9 = (VAR_7 >= VAR_8) ? VAR_11 : ((VAR_2->gspca_dev.width) << 10) / VAR_8;
 VAR_10 = (VAR_7 >= VAR_8) ? ((VAR_2->gspca_dev.height) << 10) / VAR_7 : VAR_12;

 VAR_2->sensor_width = VAR_11;
 VAR_2->sensor_height = VAR_12;

 VAR_5 = (VAR_11 - VAR_9) / 2;
 VAR_6 = (VAR_12 - VAR_10) / 2;

 FUNC_1(VAR_2, 0x10, VAR_3 + VAR_5);
 FUNC_1(VAR_2, 0x11, VAR_4 + VAR_6);
 FUNC_1(VAR_2, 0x12, VAR_3 + VAR_5 + VAR_9);
 FUNC_1(VAR_2, 0x13, VAR_4 + VAR_6 + VAR_10);
}
