
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {TYPE_1__** interrupts; } ;
struct TYPE_3__ {int line_number; unsigned int irq; struct iio_dev* dev_info; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (unsigned int,int *,unsigned long,char const*,TYPE_1__*) ;

int FUNC_2(unsigned int VAR_2,
    struct iio_dev *VAR_3,
    int VAR_4,
    unsigned long VAR_5,
    const char *VAR_6)
{
 int VAR_7;

 VAR_3->interrupts[VAR_4] = FUNC_0();
 if (VAR_3->interrupts[VAR_4] == ((void*)0)) {
  VAR_7 = -VAR_0;
  goto error_ret;
 }
 VAR_3->interrupts[VAR_4]->line_number = VAR_4;
 VAR_3->interrupts[VAR_4]->irq = VAR_2;
 VAR_3->interrupts[VAR_4]->dev_info = VAR_3;





 VAR_7 = FUNC_1(VAR_2,
     &VAR_1,
     VAR_5,
     VAR_6,
     VAR_3->interrupts[VAR_4]);

error_ret:
 return VAR_7;
}
