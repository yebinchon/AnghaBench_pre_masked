
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct device {int * bus; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1, u64 VAR_2)
{
 FUNC_0(VAR_1->bus != &VAR_0);

 if (VAR_2 < 0x7fffffff)
  return 0;
 return 1;
}
