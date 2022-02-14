
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int ai_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4,
    struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 int VAR_7, VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 for (VAR_7 = 0; VAR_7 < VAR_5->n; VAR_7++) {





  for (VAR_8 = 0; VAR_8 < 100; VAR_8++) {
   VAR_10 = 1;

   if (VAR_10)
    break;
  }
  if (VAR_8 == 100) {


   FUNC_0("timeout\n");
   return -VAR_0;
  }



  VAR_9 = 0;


  VAR_9 ^= 1 << (VAR_2->ai_bits - 1);

  VAR_6[VAR_7] = VAR_9;
 }


 return VAR_7;
}
