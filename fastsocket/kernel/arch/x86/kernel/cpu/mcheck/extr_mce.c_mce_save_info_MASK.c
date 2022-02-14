
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mce_info {int restartable; int paddr; int t; int inuse; } ;
typedef int __u64 ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
 int VAR_1 ;
 struct mce_info* VAR_2 ;
 int FUNC_1 (char*,int *,int *) ;

__attribute__((used)) static void FUNC_2(__u64 VAR_3, int VAR_4)
{
 struct mce_info *VAR_5;

 for (VAR_5 = VAR_2; VAR_5 < &VAR_2[VAR_0]; VAR_5++) {
  if (FUNC_0(&VAR_5->inuse, 0, 1) == 0) {
   VAR_5->t = VAR_1;
   VAR_5->paddr = VAR_3;
   VAR_5->restartable = VAR_4;
   return;
  }
 }

 FUNC_1("Too many concurrent recoverable errors", ((void*)0), ((void*)0));
}
