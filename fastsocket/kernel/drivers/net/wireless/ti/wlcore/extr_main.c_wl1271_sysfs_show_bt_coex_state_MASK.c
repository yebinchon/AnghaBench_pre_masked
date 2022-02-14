
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int sg_enabled; int mutex; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct wl1271* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
            struct device_attribute *VAR_2,
            char *VAR_3)
{
 struct wl1271 *VAR_4 = FUNC_0(VAR_1);
 ssize_t VAR_5;

 VAR_5 = VAR_0;

 FUNC_1(&VAR_4->mutex);
 VAR_5 = FUNC_3(VAR_3, VAR_5, "%d\n\n0 - off\n1 - on\n",
         VAR_4->sg_enabled);
 FUNC_2(&VAR_4->mutex);

 return VAR_5;

}
