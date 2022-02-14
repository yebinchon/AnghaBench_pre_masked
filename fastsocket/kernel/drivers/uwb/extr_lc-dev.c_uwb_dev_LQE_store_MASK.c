
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_dev {struct uwb_beca_e* bce; } ;
struct uwb_beca_e {int mutex; int lqe_stats; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,size_t) ;
 struct uwb_dev* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
     struct device_attribute *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 struct uwb_dev *VAR_4 = FUNC_3(VAR_0);
 struct uwb_beca_e *VAR_5 = VAR_4->bce;
 ssize_t VAR_6;

 FUNC_0(&VAR_5->mutex);
 VAR_6 = FUNC_2(&VAR_4->bce->lqe_stats, VAR_2, VAR_3);
 FUNC_1(&VAR_5->mutex);
 return VAR_6;
}
