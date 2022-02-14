
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct channel_path {int chpid; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char const*,char*,int*,char*) ;
 struct channel_path* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
       struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 struct channel_path *VAR_5;
 int VAR_6;
 char VAR_7;

 if (FUNC_2(VAR_3, "%d %c", &VAR_6, &VAR_7) != 1)
  return -VAR_0;
 if (VAR_6 != 0 && VAR_6 != 1)
  return -VAR_0;
 VAR_5 = FUNC_3(VAR_1);
 FUNC_1(VAR_5->chpid, VAR_6);
 FUNC_0();

 return VAR_4;
}
