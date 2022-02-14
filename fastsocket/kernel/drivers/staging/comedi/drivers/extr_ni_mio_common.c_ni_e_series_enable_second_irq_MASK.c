
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_4__ {int reg_type; } ;
struct TYPE_3__ {int (* stc_writew ) (struct comedi_device*,int ,int ) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct comedi_device*,int ,int ) ;
 int FUNC_2 (struct comedi_device*,int ,int ) ;
 int FUNC_3 (struct comedi_device*,int ,int ) ;
 int FUNC_4 (struct comedi_device*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_7,
       unsigned VAR_8, short VAR_9)
{
 if (VAR_4.reg_type & VAR_6)
  return;
 switch (VAR_8) {
 case 0:
  if (VAR_9) {
   VAR_5->stc_writew(VAR_7, VAR_0,
         VAR_2);
  } else {
   VAR_5->stc_writew(VAR_7, 0,
         VAR_2);
  }
  break;
 case 1:
  if (VAR_9) {
   VAR_5->stc_writew(VAR_7, VAR_1,
         VAR_3);
  } else {
   VAR_5->stc_writew(VAR_7, 0,
         VAR_3);
  }
  break;
 default:
  FUNC_0();
  break;
 }
}
