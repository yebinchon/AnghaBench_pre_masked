
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {unsigned int state; int n_chan; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned long* iobases; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned char,unsigned long) ;
 int FUNC_2 (char*,unsigned int,...) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3,
    struct comedi_subdevice *VAR_4,
    struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 int VAR_7;
 if (VAR_5->n != 2)
  return -VAR_1;
 VAR_4->state = 0;

 for (VAR_7 = 0; VAR_7 < VAR_4->n_chan / VAR_0; ++VAR_7) {

  unsigned long VAR_8 = VAR_2->iobases[VAR_7],

      VAR_9 = VAR_7 * 8;

  unsigned char VAR_10 = 0,

      VAR_11 = (VAR_6[0] >> VAR_9) & 0xff,

      VAR_12 = (VAR_6[1] >> VAR_9) & 0xff;

  VAR_10 = FUNC_0(VAR_8);
  if (VAR_11) {

   VAR_10 &= ~VAR_11;
   VAR_10 |= ~VAR_12 & VAR_11;

   FUNC_1(VAR_10, VAR_8);
  }





  VAR_4->state |= ((unsigned int)VAR_10) << VAR_9;
 }


 VAR_6[1] = ~VAR_4->state;






 return 2;
}
