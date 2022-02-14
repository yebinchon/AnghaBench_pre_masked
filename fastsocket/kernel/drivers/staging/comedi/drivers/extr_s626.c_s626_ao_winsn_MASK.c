
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
typedef scalar_t__ int16_t ;
struct TYPE_2__ {unsigned int* ao_readback; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_device*,size_t,scalar_t__) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1, struct comedi_subdevice *VAR_2,
    struct comedi_insn *VAR_3, unsigned int *VAR_4)
{

 int VAR_5;
 uint16_t VAR_6 = FUNC_0(VAR_3->chanspec);
 int16_t VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_3->n; VAR_5++) {
  VAR_7 = (int16_t) VAR_4[VAR_5];
  VAR_0->ao_readback[FUNC_0(VAR_3->chanspec)] = VAR_4[VAR_5];
  VAR_7 -= (0x1fff);

  FUNC_1(VAR_1, VAR_6, VAR_7);
 }

 return VAR_5;
}
