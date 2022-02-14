
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {unsigned int act_chanlist_len; int AdcCmdStatus; int * act_chanlist; scalar_t__ io_addr; scalar_t__ act_chanlist_pos; } ;
struct TYPE_3__ {unsigned int* rangecode; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 size_t FUNC_2 (unsigned int) ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_3 (char*,unsigned int,...) ;
 TYPE_1__* VAR_4 ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_5,
          struct comedi_subdevice *VAR_6,
          unsigned int *VAR_7, unsigned int VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11;
 unsigned int VAR_12;




 VAR_3->act_chanlist_len = VAR_8;
 VAR_3->act_chanlist_pos = 0;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {

  VAR_11 = FUNC_1(VAR_7[VAR_9]);


  if (FUNC_0(VAR_7[VAR_9]) == VAR_1) {
   VAR_12 = 1;
   VAR_11 &= 0x0007;
  } else {
   VAR_12 = 0;
   VAR_11 &= 0x000f;
  }


  VAR_3->AdcCmdStatus &= 0xf00f;


  if (VAR_12) {

   VAR_3->AdcCmdStatus |= (VAR_11 << 9);
   VAR_3->AdcCmdStatus |= VAR_0;
  } else

   VAR_3->AdcCmdStatus |= (VAR_11 << 8);


  VAR_10 = VAR_4->rangecode[FUNC_2(VAR_7[VAR_9])];

  VAR_3->AdcCmdStatus |= VAR_10;


  FUNC_4(VAR_3->AdcCmdStatus,
         VAR_3->io_addr + VAR_2);





 }

}
