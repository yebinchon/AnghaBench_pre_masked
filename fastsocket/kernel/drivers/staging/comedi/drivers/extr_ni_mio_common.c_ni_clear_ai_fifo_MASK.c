
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ reg_type; } ;
struct TYPE_3__ {int (* stc_writew ) (struct comedi_device*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 TYPE_2__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct comedi_device*,int,int ) ;
 int FUNC_5 (struct comedi_device*,int,int ) ;
 int FUNC_6 (struct comedi_device*,int,int ) ;
 int FUNC_7 (struct comedi_device*,int,int ) ;

__attribute__((used)) static void FUNC_8(struct comedi_device *VAR_9)
{
 if (VAR_5.reg_type == VAR_7) {

  FUNC_3(0x10, VAR_1);
  FUNC_3(0x00, VAR_1);
  while (FUNC_1(VAR_2) & 0x10) ;
 } else {
  VAR_6->stc_writew(VAR_9, 1, VAR_0);
  if (VAR_5.reg_type == VAR_8) {
   FUNC_2(0, FUNC_0(0));
   FUNC_2(1, FUNC_0(0));
  }
 }
}
