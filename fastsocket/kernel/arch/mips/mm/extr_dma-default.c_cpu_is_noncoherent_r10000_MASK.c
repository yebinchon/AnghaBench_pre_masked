
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct device*) ;

__attribute__((used)) static inline int FUNC_2(struct device *VAR_2)
{
 return !FUNC_1(VAR_2) &&
        (FUNC_0() == VAR_0 ||
        FUNC_0() == VAR_1);
}
