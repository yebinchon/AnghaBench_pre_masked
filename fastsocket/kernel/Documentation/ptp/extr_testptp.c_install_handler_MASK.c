
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {void (* sa_handler ) (int) ;int sa_mask; scalar_t__ sa_flags; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int FUNC_0 (int,struct sigaction*,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int *) ;

__attribute__((used)) static int FUNC_4(int VAR_1, void (*VAR_2)(int))
{
 struct sigaction VAR_3;
 sigset_t VAR_4;


 FUNC_2(&VAR_4);
 FUNC_1(&VAR_4, VAR_1);
 FUNC_3(VAR_0, &VAR_4, ((void*)0));


 VAR_3.sa_handler = VAR_2;
 VAR_3.sa_flags = 0;
 FUNC_2(&VAR_3.sa_mask);
 FUNC_0(VAR_1, &VAR_3, ((void*)0));

 return 0;
}
