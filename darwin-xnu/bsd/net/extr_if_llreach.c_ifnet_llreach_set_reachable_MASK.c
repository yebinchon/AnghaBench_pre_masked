
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int16_t ;
struct ifnet {int if_llreach_lock; int if_ll_srcs; } ;
struct TYPE_2__ {int addr; int proto; } ;
struct if_llreach {int lr_lastrcvd; TYPE_1__ lr_key; } ;


 unsigned int VAR_0 ;
 struct if_llreach* FUNC_0 (int ,int *,struct if_llreach*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,int *,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 () ;

void
FUNC_6(struct ifnet *VAR_2, u_int16_t VAR_3, void *VAR_4,
    unsigned int VAR_5)
{
 struct if_llreach VAR_6, *VAR_7;

 FUNC_1(VAR_5 == VAR_0);

 VAR_6.lr_key.proto = VAR_3;
 FUNC_2(VAR_4, &VAR_6.lr_key.addr, VAR_0);

 FUNC_4(&VAR_2->if_llreach_lock);
 VAR_7 = FUNC_0(VAR_1, &VAR_2->if_ll_srcs, &VAR_6);
 if (VAR_7 == ((void*)0)) {
  FUNC_3(&VAR_2->if_llreach_lock);
  return;
 }



 VAR_7->lr_lastrcvd = FUNC_5();
 FUNC_3(&VAR_2->if_llreach_lock);
}
