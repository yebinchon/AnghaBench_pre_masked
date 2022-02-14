
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sht15_data {scalar_t__ flag; TYPE_1__* pdata; int wait_queue; int read_work; int interrupt_handled; } ;
struct TYPE_2__ {int gpio_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct sht15_data*) ;
 int FUNC_10 (struct sht15_data*,int) ;
 int FUNC_11 (int ,int,int ) ;

__attribute__((used)) static inline int FUNC_12(struct sht15_data *VAR_2,
       int VAR_3,
       int VAR_4)
{
 int VAR_5;
 VAR_5 = FUNC_10(VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_4(VAR_2->pdata->gpio_data);
 FUNC_1(&VAR_2->interrupt_handled, 0);

 FUNC_3(FUNC_6(VAR_2->pdata->gpio_data));
 if (FUNC_5(VAR_2->pdata->gpio_data) == 0) {
  FUNC_2(FUNC_6(VAR_2->pdata->gpio_data));

  if (!FUNC_0(&VAR_2->interrupt_handled))
   FUNC_8(&VAR_2->read_work);
 }
 VAR_5 = FUNC_11(VAR_2->wait_queue,
     (VAR_2->flag == VAR_1),
     FUNC_7(VAR_4));
 if (VAR_5 == 0) {
  FUNC_2(FUNC_6(VAR_2->pdata->gpio_data));
  FUNC_9(VAR_2);
  return -VAR_0;
 }
 return 0;
}
