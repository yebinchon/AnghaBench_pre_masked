
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;

int FUNC_2(unsigned long VAR_1, unsigned long VAR_2,
         int VAR_3)
{

 unsigned long VAR_4;
 unsigned long VAR_5;

 VAR_5 = FUNC_0(VAR_2);

 VAR_4 = VAR_5 + VAR_3;

 while(VAR_5 < VAR_4) {
  FUNC_1(VAR_1, VAR_5);
  VAR_1 += VAR_0;
  VAR_5 += VAR_0;
 }

 return 0;

}
