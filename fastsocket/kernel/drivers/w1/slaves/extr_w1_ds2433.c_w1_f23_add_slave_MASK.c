
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct w1_slave {TYPE_1__ dev; struct w1_f23_data* family_data; } ;
struct w1_f23_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct w1_f23_data*) ;
 struct w1_f23_data* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct w1_slave *VAR_3)
{
 int VAR_4;
 VAR_4 = FUNC_2(&VAR_3->dev.kobj, &VAR_2);






 return VAR_4;
}
