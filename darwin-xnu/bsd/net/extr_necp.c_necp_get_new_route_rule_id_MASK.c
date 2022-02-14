
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
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_2 (int *,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static u_int32_t
FUNC_3(bool VAR_9)
{
 static u_int32_t VAR_10 = 0;
 static u_int32_t VAR_11 = 0;

 u_int32_t VAR_12 = 0;

 if (!VAR_9) {

  FUNC_0(&VAR_6, VAR_1);

  bool VAR_13 = VAR_0;
  do {
   VAR_10++;
   if (VAR_10 < VAR_4 ||
    VAR_10 >= VAR_3) {
    if (VAR_13) {

     FUNC_1(VAR_2, "Failed to find a free route rule id.\n");
     return (0);
    }
    VAR_10 = VAR_4;
    VAR_13 = VAR_5;
   }
   VAR_12 = VAR_10;
  } while (FUNC_2(&VAR_8, VAR_12) != ((void*)0));
 } else {

  FUNC_0(&VAR_7, VAR_1);

  bool VAR_14 = VAR_0;
  do {
   VAR_11++;
   if (VAR_11 < VAR_3) {
    if (VAR_14) {

     FUNC_1(VAR_2, "Failed to find a free aggregate route rule id.\n");
     return (0);
    }
    VAR_11 = VAR_3;
    VAR_14 = VAR_5;
   }
   VAR_12 = VAR_11;
  } while (FUNC_2(&VAR_8, VAR_12) != ((void*)0));
 }

 if (VAR_12 == 0) {
  FUNC_1(VAR_2, "Allocate route rule ID failed.\n");
  return (0);
 }

 return (VAR_12);
}
