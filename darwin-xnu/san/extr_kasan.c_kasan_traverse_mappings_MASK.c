
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* pmap_traverse_callback ) (uintptr_t,uintptr_t,void*) ;


 int VAR_0 ;
 uintptr_t VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (uintptr_t) ;
 uintptr_t FUNC_2 (uintptr_t,int ) ;
 uintptr_t FUNC_3 (uintptr_t,int ) ;

int
FUNC_4(pmap_traverse_callback VAR_4, void *VAR_5)
{
 uintptr_t VAR_6 = (uintptr_t)FUNC_0(VAR_3);
 uintptr_t VAR_7 = (uintptr_t)FUNC_0(VAR_2);
 VAR_6 = FUNC_3(VAR_6, VAR_0);
 VAR_7 = FUNC_2(VAR_7, VAR_0);

 uintptr_t VAR_8 = 0, VAR_9 = 0;

 for (uintptr_t VAR_10 = VAR_6; VAR_10 < VAR_7; VAR_10 += VAR_1) {
  if (FUNC_1(VAR_10)) {
   if (VAR_8 == 0) {
    VAR_8 = VAR_10;
   }
   VAR_9 = VAR_10 + VAR_1;
  } else if (VAR_8 && VAR_9) {
   VAR_4(VAR_8, VAR_9, VAR_5);
   VAR_8 = VAR_9 = 0;
  }
 }

 if (VAR_8 && VAR_9) {
  VAR_4(VAR_8, VAR_9, VAR_5);
 }

 return 0;
}
