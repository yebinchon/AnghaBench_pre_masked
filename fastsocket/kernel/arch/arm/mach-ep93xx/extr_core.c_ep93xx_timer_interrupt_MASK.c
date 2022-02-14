
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 () ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 FUNC_1(1, VAR_0);
 while ((signed long)
  (FUNC_0(VAR_1) - VAR_4)
      >= VAR_3) {
  VAR_4 += VAR_3;
  FUNC_2();
 }

 return VAR_2;
}
