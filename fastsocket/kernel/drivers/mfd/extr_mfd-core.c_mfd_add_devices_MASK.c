
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct mfd_cell {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int,struct mfd_cell const*,struct resource*,int) ;
 int FUNC_1 (struct device*) ;

int FUNC_2(struct device *VAR_0, int VAR_1,
      const struct mfd_cell *VAR_2, int VAR_3,
      struct resource *VAR_4,
      int VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2 + VAR_6, VAR_4, VAR_5);
  if (VAR_7)
   break;
 }

 if (VAR_7)
  FUNC_1(VAR_0);

 return VAR_7;
}
