
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumask {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,struct cpumask const*) ;

__attribute__((used)) static ssize_t FUNC_1(char *VAR_1, const struct cpumask *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1, VAR_0-2, VAR_2);

 VAR_1[VAR_3++] = '\n';
 VAR_1[VAR_3] = '\0';
 return VAR_3;
}
