
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int calibration_source; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_2,
     unsigned int *VAR_3)
{
 static const int VAR_4 = 8;
 unsigned int VAR_5 = VAR_3[1];

 if (VAR_5 >= VAR_4) {
  FUNC_0("invalid calibration source: %i\n", VAR_5);
  return -VAR_0;
 }

 VAR_1->calibration_source = VAR_5;

 return 2;
}
