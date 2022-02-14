
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static irqreturn_t
FUNC_5(int VAR_8, void *VAR_9)
{
 unsigned long VAR_10;

 if ((FUNC_1(VAR_5 + 0x9) & 0x02) == 0) {
  FUNC_2(&VAR_7, VAR_10);
  if (VAR_4 > 0) {
   FUNC_0(VAR_3);
   VAR_4 = 0;
  }
  VAR_6[1]++;
  VAR_2 = 1;
  FUNC_3(&VAR_7, VAR_10);
  FUNC_4(0, ((void*)0));
  return VAR_0;
 }
 return VAR_1;
}
