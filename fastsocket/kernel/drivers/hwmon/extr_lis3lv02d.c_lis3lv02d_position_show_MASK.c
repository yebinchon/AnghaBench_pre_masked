
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int*,int*,int*) ;
 int FUNC_1 (char*,char*,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 FUNC_0(&VAR_0, &VAR_4, &VAR_5, &VAR_6);
 return FUNC_1(VAR_3, "(%d,%d,%d)\n", VAR_4, VAR_5, VAR_6);
}
