
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pca9532_led {int state; int id; struct i2c_client* client; } ;
struct pca9532_data {int update_lock; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct pca9532_data* FUNC_2 (struct i2c_client*) ;
 char FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,char) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct pca9532_led *VAR_0)
{
 struct i2c_client *VAR_1 = VAR_0->client;
 struct pca9532_data *VAR_2 = FUNC_2(VAR_1);
 char VAR_3;

 FUNC_5(&VAR_2->update_lock);
 VAR_3 = FUNC_3(VAR_1, FUNC_1(VAR_0->id));

 VAR_3 = VAR_3 & ~(0x3<<FUNC_0(VAR_0->id)*2);

 VAR_3 = VAR_3 | (VAR_0->state << FUNC_0(VAR_0->id)*2);
 FUNC_4(VAR_1, FUNC_1(VAR_0->id), VAR_3);
 FUNC_6(&VAR_2->update_lock);
}
