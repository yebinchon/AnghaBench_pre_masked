
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pca9532_data {int * idev; int work; TYPE_1__* leds; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int type; int work; int ldev; } ;





 int FUNC_0 (int *) ;
 struct pca9532_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pca9532_data*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_0)
{
 struct pca9532_data *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < 16; VAR_2++)
  switch (VAR_1->leds[VAR_2].type) {
  case 128:
   break;
  case 130:
   FUNC_6(&VAR_1->leds[VAR_2].ldev);
   FUNC_0(&VAR_1->leds[VAR_2].work);
   break;
  case 129:
   if (VAR_1->idev != ((void*)0)) {
    FUNC_4(VAR_1->idev);
    FUNC_3(VAR_1->idev);
    FUNC_0(&VAR_1->work);
    VAR_1->idev = ((void*)0);
   }
   break;
  }

 FUNC_5(VAR_1);
 FUNC_2(VAR_0, ((void*)0));
 return 0;
}
