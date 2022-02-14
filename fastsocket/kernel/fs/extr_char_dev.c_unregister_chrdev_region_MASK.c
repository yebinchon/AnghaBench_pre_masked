
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int dev_t ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ,unsigned int) ;
 int FUNC_4 (int ) ;

void FUNC_5(dev_t VAR_0, unsigned VAR_1)
{
 dev_t VAR_2 = VAR_0 + VAR_1;
 dev_t VAR_3, VAR_4;

 for (VAR_3 = VAR_0; VAR_3 < VAR_2; VAR_3 = VAR_4) {
  VAR_4 = FUNC_2(FUNC_0(VAR_3)+1, 0);
  if (VAR_4 > VAR_2)
   VAR_4 = VAR_2;
  FUNC_4(FUNC_3(FUNC_0(VAR_3), FUNC_1(VAR_3), VAR_4 - VAR_3));
 }
}
