
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int member_1; int member_0; } ;
typedef int fd_set ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static bool FUNC_3(int VAR_0)
{
 fd_set VAR_1;
 struct timeval VAR_2 = { 0, 0 };
 FUNC_1(&VAR_1);
 FUNC_0(VAR_0, &VAR_1);
 return FUNC_2(VAR_0+1, &VAR_1, ((void*)0), ((void*)0), &VAR_2) != 1;
}
