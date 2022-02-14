
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct ff_device {int max_effects; struct file** effect_owners; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct ff_device *VAR_2, int VAR_3,
    struct file *VAR_4)
{
 if (VAR_3 < 0 || VAR_3 >= VAR_2->max_effects ||
     !VAR_2->effect_owners[VAR_3])
  return -VAR_1;

 if (VAR_4 && VAR_2->effect_owners[VAR_3] != VAR_4)
  return -VAR_0;

 return 0;
}
