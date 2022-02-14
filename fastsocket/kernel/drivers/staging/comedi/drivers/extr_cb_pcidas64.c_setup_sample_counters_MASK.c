
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct comedi_cmd {scalar_t__ stop_src; int stop_arg; int chanlist_len; } ;
struct TYPE_2__ {int ai_count; scalar_t__ main_iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (struct comedi_device*) ;
 scalar_t__ FUNC_1 (struct comedi_cmd*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_3,
      struct comedi_cmd *VAR_4)
{
 if (VAR_4->stop_src == VAR_2) {

  FUNC_0(VAR_3)->ai_count = VAR_4->stop_arg * VAR_4->chanlist_len;
 }

 if (FUNC_1(VAR_4)) {
  FUNC_2(VAR_4->stop_arg & 0xffff,
         FUNC_0(VAR_3)->main_iobase + VAR_0);
  FUNC_2((VAR_4->stop_arg >> 16) & 0xff,
         FUNC_0(VAR_3)->main_iobase + VAR_1);
 } else {
  FUNC_2(1, FUNC_0(VAR_3)->main_iobase + VAR_0);
 }
}
