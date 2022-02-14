
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ab3100 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ab3100*,int ,int,int) ;
 struct ab3100* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, unsigned int VAR_2)
{
 struct ab3100 *VAR_3 = FUNC_1(VAR_1);
 if (VAR_2)
  return FUNC_0(VAR_3,
          VAR_0, ~(1 << 2),
          1 << 2);
 else
  return FUNC_0(VAR_3,
          VAR_0, ~(1 << 2),
          0);
}
