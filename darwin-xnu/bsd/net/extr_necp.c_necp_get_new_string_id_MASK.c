
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_2 (int *,int) ;

__attribute__((used)) static u_int32_t
FUNC_3(void)
{
 static u_int32_t VAR_6 = 0;

 u_int32_t VAR_7 = 0;

 FUNC_0(&VAR_5, VAR_1);

 bool VAR_8 = VAR_0;
 do {
  VAR_6++;
  if (VAR_6 < 1) {
   if (VAR_8) {

    FUNC_1(VAR_2, "Failed to find a free app UUID.\n");
    return (0);
   }
   VAR_6 = 1;
   VAR_8 = VAR_3;
  }
  VAR_7 = VAR_6;
 } while (FUNC_2(&VAR_4, VAR_7) != ((void*)0));

 if (VAR_7 == 0) {
  FUNC_1(VAR_2, "Allocate string id failed.\n");
  return (0);
 }

 return (VAR_7);
}
