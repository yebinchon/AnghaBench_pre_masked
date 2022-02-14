
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bus_type {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int *,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct bus_type *VAR_1, const char *VAR_2, size_t VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2, ((void*)0), 10);

 if (VAR_4 == 1)
  VAR_0 = 1;
 else if (VAR_4 == 0)
  VAR_0 = 0;

 return VAR_3;
}
