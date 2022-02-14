
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ layout; } ;
struct TYPE_3__ {unsigned int calibration_source; } ;


 int FUNC_0 (char*,unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (char*,unsigned int) ;
 TYPE_1__* FUNC_3 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2,
     unsigned int *VAR_3)
{
 unsigned int VAR_4 = VAR_3[1];
 int VAR_5;

 if (FUNC_1(VAR_2)->layout == VAR_1)
  VAR_5 = 16;
 else
  VAR_5 = 8;
 if (VAR_4 >= VAR_5) {
  FUNC_2("invalid calibration source: %i\n", VAR_4);
  return -VAR_0;
 }

 FUNC_0("setting calibration source to %i\n", VAR_4);
 FUNC_3(VAR_2)->calibration_source = VAR_4;

 return 2;
}
