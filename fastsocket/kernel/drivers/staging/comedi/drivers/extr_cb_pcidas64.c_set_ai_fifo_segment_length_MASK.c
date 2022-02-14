
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint16_t ;
struct hw_fifo_info {unsigned int max_segment_length; unsigned int fifo_size_reg_mask; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {struct hw_fifo_info* ai_fifo; } ;
struct TYPE_3__ {unsigned int fifo_size_bits; unsigned int ai_fifo_segment_length; scalar_t__ main_iobase; } ;


 int FUNC_0 (char*,unsigned int) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_1 (struct comedi_device*) ;
 TYPE_1__* FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1,
          unsigned int VAR_2)
{
 static const int VAR_3 = 0x100;
 const struct hw_fifo_info *const VAR_4 = FUNC_1(VAR_1)->ai_fifo;
 unsigned int VAR_5;
 uint16_t VAR_6;

 if (VAR_2 < VAR_3)
  VAR_2 = VAR_3;
 if (VAR_2 > VAR_4->max_segment_length)
  VAR_2 = VAR_4->max_segment_length;


 VAR_5 = (VAR_2 + VAR_3 / 2) / VAR_3;

 VAR_6 = (~(VAR_5 - 1)) & VAR_4->fifo_size_reg_mask;
 FUNC_2(VAR_1)->fifo_size_bits &= ~VAR_4->fifo_size_reg_mask;
 FUNC_2(VAR_1)->fifo_size_bits |= VAR_6;
 FUNC_3(FUNC_2(VAR_1)->fifo_size_bits,
        FUNC_2(VAR_1)->main_iobase + VAR_0);

 FUNC_2(VAR_1)->ai_fifo_segment_length = VAR_5 * VAR_3;

 FUNC_0("set hardware fifo segment length to %i\n",
      FUNC_2(VAR_1)->ai_fifo_segment_length);

 return FUNC_2(VAR_1)->ai_fifo_segment_length;
}
