
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int adccon; scalar_t__ hwver; int ai_stop_spinlock; scalar_t__ iobase1; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_0 (scalar_t__,int ,int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_8,
         struct comedi_subdevice *VAR_9,
         unsigned int VAR_10)
{
 unsigned long VAR_11;

 if (VAR_10 != 0)
  return -VAR_1;

 FUNC_1(&VAR_7->ai_stop_spinlock, VAR_11);
 if (FUNC_3(VAR_0, &VAR_7->state)) {
  unsigned int VAR_12;



  FUNC_0(VAR_7->iobase1 + VAR_6, 0, 2,
          VAR_2);
  FUNC_0(VAR_7->iobase1 + VAR_6, 0, 2,
          VAR_3);





  if (((VAR_7->adccon & VAR_5)
       == VAR_4)
      && (VAR_7->hwver == 0)) {

   VAR_12 = 8;
  } else {

   VAR_12 = 4;
  }
  FUNC_2(&VAR_7->ai_stop_spinlock, VAR_11);
  FUNC_4(VAR_12);
 } else {
  FUNC_2(&VAR_7->ai_stop_spinlock, VAR_11);
 }

 return 1;
}
