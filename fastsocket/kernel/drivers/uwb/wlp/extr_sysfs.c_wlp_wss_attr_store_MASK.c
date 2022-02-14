
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp_wss_attribute {int (* store ) (struct wlp_wss*,char const*,size_t) ;} ;
struct wlp_wss {int dummy; } ;
struct kobject {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct wlp_wss_attribute* FUNC_0 (struct attribute*) ;
 struct wlp_wss* FUNC_1 (struct kobject*) ;
 int FUNC_2 (struct wlp_wss*,char const*,size_t) ;

__attribute__((used)) static
ssize_t FUNC_3(struct kobject *VAR_1, struct attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct wlp_wss_attribute *VAR_5 = FUNC_0(VAR_2);
 struct wlp_wss *VAR_6 = FUNC_1(VAR_1);
 ssize_t VAR_7 = -VAR_0;

 if (VAR_5->store)
  VAR_7 = VAR_5->store(VAR_6, VAR_3, VAR_4);
 return VAR_7;
}
