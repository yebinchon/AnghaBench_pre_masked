
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VH_OPTION ;
struct TYPE_8__ {int IcmpRawSocketOk; int IcmpApiOk; int * nat; int Counter; int lock; int ref; } ;
typedef TYPE_1__ VH ;
struct TYPE_9__ {scalar_t__ IsTtlSupported; } ;
typedef TYPE_2__ SOCK ;
typedef int NAT ;
typedef int CLIENT_OPTION ;
typedef int CLIENT_AUTH ;
typedef int CEDAR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_2__* FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_8 (int) ;

VH *FUNC_9(CEDAR *VAR_1, CLIENT_OPTION *VAR_2, CLIENT_AUTH *VAR_3, VH_OPTION *VAR_4, NAT *VAR_5)
{
 VH *VAR_6;
 SOCK *VAR_7;

 if (VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_6 = FUNC_8(sizeof(VH));
 VAR_6->ref = FUNC_4();
 VAR_6->lock = FUNC_3();
 VAR_6->Counter = FUNC_2();

 VAR_6->nat = VAR_5;


 VAR_7 = FUNC_5(FUNC_1(VAR_0), ((void*)0));
 if (VAR_7 != ((void*)0))
 {
  if (VAR_7->IsTtlSupported)
  {
   VAR_6->IcmpRawSocketOk = 1;
  }

  FUNC_6(VAR_7);
 }

 if (VAR_6->IcmpRawSocketOk == 0)
 {
  if (FUNC_0())
  {
   VAR_6->IcmpApiOk = 1;
  }
 }


 FUNC_7(VAR_6, VAR_4);

 return VAR_6;
}
