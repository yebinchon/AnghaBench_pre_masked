
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum kmemcheck_shadow { ____Placeholder_kmemcheck_shadow } kmemcheck_shadow ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 void* FUNC_0 (unsigned long) ;
 int FUNC_1 (void*,int,unsigned int) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, unsigned int VAR_3,
 enum kmemcheck_shadow VAR_4)
{
 unsigned long VAR_5 = (unsigned long) VAR_2;
 unsigned long VAR_6 = VAR_5 + VAR_3 - 1;
 unsigned long VAR_7 = VAR_5 & VAR_0;
 unsigned long VAR_8 = VAR_6 & VAR_0;
 unsigned int VAR_9;
 void *VAR_10;


 if (VAR_7 == VAR_8)
  VAR_9 = VAR_3;
 else
  VAR_9 = VAR_7 + VAR_1 - VAR_5;

 VAR_10 = FUNC_0(VAR_5);
 if (VAR_10)
  FUNC_1(VAR_10, VAR_4, VAR_9);

 VAR_5 += VAR_9;
 VAR_3 -= VAR_9;


 while (VAR_3 >= VAR_1) {
  VAR_10 = FUNC_0(VAR_5);
  if (VAR_10)
   FUNC_1(VAR_10, VAR_4, VAR_1);

  VAR_5 += VAR_1;
  VAR_3 -= VAR_1;
 }


 if (VAR_3 > 0) {
  VAR_10 = FUNC_0(VAR_5);
  if (VAR_10)
   FUNC_1(VAR_10, VAR_4, VAR_3);
 }
}
