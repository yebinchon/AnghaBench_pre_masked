
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_2 (scalar_t__) ;
 int * FUNC_3 (scalar_t__) ;

__attribute__((used)) static u_int32_t
FUNC_4(bool VAR_8)
{
 static u_int32_t VAR_9 = 0;
 static u_int32_t VAR_10 = 0;

 u_int32_t VAR_11 = 0;

 FUNC_0(&VAR_7, VAR_1);

 if (VAR_8) {
  bool VAR_12 = VAR_0;
  do {
   VAR_9++;
   if (VAR_9 < VAR_4 ||
    VAR_9 >= VAR_3) {
    if (VAR_12) {

     FUNC_1(VAR_2, "Failed to find a free service UUID.\n");
     return (VAR_5);
    }
    VAR_9 = VAR_4;
    VAR_12 = VAR_6;
   }
   VAR_11 = VAR_9;
  } while (FUNC_3(VAR_11) != ((void*)0));
 } else {
  bool VAR_13 = VAR_0;
  do {
   VAR_10++;
   if (VAR_10 < VAR_3) {
    if (VAR_13) {

     FUNC_1(VAR_2, "Failed to find a free app UUID.\n");
     return (VAR_5);
    }
    VAR_10 = VAR_3;
    VAR_13 = VAR_6;
   }
   VAR_11 = VAR_10;
  } while (FUNC_2(VAR_11) != ((void*)0));
 }

 if (VAR_11 == VAR_5) {
  FUNC_1(VAR_2, "Allocate uuid ID failed.\n");
  return (VAR_5);
 }

 return (VAR_11);
}
