
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef scalar_t__ errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,char*,size_t) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(void)
{
 if (FUNC_0(&VAR_4, VAR_6) != 0)
  FUNC_3("Warning: Some of the churn threads may have stopped early: %lld\n",
         VAR_4);

 FUNC_1(&VAR_3, VAR_1, VAR_6);


 for (uint32_t VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  errno_t VAR_8 = FUNC_4(VAR_5[VAR_7], ((void*)0));
  if (VAR_8) FUNC_2(VAR_0, VAR_8, "pthread_join %d", VAR_7);
 }
}
