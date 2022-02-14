
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysdev_class {int dummy; } ;
typedef int ssize_t ;
typedef int cpumask_var_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (char*,int,char*,...) ;
 int VAR_5 ;

__attribute__((used)) static ssize_t FUNC_5(struct sysdev_class *VAR_6, char *VAR_7)
{
 int VAR_8 = 0, VAR_9 = VAR_2-2;
 cpumask_var_t VAR_10;


 if (!FUNC_0(&VAR_10, VAR_1))
  return -VAR_0;
 FUNC_2(VAR_10, VAR_3);
 VAR_8 = FUNC_1(VAR_7, VAR_9, VAR_10);
 FUNC_3(VAR_10);


 if (VAR_5 && VAR_4 < VAR_5) {
  if (VAR_8 && VAR_8 < VAR_9)
   VAR_7[VAR_8++] = ',';

  if (VAR_4 == VAR_5-1)
   VAR_8 += FUNC_4(&VAR_7[VAR_8], VAR_9 - VAR_8, "%d", VAR_4);
  else
   VAR_8 += FUNC_4(&VAR_7[VAR_8], VAR_9 - VAR_8, "%d-%d",
            VAR_4, VAR_5-1);
 }

 VAR_8 += FUNC_4(&VAR_7[VAR_8], VAR_9 - VAR_8, "\n");
 return VAR_8;
}
