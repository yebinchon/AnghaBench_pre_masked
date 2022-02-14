
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ppnum_t ;


 int FUNC_0 (size_t) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (size_t,int ,unsigned int,void*) ;
 unsigned int* VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;

unsigned int
FUNC_3(ppnum_t VAR_8, unsigned int VAR_9, void *VAR_10)
{
 unsigned VAR_11, VAR_12 = 0;

 FUNC_2(VAR_8, 0, VAR_9, VAR_10);

 FUNC_1(VAR_8 != VAR_6);
 if ((VAR_8 == VAR_7) || !FUNC_0(VAR_8) || (VAR_9 & VAR_2))
  return 0;
 VAR_11 = VAR_5[VAR_8] & (VAR_0 | VAR_1);

 if (VAR_11 & VAR_0)
         VAR_12 |= VAR_3;
 if (VAR_11 & VAR_1)
         VAR_12 |= VAR_4;

 return VAR_12;
}
