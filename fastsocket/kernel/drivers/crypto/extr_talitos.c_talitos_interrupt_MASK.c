
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct talitos_private {int done_task; scalar_t__ reg; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (scalar_t__,int ) ;
 struct talitos_private* FUNC_1 (struct device*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (unsigned long,int,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_9, void *VAR_10)
{
 struct device *VAR_11 = VAR_10;
 struct talitos_private *VAR_12 = FUNC_1(VAR_11);
 u32 VAR_13, VAR_14;

 VAR_13 = FUNC_2(VAR_12->reg + VAR_6);
 VAR_14 = FUNC_2(VAR_12->reg + VAR_8);

 FUNC_4(VAR_12->reg + VAR_2, VAR_13);
 FUNC_4(VAR_12->reg + VAR_3, VAR_14);

 if (FUNC_7((VAR_13 & ~VAR_7) || VAR_14))
  FUNC_5((unsigned long)VAR_10, VAR_13, VAR_14);
 else
  if (FUNC_3(VAR_13 & VAR_7)) {

   FUNC_0(VAR_12->reg + VAR_4, VAR_5);

   FUNC_6(&VAR_12->done_task);
  }

 return (VAR_13 || VAR_14) ? VAR_0 : VAR_1;
}
