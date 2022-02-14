
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_hwmon {int lock; int client; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0,
        struct s3c_hwmon *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_1->lock);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_0(VAR_0, "reading channel %d\n", VAR_2);

 VAR_3 = FUNC_2(VAR_1->client, VAR_2);
 FUNC_3(&VAR_1->lock);

 return VAR_3;
}
