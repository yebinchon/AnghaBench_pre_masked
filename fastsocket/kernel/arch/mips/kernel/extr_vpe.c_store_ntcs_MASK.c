
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpe {unsigned long ntcs; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct vpe* FUNC_0 (unsigned long) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (char const*,char**,int ) ;
 unsigned long VAR_2 ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3, struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 struct vpe *VAR_7 = FUNC_0(VAR_2);
 unsigned long VAR_8;
 char *VAR_9;

 VAR_8 = FUNC_1(VAR_5, &VAR_9, 0);
 if (VAR_9 == VAR_5)
  goto out_einval;

 if (VAR_8 == 0 || VAR_8 > (VAR_1 - VAR_2))
  goto out_einval;

 VAR_7->ntcs = VAR_8;

 return VAR_6;

out_einval:
 return -VAR_0;
}
