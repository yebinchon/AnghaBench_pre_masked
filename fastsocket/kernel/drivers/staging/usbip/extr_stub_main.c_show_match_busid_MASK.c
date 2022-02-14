
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 char** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct device_driver *VAR_3, char *VAR_4)
{
 int VAR_5;
 char *VAR_6 = VAR_4;

 FUNC_0(&VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if (VAR_1[VAR_5][0])
   VAR_6 += FUNC_2(VAR_6, "%s ", VAR_1[VAR_5]);

 FUNC_1(&VAR_2);

 VAR_6 += FUNC_2(VAR_6, "\n");

 return VAR_6 - VAR_4;
}
