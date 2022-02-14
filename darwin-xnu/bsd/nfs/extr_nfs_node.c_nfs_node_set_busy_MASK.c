
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int thread_t ;
struct timespec {int member_0; int member_1; } ;
typedef TYPE_1__* nfsnode_t ;
struct TYPE_7__ {int n_flag; int n_lock; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int *,scalar_t__,char*,struct timespec*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int *,int ,int ) ;

int
FUNC_7(nfsnode_t VAR_3, thread_t VAR_4)
{
 struct timespec VAR_5 = { 2, 0 };
 int VAR_6;

 if ((VAR_6 = FUNC_4(VAR_3)))
  return (VAR_6);
 while (FUNC_0(VAR_3->n_flag, VAR_0)) {
  FUNC_2(VAR_3->n_flag, VAR_1);
  FUNC_3(VAR_3, &VAR_3->n_lock, VAR_2-1, "nfsbusywant", &VAR_5);
  if ((VAR_6 = FUNC_6(FUNC_1(VAR_3), ((void*)0), VAR_4, 0)))
   break;
 }
 if (!VAR_6)
  FUNC_2(VAR_3->n_flag, VAR_0);
 FUNC_5(VAR_3);
 return (VAR_6);
}
