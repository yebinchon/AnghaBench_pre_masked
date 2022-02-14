
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int ai_front; int ai_rear; scalar_t__ io_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,short) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (char*,int) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_5,
          struct comedi_subdevice *VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 short VAR_11;

 VAR_7 = FUNC_2(VAR_4->io_addr + VAR_2);
 VAR_9 = VAR_7 - VAR_4->ai_front;
 if (VAR_9 < 0)
  VAR_9 += VAR_0;

 FUNC_1("reading %d samples\n", VAR_9);

 VAR_8 = VAR_4->ai_rear;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  VAR_11 = FUNC_2(VAR_4->io_addr + VAR_1 + VAR_8);
  FUNC_0(VAR_6->async, VAR_11);
  VAR_8++;
  if (VAR_8 >= VAR_0)
   VAR_8 = 0;
 }

 VAR_4->ai_rear = VAR_8;
 FUNC_3(VAR_8, VAR_4->io_addr + VAR_3);
}
