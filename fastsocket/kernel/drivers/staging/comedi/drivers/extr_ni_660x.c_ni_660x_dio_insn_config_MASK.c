
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int pfi_direction_bits; int * pfi_output_selects; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;






 int FUNC_1 (struct comedi_device*,int,unsigned int) ;
 unsigned int FUNC_2 (struct comedi_device*,int) ;
 int FUNC_3 (struct comedi_device*,int,int ) ;
 int FUNC_4 (struct comedi_device*,int,unsigned int) ;
 int VAR_3 ;
 TYPE_1__* FUNC_5 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_4,
       struct comedi_subdevice *VAR_5,
       struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 int VAR_8 = FUNC_0(VAR_6->chanspec);






 switch (VAR_7[0]) {
 case 132:
  FUNC_5(VAR_4)->pfi_direction_bits |= ((uint64_t) 1) << VAR_8;
  FUNC_3(VAR_4, VAR_8,
       FUNC_5(VAR_4)->
       pfi_output_selects[VAR_8]);
  break;
 case 133:
  FUNC_5(VAR_4)->pfi_direction_bits &= ~(((uint64_t) 1) << VAR_8);
  FUNC_3(VAR_4, VAR_8, VAR_3);
  break;
 case 131:
  VAR_7[1] =
      (FUNC_5(VAR_4)->pfi_direction_bits &
       (((uint64_t) 1) << VAR_8)) ? VAR_1 : VAR_0;
  return 0;
 case 128:
  return FUNC_4(VAR_4, VAR_8, VAR_7[1]);
  break;
 case 129:
  VAR_7[1] = FUNC_2(VAR_4, VAR_8);
  break;
 case 130:
  FUNC_1(VAR_4, VAR_8, VAR_7[1]);
  break;
 default:
  return -VAR_2;
  break;
 };
 return 0;
}
