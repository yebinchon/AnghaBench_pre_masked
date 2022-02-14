
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx231xx {int gpio_i2c_lock; } ;


 int FUNC_0 (struct cx231xx*) ;
 int FUNC_1 (struct cx231xx*) ;
 int FUNC_2 (struct cx231xx*,int*) ;
 int FUNC_3 (struct cx231xx*) ;
 int FUNC_4 (struct cx231xx*) ;
 int FUNC_5 (struct cx231xx*,int) ;
 int FUNC_6 (struct cx231xx*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct cx231xx *VAR_0, u8 VAR_1, u8 *VAR_2, u8 VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = 0;


 FUNC_7(&VAR_0->gpio_i2c_lock);


 VAR_4 = FUNC_3(VAR_0);


 VAR_4 = FUNC_5(VAR_0, (VAR_1 << 1) + 1);


 VAR_4 = FUNC_1(VAR_0);


 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {

  VAR_2[VAR_5] = 0;
  VAR_4 = FUNC_2(VAR_0, &VAR_2[VAR_5]);

  if ((VAR_5 + 1) != VAR_3) {

   VAR_4 = FUNC_4(VAR_0);
  }
 }


 VAR_4 = FUNC_6(VAR_0);


 VAR_4 = FUNC_0(VAR_0);


 FUNC_8(&VAR_0->gpio_i2c_lock);

 return VAR_4;
}
