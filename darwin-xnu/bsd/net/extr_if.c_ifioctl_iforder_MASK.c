
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef int u_long ;
typedef int u_int32_t ;
struct if_order {int ifo_count; int ifo_ordered_indices; } ;
typedef int * caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int ) ;
 int* FUNC_2 (size_t,int ,int ) ;
 int FUNC_3 (int ,int*,size_t) ;
 int VAR_7 ;
 int FUNC_4 (int*,size_t) ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_5(u_long VAR_8, caddr_t VAR_9)
{
 int VAR_10 = 0;
 u_int32_t *VAR_11 = ((void*)0);
 if (VAR_9 == ((void*)0)) {
  return (VAR_0);
 }

 switch (VAR_8) {
 case 128: {
  struct if_order *VAR_12 = (struct if_order *)(void *)VAR_9;

  if (VAR_12->ifo_count > (u_int32_t)VAR_7) {
   VAR_10 = VAR_0;
   break;
  }

  size_t VAR_13 = (VAR_12->ifo_count * sizeof(u_int32_t));
  if (VAR_13 > 0) {
   if (VAR_12->ifo_ordered_indices == VAR_6) {
    VAR_10 = VAR_0;
    break;
   }
   VAR_11 = FUNC_2(VAR_13, VAR_3, VAR_4);
   if (VAR_11 == ((void*)0)) {
    VAR_10 = VAR_1;
    break;
   }

   VAR_10 = FUNC_3(VAR_12->ifo_ordered_indices,
       VAR_11, VAR_13);
   if (VAR_10 != 0) {
    break;
   }


   bool VAR_14 = VAR_2;
   for (uint32_t VAR_15 = 0; VAR_15 < (VAR_12->ifo_count - 1) && !VAR_14 ; VAR_15++){
    for (uint32_t VAR_16 = VAR_15 + 1; VAR_16 < VAR_12->ifo_count && !VAR_14 ; VAR_16++){
     if (VAR_11[VAR_16] == VAR_11[VAR_15]){
      VAR_10 = VAR_0;
      VAR_14 = VAR_5;
      break;
     }
    }
   }
   if (VAR_14) {
    break;
   }
  }

  VAR_10 = FUNC_4(VAR_11, VAR_12->ifo_count);

  break;
 }

 default: {
  FUNC_0(0);

 }
 }

 if (VAR_11 != ((void*)0)) {
  FUNC_1(VAR_11, VAR_3);
 }

 return (VAR_10);
}
