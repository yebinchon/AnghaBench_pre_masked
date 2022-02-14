
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_private {int num_channels; int features; scalar_t__ reg; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct talitos_private* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_7)
{
 struct talitos_private *VAR_8 = FUNC_0(VAR_7);
 int VAR_9, VAR_10;







 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10)
  return VAR_10;


 for (VAR_9 = 0; VAR_9 < VAR_8->num_channels; VAR_9++) {
  VAR_10 = FUNC_1(VAR_7, VAR_9);
  if (VAR_10)
   return VAR_10;
 }


 FUNC_3(VAR_8->reg + VAR_1, VAR_2);
 FUNC_3(VAR_8->reg + VAR_3, VAR_4);


 if (VAR_8->features & VAR_0)
  FUNC_3(VAR_8->reg + VAR_5,
            VAR_6);

 return 0;
}
