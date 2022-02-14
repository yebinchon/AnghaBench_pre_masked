
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifaddr {int dummy; } ;
struct dadq {int dummy; } ;


 int FUNC_0 (struct dadq*) ;
 int FUNC_1 (struct dadq*,struct ifaddr*) ;
 struct dadq* FUNC_2 (struct ifaddr*,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (void (*) (void*),void*) ;

void
FUNC_4(struct ifaddr *VAR_1)
{
 struct dadq *VAR_2;

 VAR_2 = FUNC_2(VAR_1, ((void*)0));
 if (!VAR_2) {

  return;
 }

 FUNC_3((void (*)(void *))VAR_0, (void *)VAR_1);

 FUNC_1(VAR_2, VAR_1);
 FUNC_0(VAR_2);
}
