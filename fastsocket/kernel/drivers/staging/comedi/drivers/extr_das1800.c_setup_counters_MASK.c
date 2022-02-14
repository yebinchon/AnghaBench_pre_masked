
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct comedi_cmd {int scan_begin_src; int convert_src; int flags; scalar_t__ stop_src; int scan_begin_arg; int convert_arg; } ;
struct TYPE_2__ {int divisor2; int divisor1; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

 int VAR_3 ;

 int FUNC_0 (struct comedi_device*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int ,int *,int *,int *,int) ;
 int FUNC_2 (scalar_t__,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_5, struct comedi_cmd VAR_6)
{

 switch (VAR_6.scan_begin_src) {
 case 129:
  if (VAR_6.convert_src == 128) {

   FUNC_1(VAR_1,
             &(VAR_4->divisor1),
             &(VAR_4->divisor2),
             &(VAR_6.convert_arg),
             VAR_6.
             flags & VAR_3);
   if (FUNC_0(VAR_5) < 0) {
    return -1;
   }
  }
  break;
 case 128:

  FUNC_1(VAR_1, &(VAR_4->divisor1),
            &(VAR_4->divisor2),
            &(VAR_6.scan_begin_arg),
            VAR_6.flags & VAR_3);
  if (FUNC_0(VAR_5) < 0) {
   return -1;
  }
  break;
 default:
  break;
 }


 if (VAR_6.stop_src == VAR_2) {

  FUNC_2(VAR_5->iobase + VAR_0, 0, 0, 1, 0);
 }

 return 0;
}
