
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {unsigned int act_chanlist_len; size_t* act_chanlist; scalar_t__ act_chanlist_pos; } ;


 size_t FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int* VAR_3 ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_4,
          struct comedi_subdevice *VAR_5,
          unsigned int *VAR_6, unsigned int VAR_7,
          unsigned int VAR_8)
{
 int VAR_9;

 VAR_2->act_chanlist_len = VAR_8;
 VAR_2->act_chanlist_pos = 0;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  VAR_2->act_chanlist[VAR_9] = FUNC_0(VAR_6[VAR_9]);
  FUNC_2(VAR_3[FUNC_0(VAR_6[VAR_9])], VAR_4->iobase + VAR_0);
  FUNC_2(FUNC_1(VAR_6[VAR_9]), VAR_4->iobase + VAR_1);
 }

 FUNC_3(1);


 FUNC_2(VAR_2->act_chanlist[0] | (VAR_2->act_chanlist[VAR_8 -
              1] << 4),
      VAR_4->iobase + VAR_0);
}
