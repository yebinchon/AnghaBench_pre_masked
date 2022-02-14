
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int VH_OPTION ;
struct TYPE_11__ {int Virtual; } ;
struct TYPE_10__ {int Cedar; } ;
struct TYPE_9__ {TYPE_6__* Nat; int lock; TYPE_2__* Hub; int Cedar; } ;
typedef int THREAD ;
typedef TYPE_1__ SNAT ;
typedef TYPE_2__ HUB ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,TYPE_1__*) ;
 TYPE_6__* FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int) ;

SNAT *FUNC_7(HUB *VAR_1, VH_OPTION *VAR_2)
{
 SNAT *VAR_3;
 THREAD *VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_6(sizeof(SNAT));
 VAR_3->Cedar = VAR_1->Cedar;
 VAR_3->Hub = VAR_1;
 VAR_3->lock = FUNC_0();


 VAR_3->Nat = FUNC_2(VAR_3, VAR_2);


 FUNC_4(VAR_3->Nat->Virtual);


 VAR_4 = FUNC_1(VAR_0, VAR_3);
 FUNC_5(VAR_4);
 FUNC_3(VAR_4);

 return VAR_3;
}
