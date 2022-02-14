
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (int,int ,int ,int*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int* VAR_0 ;

__attribute__((used)) static int FUNC_5(int VAR_1)
{
 uint64_t VAR_2[16] =
     { 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1 };






 int VAR_3 = FUNC_0(VAR_1, 0);
 int VAR_4 = VAR_0[VAR_1];
 while (VAR_4--) {




  if (&FUNC_1)
   FUNC_1(VAR_3, VAR_2);

  FUNC_2(VAR_3,
         FUNC_3(VAR_3,
              0),
         FUNC_4(VAR_3),
         VAR_2);
  VAR_3++;
 }
 return 0;
}
