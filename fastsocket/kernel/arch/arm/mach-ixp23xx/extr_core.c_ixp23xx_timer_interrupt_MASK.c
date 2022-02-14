
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int * VAR_3 ;
 long VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;

__attribute__((used)) static irqreturn_t
FUNC_1(int VAR_6, void *VAR_7)
{

 *VAR_3 = VAR_1;
 while ((signed long)(*VAR_2 - VAR_5) >= VAR_4) {
  FUNC_0();
  VAR_5 += VAR_4;
 }

 return VAR_0;
}
