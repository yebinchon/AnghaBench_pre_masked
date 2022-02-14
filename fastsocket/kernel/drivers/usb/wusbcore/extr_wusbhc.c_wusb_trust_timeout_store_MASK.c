
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {unsigned int trust_timeout; int keep_alive_timer; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,unsigned int) ;
 int FUNC_3 (char const*,char*,unsigned int*) ;
 struct wusbhc* FUNC_4 (struct device*) ;
 int VAR_3 ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_4,
     struct device_attribute *VAR_5,
     const char *VAR_6, size_t VAR_7)
{
 struct wusbhc *VAR_8 = FUNC_4(VAR_4);
 ssize_t VAR_9 = -VAR_2;
 unsigned VAR_10;

 VAR_9 = FUNC_3(VAR_6, "%u", &VAR_10);
 if (VAR_9 != 1) {
  VAR_9 = -VAR_1;
  goto out;
 }

 VAR_8->trust_timeout = VAR_10;
 FUNC_0(&VAR_8->keep_alive_timer);
 FUNC_1(VAR_3);
 FUNC_2(VAR_3, &VAR_8->keep_alive_timer,
      (VAR_10 * VAR_0)/1000/2);
out:
 return VAR_9 < 0 ? VAR_9 : VAR_7;
}
