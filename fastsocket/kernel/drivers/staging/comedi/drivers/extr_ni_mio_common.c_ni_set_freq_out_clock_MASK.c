
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int clock_and_fout; int (* stc_writew ) (struct comedi_device*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 TYPE_1__* VAR_3 ;
 int FUNC_0 (struct comedi_device*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_4,
     unsigned int VAR_5)
{
 switch (VAR_5) {
 case 129:
  VAR_3->clock_and_fout &= ~VAR_2;
  break;
 case 128:
  VAR_3->clock_and_fout |= VAR_2;
  break;
 default:
  return -VAR_1;
 }
 VAR_3->stc_writew(VAR_4, VAR_3->clock_and_fout,
       VAR_0);
 return 3;
}
