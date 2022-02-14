
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct virtual_consumer_data {int regulator; int mode; int lock; } ;
struct TYPE_5__ {char* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * VAR_2 ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (struct virtual_consumer_data*) ;
 struct virtual_consumer_data* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct platform_device*,struct virtual_consumer_data*) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_3)
{
 char *VAR_4 = VAR_3->dev.platform_data;
 struct virtual_consumer_data *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_7(sizeof(struct virtual_consumer_data), VAR_1);
 if (VAR_5 == ((void*)0)) {
  return -VAR_0;
 }

 FUNC_8(&VAR_5->lock);

 VAR_5->regulator = FUNC_10(&VAR_3->dev, VAR_4);
 if (FUNC_1(VAR_5->regulator)) {
  VAR_6 = FUNC_2(VAR_5->regulator);
  FUNC_3(&VAR_3->dev, "Failed to obtain supply '%s': %d\n",
   VAR_4, VAR_6);
  goto err;
 }

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++) {
  VAR_6 = FUNC_4(&VAR_3->dev, VAR_2[VAR_7]);
  if (VAR_6 != 0) {
   FUNC_3(&VAR_3->dev, "Failed to create attr %d: %d\n",
    VAR_7, VAR_6);
   goto err_regulator;
  }
 }

 VAR_5->mode = FUNC_11(VAR_5->regulator);

 FUNC_9(VAR_3, VAR_5);

 return 0;

err_regulator:
 FUNC_12(VAR_5->regulator);
err:
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++)
  FUNC_5(&VAR_3->dev, VAR_2[VAR_7]);
 FUNC_6(VAR_5);
 return VAR_6;
}
