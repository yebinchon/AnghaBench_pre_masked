
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {size_t minor; } ;
struct comedi_cmd {int* chanlist; scalar_t__ start_src; int start_arg; scalar_t__ stop_src; scalar_t__ scan_begin_src; int scan_begin_arg; scalar_t__ convert_src; int convert_arg; } ;
struct TYPE_6__ {scalar_t__ iobase; } ;
struct TYPE_5__ {int i_FirstChannel; int i_LastChannel; scalar_t__ i_Offset; } ;
struct TYPE_4__ {struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 TYPE_2__* VAR_5 ;

int FUNC_2(struct comedi_device *VAR_6, struct comedi_subdevice *VAR_7)
{
 struct comedi_cmd *VAR_8 = &VAR_7->async->cmd;
 unsigned int VAR_9 = 0;

 unsigned int VAR_10 = 0;
 unsigned int VAR_11 = 0;
 unsigned int VAR_12 = 0;
 unsigned int VAR_13 = 0;
 unsigned int VAR_14 = 0;
 unsigned int VAR_15 = 0;
 unsigned int VAR_16 = 0;
 unsigned int VAR_17 = 0;
 unsigned int VAR_18 = 0;


 VAR_5[VAR_6->minor].i_FirstChannel = VAR_8->chanlist[0];
 VAR_5[VAR_6->minor].i_LastChannel = VAR_8->chanlist[1];
 if (VAR_8->start_src == VAR_1) {
  VAR_10 = 1;
  VAR_11 = VAR_8->start_arg & 0xFFFF;
  VAR_12 = VAR_8->start_arg >> 16;
 }
 else {
  VAR_10 = 0;
 }

 if (VAR_8->stop_src == VAR_0) {
  VAR_13 = 0;
 }
 else {
  VAR_13 = 2;
 }

 if (VAR_8->scan_begin_src == VAR_2) {
  VAR_16 = 0;
  VAR_17 = 0;
  VAR_18 = 0;
 }
 else {
  VAR_16 = VAR_8->scan_begin_arg & 0xFFFF;
  VAR_17 = VAR_8->scan_begin_arg >> 16;
  VAR_18 = 1;
 }


 if (VAR_8->convert_src == VAR_3) {
  VAR_14 = VAR_8->convert_arg & 0xFFFF;
  VAR_15 = VAR_8->convert_arg >> 16;
 } else {
  VAR_14 = 0;
  VAR_15 = 0;
 }







 VAR_9 =
  FUNC_0(VAR_4->iobase + VAR_5[VAR_6->minor].i_Offset + 12);




 while (((FUNC_0(VAR_4->iobase + VAR_5[VAR_6->minor].i_Offset +
     12) >> 19) & 1) != 1) ;

 FUNC_1((VAR_9 & 0xFFC00000),
  VAR_4->iobase + VAR_5[VAR_6->minor].i_Offset + 12);

 VAR_9 = 0;
 VAR_9 =
  VAR_5[VAR_6->minor].i_FirstChannel | (VAR_5[VAR_6->
   minor].
  i_LastChannel << 8) | 0x00100000 | (VAR_10 << 24) |
  (VAR_11 << 25) | (VAR_12 << 27) | (VAR_18
  << 18) | (VAR_13 << 16);





 while (((FUNC_0(VAR_4->iobase + VAR_5[VAR_6->minor].i_Offset +
     12) >> 19) & 1) != 1) ;

 FUNC_1(VAR_9,
  VAR_4->iobase + VAR_5[VAR_6->minor].i_Offset + 0x8);




 while (((FUNC_0(VAR_4->iobase + VAR_5[VAR_6->minor].i_Offset +
     12) >> 19) & 1) != 1) ;

 FUNC_1(VAR_16,
  VAR_4->iobase + VAR_5[VAR_6->minor].i_Offset + 40);




 while (((FUNC_0(VAR_4->iobase + VAR_5[VAR_6->minor].i_Offset +
     12) >> 19) & 1) != 1) ;

 FUNC_1(VAR_17,
  VAR_4->iobase + VAR_5[VAR_6->minor].i_Offset + 44);




 while (((FUNC_0(VAR_4->iobase + VAR_5[VAR_6->minor].i_Offset +
     12) >> 19) & 1) != 1) ;

 FUNC_1(VAR_14,
  VAR_4->iobase + VAR_5[VAR_6->minor].i_Offset + 32);





 while (((FUNC_0(VAR_4->iobase + VAR_5[VAR_6->minor].i_Offset +
     12) >> 19) & 1) != 1) ;

 FUNC_1(VAR_15,
  VAR_4->iobase + VAR_5[VAR_6->minor].i_Offset + 36);




 VAR_9 =
  FUNC_0(VAR_4->iobase + VAR_5[VAR_6->minor].i_Offset + 4);




 while (((FUNC_0(VAR_4->iobase + VAR_5[VAR_6->minor].i_Offset +
     12) >> 19) & 1) != 1) ;


 FUNC_1(((VAR_9 & 0x1E0FF) | 0x00002000),
  VAR_4->iobase + VAR_5[VAR_6->minor].i_Offset + 4);



 VAR_9 = 0;

 VAR_9 =
  FUNC_0(VAR_4->iobase + VAR_5[VAR_6->minor].i_Offset + 8);





 while (((FUNC_0(VAR_4->iobase + VAR_5[VAR_6->minor].i_Offset +
     12) >> 19) & 1) != 1) ;

 FUNC_1((VAR_9 | 0x00080000),
  VAR_4->iobase + VAR_5[VAR_6->minor].i_Offset + 8);
 return 0;
}
