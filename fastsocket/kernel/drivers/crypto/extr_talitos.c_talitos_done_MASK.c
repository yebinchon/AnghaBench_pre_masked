
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_private {int num_channels; scalar_t__ reg; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct talitos_private* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int,int ,int ) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_4)
{
 struct device *VAR_5 = (struct device *)VAR_4;
 struct talitos_private *VAR_6 = FUNC_0(VAR_5);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_6->num_channels; VAR_7++)
  FUNC_1(VAR_5, VAR_7, 0, 0);




 FUNC_2(VAR_6->reg + VAR_0, VAR_1);
 FUNC_2(VAR_6->reg + VAR_2, VAR_3);
}
