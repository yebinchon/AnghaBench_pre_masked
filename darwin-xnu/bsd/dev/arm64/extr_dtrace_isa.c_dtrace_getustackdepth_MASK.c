
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef int * thread_t ;
typedef int savearea_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(void)
{
 thread_t VAR_2 = FUNC_1();
 savearea_t *VAR_3;
 user_addr_t VAR_4, VAR_5, VAR_6;
 int VAR_7 = 0;

 if (VAR_2 == ((void*)0))
  return 0;

 if (FUNC_0(VAR_1))
  return (-1);

 VAR_3 = (savearea_t *) FUNC_3(VAR_2);
 if (VAR_3 == ((void*)0))
  return 0;

 VAR_4 = FUNC_6(VAR_3);
 VAR_5 = FUNC_7(VAR_3);
 VAR_6 = FUNC_4(VAR_3);

 if (FUNC_0(VAR_0)) {
  VAR_7++;
  VAR_4 = FUNC_5(VAR_3);
 }
 VAR_7 += FUNC_2(((void*)0), 0, VAR_4, VAR_6);

 return (VAR_7);
}
