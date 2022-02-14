
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_660x_private {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int * pfi_output_selects; int soft_reg_copy_lock; int interrupt_lock; int mite_channel_lock; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2)
{
 int VAR_3;
 unsigned VAR_4;

 VAR_3 = FUNC_0(VAR_2, sizeof(struct ni_660x_private));
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_2(&FUNC_1(VAR_2)->mite_channel_lock);
 FUNC_2(&FUNC_1(VAR_2)->interrupt_lock);
 FUNC_2(&FUNC_1(VAR_2)->soft_reg_copy_lock);
 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  FUNC_1(VAR_2)->pfi_output_selects[VAR_4] = VAR_1;
 }
 return 0;
}
