
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_1(struct device_driver * VAR_2,
      const char * VAR_3, size_t VAR_4)
{
        int VAR_5;
 char VAR_6[20];

        if (1 == FUNC_0(VAR_3, "%10s", VAR_6)) {
  if ((1 == FUNC_0(VAR_6, "%d", &VAR_5)) && (VAR_5 >= 0)) {
   VAR_1 = VAR_5;
   return VAR_4;
  }
 }
 return -VAR_0;
}
