
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp_wss_attribute {int (* show ) (struct wlp_wss*,char*) ;} ;
struct wlp_wss {int dummy; } ;
struct kobject {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct wlp_wss_attribute* FUNC_0 (struct attribute*) ;
 struct wlp_wss* FUNC_1 (struct kobject*) ;
 int FUNC_2 (struct wlp_wss*,char*) ;

__attribute__((used)) static
ssize_t FUNC_3(struct kobject *VAR_1, struct attribute *VAR_2,
     char *VAR_3)
{
 struct wlp_wss_attribute *VAR_4 = FUNC_0(VAR_2);
 struct wlp_wss *VAR_5 = FUNC_1(VAR_1);
 ssize_t VAR_6 = -VAR_0;

 if (VAR_4->show)
  VAR_6 = VAR_4->show(VAR_5, VAR_3);
 return VAR_6;
}
