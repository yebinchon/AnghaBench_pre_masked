
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char const*,char*,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device_driver * VAR_1,
         const char * VAR_2, size_t VAR_3)
{
 int VAR_4;

 if (FUNC_2(VAR_2, "%d", &VAR_4) != 1)
  return -VAR_0;
 if (VAR_4 > 0) {
  do {
   FUNC_0();
  } while (--VAR_4);
 } else if (VAR_4 < 0) {
  do {
   FUNC_1();
  } while (++VAR_4);
 }
 return VAR_3;
}
