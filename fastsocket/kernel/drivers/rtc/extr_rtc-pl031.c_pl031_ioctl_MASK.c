
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl031_local {scalar_t__ base; } ;
struct device {int dummy; } ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;
 struct pl031_local* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, unsigned int VAR_3, unsigned long VAR_4)
{
 struct pl031_local *VAR_5 = FUNC_1(VAR_2);

 switch (VAR_3) {
 case 129:
  FUNC_0(1, VAR_5->base + VAR_1);
  return 0;
 case 128:
  FUNC_0(0, VAR_5->base + VAR_1);
  return 0;
 }

 return -VAR_0;
}
