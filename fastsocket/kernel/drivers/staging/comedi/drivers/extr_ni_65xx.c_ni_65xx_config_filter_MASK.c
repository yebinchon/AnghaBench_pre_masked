
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_6__ {unsigned int filter_interval; int* filter_enable; TYPE_1__* mite; } ;
struct TYPE_5__ {unsigned int base_port; } ;
struct TYPE_4__ {scalar_t__ daq_io_addr; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned int const) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int const VAR_3 ;
 unsigned int FUNC_2 (unsigned int const) ;
 TYPE_3__* FUNC_3 (struct comedi_device*) ;
 TYPE_2__* FUNC_4 (struct comedi_subdevice*) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_4,
     struct comedi_subdevice *VAR_5,
     struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 const unsigned VAR_8 = FUNC_0(VAR_6->chanspec);
 const unsigned VAR_9 =
     FUNC_4(VAR_5)->base_port + FUNC_2(VAR_8);

 if (VAR_7[0] != VAR_2)
  return -VAR_0;
 if (VAR_7[1]) {
  static const unsigned VAR_10 = 200;
  static const unsigned VAR_11 = 0xfffff;
  unsigned VAR_12 =
      (VAR_7[1] +
       (VAR_10 / 2)) / VAR_10;
  if (VAR_12 > VAR_11)
   VAR_12 = VAR_11;
  VAR_7[1] = VAR_12 * VAR_10;

  if (VAR_12 != FUNC_3(VAR_4)->filter_interval) {
   FUNC_5(VAR_12,
          FUNC_3(VAR_4)->mite->daq_io_addr +
          VAR_1);
   FUNC_3(VAR_4)->filter_interval = VAR_12;
  }

  FUNC_3(VAR_4)->filter_enable[VAR_9] |=
      1 << (VAR_8 % VAR_3);
 } else {
  FUNC_3(VAR_4)->filter_enable[VAR_9] &=
      ~(1 << (VAR_8 % VAR_3));
 }

 FUNC_5(FUNC_3(VAR_4)->filter_enable[VAR_9],
        FUNC_3(VAR_4)->mite->daq_io_addr + FUNC_1(VAR_9));

 return 2;
}
