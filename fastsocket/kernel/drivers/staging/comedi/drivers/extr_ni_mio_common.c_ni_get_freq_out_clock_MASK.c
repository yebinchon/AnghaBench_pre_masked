
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int clock_and_fout; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static void FUNC_0(struct comedi_device *VAR_6,
      unsigned int *VAR_7,
      unsigned int *VAR_8)
{
 if (VAR_5->clock_and_fout & VAR_0) {
  *VAR_7 = VAR_2;
  *VAR_8 = VAR_4;
 } else {
  *VAR_7 = VAR_1;
  *VAR_8 = VAR_3 * 2;
 }
}
