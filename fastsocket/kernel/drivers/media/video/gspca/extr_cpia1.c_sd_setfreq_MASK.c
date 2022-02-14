
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t baserate; size_t divisor; } ;
struct TYPE_4__ {int coarseJump; } ;
struct TYPE_6__ {TYPE_2__ sensorFps; TYPE_1__ flickerControl; } ;
struct sd {int mainsFreq; int freq; TYPE_3__ params; } ;
struct gspca_dev {int streaming; } ;
typedef int __s32 ;


 int VAR_0 ;
 int *** VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_2, __s32 VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_2;
 int VAR_5;

 switch (VAR_3) {
 case 0:
  VAR_5 = 0;
  break;
 case 1:
  VAR_5 = 1;
  VAR_4->mainsFreq = 0;
  break;
 case 2:
  VAR_5 = 1;
  VAR_4->mainsFreq = 1;
  break;
 default:
  return -VAR_0;
 }

 VAR_4->freq = VAR_3;
 VAR_4->params.flickerControl.coarseJump =
  VAR_1[VAR_4->mainsFreq]
        [VAR_4->params.sensorFps.baserate]
        [VAR_4->params.sensorFps.divisor];

 return FUNC_0(VAR_2, VAR_5, VAR_2->streaming);
}
