
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task {int dummy; } ;
struct label {int dummy; } ;


 int FUNC_0 (int ,int *,struct label*,struct label*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 struct label* FUNC_2 (struct task*) ;
 struct task* VAR_1 ;

int FUNC_3(struct task *VAR_2, struct label *VAR_3) {
 int VAR_4;

 FUNC_1(VAR_2 != VAR_1);

 struct label *VAR_5 = FUNC_2(VAR_2);

 FUNC_0(VAR_0, ((void*)0), VAR_5, VAR_3);

 return (VAR_4);
}
