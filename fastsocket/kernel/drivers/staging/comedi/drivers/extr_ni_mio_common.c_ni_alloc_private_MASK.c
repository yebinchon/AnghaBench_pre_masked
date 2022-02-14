
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_private {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int mite_channel_lock; int soft_reg_copy_lock; int window_lock; } ;


 int FUNC_0 (struct comedi_device*,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, sizeof(struct ni_private));
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_1(&VAR_0->window_lock);
 FUNC_1(&VAR_0->soft_reg_copy_lock);
 FUNC_1(&VAR_0->mite_channel_lock);

 return 0;
}
