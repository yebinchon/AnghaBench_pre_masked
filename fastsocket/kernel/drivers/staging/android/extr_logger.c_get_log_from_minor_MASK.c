
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int minor; } ;
struct logger_log {TYPE_1__ misc; } ;


 struct logger_log VAR_0 ;
 struct logger_log VAR_1 ;
 struct logger_log VAR_2 ;

__attribute__((used)) static struct logger_log *FUNC_0(int VAR_3)
{
 if (VAR_1.misc.minor == VAR_3)
  return &VAR_1;
 if (VAR_0.misc.minor == VAR_3)
  return &VAR_0;
 if (VAR_2.misc.minor == VAR_3)
  return &VAR_2;
 return ((void*)0);
}
