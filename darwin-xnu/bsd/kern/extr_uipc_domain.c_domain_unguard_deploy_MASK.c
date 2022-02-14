
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ net_thread_marks_t ;
typedef int domain_unguard_t ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;

domain_unguard_t
FUNC_3(void)
{
 net_thread_marks_t VAR_5;

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5 != VAR_4) {
  FUNC_0(&VAR_3, VAR_1);
  FUNC_1(&VAR_3);
 }
 else
  FUNC_0(&VAR_3, VAR_0);

 return ((domain_unguard_t)(const void*)VAR_5);
}
