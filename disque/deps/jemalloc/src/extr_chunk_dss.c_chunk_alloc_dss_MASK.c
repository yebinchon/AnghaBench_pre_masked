
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int chunk_hooks_t ;
typedef int arena_t ;


 scalar_t__ FUNC_0 (uintptr_t,size_t) ;
 size_t FUNC_1 (void*) ;
 int VAR_0 ;
 int FUNC_2 (void*,size_t) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,void*,size_t,int) ;
 void* FUNC_6 (intptr_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (void*,int ,size_t) ;
 int FUNC_10 (void*,size_t) ;

void *
FUNC_11(arena_t *VAR_7, void *VAR_8, size_t VAR_9, size_t VAR_10,
    bool *VAR_11, bool *VAR_12)
{
 FUNC_4(VAR_6);
 FUNC_3(VAR_9 > 0 && (VAR_9 & VAR_2) == 0);
 FUNC_3(VAR_10 > 0 && (VAR_10 & VAR_2) == 0);





 if ((intptr_t)VAR_9 < 0)
  return (((void*)0));

 FUNC_7(&VAR_4);
 if (VAR_5 != (void *)-1) {






  do {
   void *VAR_13, *VAR_14, *VAR_15;
   size_t VAR_16, VAR_17;
   intptr_t VAR_18;

   if (VAR_8 != ((void*)0) && VAR_3 != VAR_8)
    break;


   VAR_3 = FUNC_6(0);


   if (VAR_8 != ((void*)0) && VAR_3 != VAR_8)
    break;





   VAR_16 = (VAR_1 - FUNC_1(VAR_3)) &
       VAR_2;





   VAR_14 = (void *)((uintptr_t)VAR_3 + VAR_16);
   VAR_13 = (void *)FUNC_0((uintptr_t)VAR_3,
       VAR_10);
   VAR_17 = (uintptr_t)VAR_13 - (uintptr_t)VAR_14;
   VAR_15 = (void *)((uintptr_t)VAR_13 + VAR_9);
   if ((uintptr_t)VAR_13 < (uintptr_t)VAR_3 ||
       (uintptr_t)VAR_15 < (uintptr_t)VAR_3) {

    FUNC_8(&VAR_4);
    return (((void*)0));
   }
   VAR_18 = VAR_16 + VAR_17 + VAR_9;
   VAR_5 = FUNC_6(VAR_18);
   if (VAR_5 == VAR_3) {

    VAR_3 = VAR_15;
    FUNC_8(&VAR_4);
    if (VAR_17 != 0) {
     chunk_hooks_t VAR_19 =
         VAR_0;
     FUNC_5(VAR_7,
         &VAR_19, VAR_14, VAR_17,
         1);
    }
    if (*VAR_11) {
     FUNC_2(
         VAR_13, VAR_9);
     FUNC_9(VAR_13, 0, VAR_9);
    }
    if (!*VAR_12)
     *VAR_12 = FUNC_10(VAR_13, VAR_9);
    return (VAR_13);
   }
  } while (VAR_5 != (void *)-1);
 }
 FUNC_8(&VAR_4);

 return (((void*)0));
}
