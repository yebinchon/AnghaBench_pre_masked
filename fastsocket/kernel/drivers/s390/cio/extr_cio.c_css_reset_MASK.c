
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chp_id {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct chp_id*) ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *) ;
 unsigned long long FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct chp_id) ;
 int * VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_11(void)
{
 int VAR_6, VAR_7;
 unsigned long long VAR_8;
 struct chp_id VAR_9;


 FUNC_6(VAR_2, ((void*)0));

 VAR_4 = VAR_5;

 FUNC_1(14, 28);

 FUNC_9();
 FUNC_4(&VAR_9);
 for (VAR_6 = 0; VAR_6 <= VAR_1; VAR_6++) {
  VAR_9.id = VAR_6;
  VAR_7 = FUNC_10(VAR_9);
  if ((VAR_7 == 0) || (VAR_7 == 2))




   FUNC_2(&VAR_3);
 }

 VAR_8 = FUNC_7() + (VAR_0 << 12);
 while (FUNC_3(&VAR_3) != 0) {
  if (FUNC_7() > VAR_8)
   break;
  FUNC_5();
 }

 FUNC_8();

 FUNC_0(14, 28);
 VAR_4 = ((void*)0);
}
