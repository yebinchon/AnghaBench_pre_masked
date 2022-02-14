
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ccw_device {int dummy; } ;
struct ccw_dev_id {int dummy; } ;


 struct device* FUNC_0 (int *,int *,struct ccw_dev_id*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ccw_device* FUNC_1 (struct device*) ;

__attribute__((used)) static struct ccw_device *FUNC_2(struct ccw_dev_id *VAR_2)
{
 struct device *VAR_3;

 VAR_3 = FUNC_0(&VAR_0, ((void*)0), VAR_2, VAR_1);

 return VAR_3 ? FUNC_1(VAR_3) : ((void*)0);
}
