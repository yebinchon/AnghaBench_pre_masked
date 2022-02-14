
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ni_gpct {int lock; TYPE_2__* mite_chan; TYPE_1__* counter_dev; } ;
struct TYPE_4__ {int dir; } ;
struct TYPE_3__ {int variant; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;



 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct ni_gpct *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3 = 0;

 switch (VAR_1->counter_dev->variant) {
 case 128:
 case 130:
  return 1;
  break;
 case 129:
  FUNC_1(&VAR_1->lock, VAR_2);
  {
   if (VAR_1->mite_chan == ((void*)0) ||
       VAR_1->mite_chan->dir != VAR_0 ||
       (FUNC_0(VAR_1->mite_chan))) {
    VAR_3 = 1;
   }
  }
  FUNC_2(&VAR_1->lock, VAR_2);
  break;
 }
 return VAR_3;
}
