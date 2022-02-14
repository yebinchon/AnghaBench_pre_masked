
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct channel_info {unsigned long group_count; int header_size; int group_size; } ;
typedef int ssize_t ;


 unsigned long VAR_0 ;
 struct channel_info* FUNC_0 (struct device*) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 struct channel_info *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;

 VAR_7 = FUNC_1(VAR_4->group_size);
 VAR_8 = FUNC_1(VAR_4->header_size);
 VAR_9 = VAR_7 * VAR_4->group_count;

 VAR_6 = (VAR_8 + VAR_9) * VAR_0;
 VAR_5 = FUNC_2(VAR_3, "%lu\n", VAR_6);
 return VAR_5;
}
