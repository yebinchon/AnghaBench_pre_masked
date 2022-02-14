
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct comedi_cmd {scalar_t__ scan_begin_src; int flags; int scan_begin_arg; } ;
struct TYPE_2__ {scalar_t__ main_iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 unsigned int FUNC_1 (int ,int ) ;
 unsigned int VAR_3 ;
 TYPE_1__* FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_4,
      const struct comedi_cmd *VAR_5)
{
 unsigned int VAR_6;

 if (VAR_5->scan_begin_src != VAR_2)
  return;

 VAR_6 = FUNC_1(VAR_5->scan_begin_arg, VAR_5->flags);
 if (VAR_6 > VAR_3) {
  FUNC_0(VAR_4, "bug! ao divisor too big");
  VAR_6 = VAR_3;
 }
 FUNC_3(VAR_6 & 0xffff,
        FUNC_2(VAR_4)->main_iobase + VAR_0);
 FUNC_3((VAR_6 >> 16) & 0xff,
        FUNC_2(VAR_4)->main_iobase + VAR_1);
}
