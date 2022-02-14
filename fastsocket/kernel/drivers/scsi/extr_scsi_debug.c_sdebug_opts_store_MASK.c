
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char*,...) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device_driver * VAR_3,
     const char * VAR_4, size_t VAR_5)
{
        int VAR_6;
 char VAR_7[20];

        if (1 == FUNC_0(VAR_4, "%10s", VAR_7)) {
  if (0 == FUNC_1(VAR_7,"0x", 2)) {
   if (1 == FUNC_0(&VAR_7[2], "%x", &VAR_6))
    goto opts_done;
  } else {
   if (1 == FUNC_0(VAR_7, "%d", &VAR_6))
    goto opts_done;
  }
 }
 return -VAR_0;
opts_done:
 VAR_2 = VAR_6;
 VAR_1 = 0;
 return VAR_5;
}
