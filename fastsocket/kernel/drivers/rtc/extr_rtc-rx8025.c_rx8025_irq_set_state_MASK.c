
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx8025_data {int ctrl1; int client; } ;
struct i2c_client {scalar_t__ irq; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rx8025_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ,int ,int) ;
 struct i2c_client* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_4, int VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_2(VAR_4);
 struct rx8025_data *VAR_7 = FUNC_0(VAR_6);
 int VAR_8;
 int VAR_9;

 if (VAR_6->irq <= 0)
  return -VAR_0;

 VAR_8 = VAR_7->ctrl1 & ~VAR_1;
 if (VAR_5)
  VAR_8 |= VAR_2;
 if (VAR_8 != VAR_7->ctrl1) {
  VAR_7->ctrl1 = VAR_8;
  VAR_9 = FUNC_1(VAR_7->client, VAR_3,
           VAR_7->ctrl1);
  if (VAR_9)
   return VAR_9;
 }

 return 0;
}
