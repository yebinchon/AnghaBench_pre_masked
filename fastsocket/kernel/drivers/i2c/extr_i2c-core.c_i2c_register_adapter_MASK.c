
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int parent; int * type; TYPE_1__* bus; } ;
struct i2c_adapter {scalar_t__ timeout; scalar_t__ nr; TYPE_2__ dev; int name; int bus_lock; } ;
struct TYPE_8__ {int p; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *,struct i2c_adapter*,int ) ;
 int FUNC_2 (int ,TYPE_2__*,int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;
 int FUNC_4 (TYPE_2__*,char*,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (struct i2c_adapter*) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct i2c_adapter *VAR_9)
{
 int VAR_10 = 0, VAR_11;


 if (FUNC_12(FUNC_0(!VAR_7.p))) {
  VAR_10 = -VAR_0;
  goto out_list;
 }

 FUNC_9(&VAR_9->bus_lock);


 if (VAR_9->timeout == 0)
  VAR_9->timeout = VAR_1;

 FUNC_4(&VAR_9->dev, "i2c-%d", VAR_9->nr);
 VAR_9->dev.bus = &VAR_7;
 VAR_9->dev.type = &VAR_6;
 VAR_10 = FUNC_6(&VAR_9->dev);
 if (VAR_10)
  goto out_list;

 FUNC_3(&VAR_9->dev, "adapter [%s] registered\n", VAR_9->name);
 if (VAR_9->nr < VAR_2)
  FUNC_7(VAR_9);


 FUNC_10(&VAR_3);
 VAR_11 = FUNC_1(&VAR_7, ((void*)0), VAR_9,
     VAR_8);
 FUNC_11(&VAR_3);

 return 0;

out_list:
 FUNC_10(&VAR_3);
 FUNC_8(&VAR_5, VAR_9->nr);
 FUNC_11(&VAR_3);
 return VAR_10;
}
