
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smscore_device_t {int dummy; } ;
struct smscore_device_notifyee_t {int (* hotplug ) (struct smscore_device_t*,struct device*,int) ;} ;
struct list_head {struct list_head* next; } ;
struct device {int dummy; } ;


 struct list_head VAR_0 ;
 int FUNC_0 (struct smscore_device_t*,struct device*,int) ;

__attribute__((used)) static int FUNC_1(struct smscore_device_t *VAR_1,
        struct device *VAR_2, int VAR_3)
{
 struct list_head *VAR_4, *VAR_5;
 int VAR_6 = 0;



 VAR_5 = &VAR_0;

 for (VAR_4 = VAR_5->next; VAR_4 != VAR_5; VAR_4 = VAR_4->next) {
  VAR_6 = ((struct smscore_device_notifyee_t *) VAR_4)->
    hotplug(VAR_1, VAR_2, VAR_3);
  if (VAR_6 < 0)
   break;
 }

 return VAR_6;
}
