
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt {int sopt_level; int sopt_name; int sopt_valsize; int sopt_p; int sopt_val; int sopt_dir; } ;
typedef int * socket_t ;
typedef int errno_t ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct sockopt*,int) ;

errno_t
FUNC_2(socket_t VAR_3, int VAR_4, int VAR_5, void *VAR_6,
    int *VAR_7)
{
 int VAR_8 = 0;
 struct sockopt VAR_9;

 if (VAR_3 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
  return (VAR_0);

 VAR_9.sopt_dir = VAR_1;
 VAR_9.sopt_level = VAR_4;
 VAR_9.sopt_name = VAR_5;
 VAR_9.sopt_val = FUNC_0(VAR_6);
 VAR_9.sopt_valsize = *VAR_7;
 VAR_9.sopt_p = VAR_2;
 VAR_8 = FUNC_1(VAR_3, &VAR_9, 1);
 if (VAR_8 == 0)
  *VAR_7 = VAR_9.sopt_valsize;
 return (VAR_8);
}
