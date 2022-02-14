
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int ai_stop_spinlock; scalar_t__ iobase1; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (unsigned char,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_6,
     struct comedi_subdevice *VAR_7,
     unsigned int VAR_8)
{
 unsigned long VAR_9;
 unsigned char VAR_10;

 if (VAR_8 != 0)
  return -VAR_1;

 FUNC_2(&VAR_5->ai_stop_spinlock, VAR_9);
 if (FUNC_4(VAR_0, &VAR_5->state)) {

  VAR_10 = FUNC_0(0, VAR_2);
  FUNC_1(VAR_10, VAR_5->iobase1 + VAR_4);
  VAR_10 = FUNC_0(0, VAR_3);
  FUNC_1(VAR_10, VAR_5->iobase1 + VAR_4);
 }
 FUNC_3(&VAR_5->ai_stop_spinlock, VAR_9);

 return 1;
}
