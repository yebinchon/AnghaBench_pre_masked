
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ctcm_priv {int protocol; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ,struct device*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 struct ctcm_priv* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,char*,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_7,
  struct device_attribute *VAR_8, const char *VAR_9, size_t VAR_10)
{
 int VAR_11;
 struct ctcm_priv *VAR_12 = FUNC_1(VAR_7);

 if (!VAR_12)
  return -VAR_5;
 FUNC_2(VAR_9, "%u", &VAR_11);
 if (!((VAR_11 == VAR_3) ||
       (VAR_11 == VAR_0) ||
       (VAR_11 == VAR_1) ||
       (VAR_11 == VAR_2)))
  return -VAR_4;
 VAR_12->protocol = VAR_11;
 FUNC_0(VAR_6, VAR_7, VAR_9);

 return VAR_10;
}
