
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char**,int) ;
 int FUNC_1 (char const*,size_t) ;
 int VAR_0 ;

__attribute__((used)) static ssize_t FUNC_2(struct device_driver *VAR_1,
 const char *VAR_2, size_t VAR_3)
{
 char *VAR_4 = (char *)VAR_2;

 if (VAR_4[1] == 'x' || VAR_4[1] == 'X' || VAR_4[0] == 'x' || VAR_4[0] == 'X')
  VAR_0 = FUNC_0(VAR_4, &VAR_4, 16);

 return FUNC_1(VAR_2, VAR_3);
}
