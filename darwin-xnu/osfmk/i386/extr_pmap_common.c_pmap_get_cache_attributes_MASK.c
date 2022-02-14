
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ppnum_t ;
typedef scalar_t__ boolean_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (size_t) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 unsigned int* VAR_5 ;
 size_t FUNC_2 (int ) ;

unsigned FUNC_3(ppnum_t VAR_6, boolean_t VAR_7) {
 if (VAR_4 == 0)
  return 0;

 if (!FUNC_0(FUNC_2(VAR_6)))
     return FUNC_1(VAR_7);




 unsigned int VAR_8 = VAR_5[FUNC_2(VAR_6)];
 unsigned int VAR_9 = 0;




 if ((VAR_8 & VAR_3) && !VAR_7)
  VAR_9 |= VAR_1;





 if (VAR_8 & VAR_2)
  VAR_9 |= FUNC_1(VAR_7);
 else if (VAR_7)
  VAR_9 |= VAR_0;

 return VAR_9;
}
