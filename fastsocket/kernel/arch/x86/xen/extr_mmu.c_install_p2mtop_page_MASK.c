
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long**,scalar_t__,unsigned long*) ;
 scalar_t__ VAR_2 ;
 unsigned long** VAR_3 ;
 unsigned int FUNC_1 (unsigned long) ;
 unsigned long* VAR_4 ;
 unsigned long FUNC_2 (unsigned long*) ;

bool FUNC_3(unsigned long VAR_5, unsigned long *VAR_6)
{
 unsigned VAR_7 = FUNC_1(VAR_5);
 unsigned long **VAR_8, *VAR_9;
 unsigned VAR_10;

 VAR_8 = &VAR_3[VAR_7];
 VAR_9 = &VAR_4[VAR_7];

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
  VAR_6[VAR_10] = VAR_0;

 if (FUNC_0(VAR_8, VAR_2, VAR_6) == VAR_2) {
  *VAR_9 = FUNC_2(VAR_6);
  return 1;
 }

 return 0;
}
