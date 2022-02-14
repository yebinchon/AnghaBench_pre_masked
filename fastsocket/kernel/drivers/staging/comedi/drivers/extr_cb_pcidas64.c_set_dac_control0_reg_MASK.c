
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct comedi_cmd {scalar_t__ start_src; int start_arg; scalar_t__ scan_begin_src; int scan_begin_arg; } ;
struct TYPE_2__ {scalar_t__ main_iobase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 TYPE_1__* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_12,
     const struct comedi_cmd *VAR_13)
{
 unsigned int VAR_14 = VAR_2 | VAR_7 |
     VAR_6 | VAR_8;

 if (VAR_13->start_src == VAR_5) {
  VAR_14 |= VAR_9;
  if (VAR_13->start_arg & VAR_0)
   VAR_14 |= VAR_10;
 } else {
  VAR_14 |= VAR_11;
 }
 if (VAR_13->scan_begin_src == VAR_5) {
  VAR_14 |= VAR_3;
  if (VAR_13->scan_begin_arg & VAR_0)
   VAR_14 |= VAR_4;
 }
 FUNC_1(VAR_14, FUNC_0(VAR_12)->main_iobase + VAR_1);
}
