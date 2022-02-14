
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_bit_data {int data; int (* setscl ) (int ,int) ;int (* setsda ) (int ,int) ;scalar_t__ (* getscl ) (int ) ;} ;
struct i2c_adapter {int class; struct i2c_algo_bit_data* algo_data; } ;


 int VAR_0 ;
 unsigned char* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int ,int) ;

unsigned char *FUNC_18(struct i2c_adapter *VAR_1)
{
 struct i2c_algo_bit_data *VAR_2 = VAR_1->algo_data;
 unsigned char *VAR_3 = ((void*)0);
 int VAR_4, VAR_5;

 VAR_2->setscl(VAR_2->data, 1);

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {



  VAR_2->setsda(VAR_2->data, 1);
  FUNC_1(13);

  VAR_2->setscl(VAR_2->data, 1);
  for (VAR_5 = 0; VAR_5 < 5; VAR_5++) {
   FUNC_1(10);
   if (VAR_2->getscl(VAR_2->data))
    break;
  }
  if (VAR_5 == 5)
   continue;

  VAR_2->setsda(VAR_2->data, 0);
  FUNC_1(15);
  VAR_2->setscl(VAR_2->data, 0);
  FUNC_1(15);
  VAR_2->setsda(VAR_2->data, 1);
  FUNC_1(15);


  VAR_3 = FUNC_0(VAR_1);
  VAR_2->setsda(VAR_2->data, 0);
  VAR_2->setscl(VAR_2->data, 0);
  FUNC_1(15);

  VAR_2->setscl(VAR_2->data, 1);
  for (VAR_5 = 0; VAR_5 < 10; VAR_5++) {
   FUNC_1(10);
   if (VAR_2->getscl(VAR_2->data))
    break;
  }

  VAR_2->setsda(VAR_2->data, 1);
  FUNC_1(15);
  VAR_2->setscl(VAR_2->data, 0);
  VAR_2->setsda(VAR_2->data, 0);
  if (VAR_3)
   break;
 }



 VAR_2->setsda(VAR_2->data, 1);
 VAR_2->setscl(VAR_2->data, 1);

 VAR_1->class |= VAR_0;
 return VAR_3;
}
