
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ d_type; scalar_t__ d_slave; scalar_t__ d_flags; int d_name; struct device* d_next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*,char const*,int) ;
 struct device* VAR_2 ;
 scalar_t__ FUNC_1 (int ,char const*) ;

void
FUNC_2(const char *VAR_3, const char *VAR_4, int VAR_5)
{
 struct device *VAR_6;
 int VAR_7;

 for (VAR_7 = 0,VAR_6 = VAR_2; VAR_6 != 0; VAR_6 = VAR_6->d_next)
  if (FUNC_1(VAR_6->d_name, VAR_3)) {
   if (VAR_6->d_type == VAR_0) {
    VAR_7 =
        VAR_6->d_slave != VAR_1 ? VAR_6->d_slave : 1;
    if (VAR_6->d_flags)
     VAR_3 = ((void*)0);
    break;
   }
  }
 FUNC_0(VAR_3, VAR_4, VAR_7);
}
