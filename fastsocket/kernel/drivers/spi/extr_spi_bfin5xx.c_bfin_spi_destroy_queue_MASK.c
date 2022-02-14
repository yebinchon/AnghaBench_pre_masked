
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct driver_data {int workqueue; } ;


 int FUNC_0 (struct driver_data*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct driver_data *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 != 0)
  return VAR_1;

 FUNC_1(VAR_0->workqueue);

 return 0;
}
