
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_gpct_device {void (* write_register ) (struct ni_gpct*,unsigned int,int) ;unsigned int (* read_register ) (struct ni_gpct*,int) ;int variant; unsigned int num_counters; TYPE_1__* counters; int regs_lock; struct comedi_device* dev; } ;
struct ni_gpct {int dummy; } ;
struct comedi_device {int dummy; } ;
typedef enum ni_gpct_variant { ____Placeholder_ni_gpct_variant } ni_gpct_variant ;
struct TYPE_2__ {int lock; struct ni_gpct_device* counter_dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ni_gpct_device*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

struct ni_gpct_device *FUNC_4(struct comedi_device *VAR_1,
      void (*VAR_2) (struct
         ni_gpct
         *
         VAR_3,
         unsigned
         VAR_4,
         enum
         ni_gpct_register
         VAR_5),
      unsigned (*VAR_6)
      (struct ni_gpct * VAR_7,
       enum ni_gpct_register VAR_8),
      enum ni_gpct_variant VAR_9,
      unsigned VAR_10)
{
 unsigned VAR_11;

 struct ni_gpct_device *VAR_12 =
     FUNC_2(sizeof(struct ni_gpct_device), VAR_0);
 if (VAR_12 == ((void*)0))
  return ((void*)0);
 VAR_12->dev = VAR_1;
 VAR_12->write_register = VAR_2;
 VAR_12->read_register = VAR_6;
 VAR_12->variant = VAR_9;
 FUNC_3(&VAR_12->regs_lock);
 FUNC_0(VAR_10 == 0);
 VAR_12->counters =
     FUNC_2(sizeof(struct ni_gpct) * VAR_10, VAR_0);
 if (VAR_12->counters == ((void*)0)) {
  FUNC_1(VAR_12);
  return ((void*)0);
 }
 for (VAR_11 = 0; VAR_11 < VAR_10; ++VAR_11) {
  VAR_12->counters[VAR_11].counter_dev = VAR_12;
  FUNC_3(&VAR_12->counters[VAR_11].lock);
 }
 VAR_12->num_counters = VAR_10;
 return VAR_12;
}
