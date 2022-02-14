
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 int VAR_6;






 do {
  VAR_6 = 0;
  if (VAR_3[0] &&
      (FUNC_0(VAR_3[0], VAR_0) & VAR_1)) {
   (void)FUNC_1(VAR_4, VAR_3[0]);
   VAR_6 = 1;
  }
  if (VAR_3[1] &&
      (FUNC_0(VAR_3[1], VAR_0) & VAR_1)) {
   (void)FUNC_1(VAR_4, VAR_3[1]);
   VAR_6 = 1;
  }
 } while (VAR_6);

 return VAR_2;
}
