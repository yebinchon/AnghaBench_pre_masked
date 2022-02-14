
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(int *VAR_6)
{
 int VAR_7;
 int VAR_8 = FUNC_6();
 u64 VAR_9 = (u64)VAR_5 * VAR_0;

 if (!VAR_9)
  return -1;

 FUNC_0(*VAR_6, &VAR_2);



 FUNC_8();
 VAR_7 = FUNC_1(&VAR_3);




 while (FUNC_2(&VAR_3) != VAR_8) {
  if (FUNC_4(&VAR_9)) {
   FUNC_3(&VAR_2, 0);
   return -1;
  }
  FUNC_5(VAR_1);
 }




 FUNC_7();

 if (VAR_7 == 1) {



  FUNC_3(&VAR_4, 1);
 } else {






  while (FUNC_2(&VAR_4) < VAR_7) {
   if (FUNC_4(&VAR_9)) {
    FUNC_3(&VAR_2, 0);
    return -1;
   }
   FUNC_5(VAR_1);
  }
 }




 *VAR_6 = FUNC_2(&VAR_2);

 return VAR_7;
}
