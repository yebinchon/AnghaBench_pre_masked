
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int rand ;
typedef int pass2 ;
typedef int code ;
typedef int UCHAR ;
struct TYPE_21__ {int AdminThreadList; int AdminSockList; int HashedPassword; } ;
struct TYPE_20__ {TYPE_2__* s; TYPE_1__* r; } ;
struct TYPE_19__ {int ref; } ;
struct TYPE_18__ {scalar_t__ ThreadParam; } ;
typedef TYPE_2__ THREAD ;
typedef TYPE_3__ TCP_ACCEPTED_PARAM ;
typedef TYPE_2__ SOCK ;
typedef int RPC ;
typedef TYPE_5__ EL ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int*,int*,int) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int*,int) ;
 int FUNC_9 (TYPE_2__*,int*,int,int) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_2 ;
 int FUNC_14 (int*,int ,int*) ;
 int FUNC_15 (TYPE_2__*,int*,int,int) ;
 int FUNC_16 (TYPE_2__*,int) ;
 int * FUNC_17 (TYPE_2__*,int ,TYPE_5__*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int*,int) ;

void FUNC_20(THREAD *VAR_3, void *VAR_4)
{
 TCP_ACCEPTED_PARAM *VAR_5 = (TCP_ACCEPTED_PARAM *)VAR_4;
 EL *VAR_6;
 SOCK *VAR_7;
 UCHAR VAR_8[VAR_2];
 UCHAR VAR_9[VAR_2], VAR_10[VAR_2];

 if (VAR_5 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_6 = (EL *)VAR_5->r->ThreadParam;
 VAR_7 = VAR_5->s;
 FUNC_0(VAR_7->ref);
 FUNC_16(VAR_7, 5000);
 FUNC_6(VAR_6->AdminThreadList);
 {
  FUNC_0(VAR_3->ref);
  FUNC_0(VAR_7->ref);
  FUNC_5(VAR_6->AdminThreadList, VAR_3);
  FUNC_5(VAR_6->AdminSockList, VAR_7);
 }
 FUNC_18(VAR_6->AdminThreadList);
 FUNC_7(VAR_3);


 FUNC_8(VAR_8, sizeof(VAR_8));
 FUNC_15(VAR_7, VAR_8, sizeof(VAR_8), 0);


 FUNC_14(VAR_9, VAR_6->HashedPassword, VAR_8);
 FUNC_19(VAR_10, sizeof(VAR_10));
 (void)FUNC_9(VAR_7, VAR_10, sizeof(VAR_10), 0);

 if (FUNC_1(VAR_9, VAR_10, VAR_2) != 0)
 {

  bool VAR_11 = 0;
  VAR_11 = FUNC_4(VAR_11);
  FUNC_15(VAR_7, &VAR_11, sizeof(VAR_11), 0);
 }
 else
 {

  bool VAR_12 = 1;
  RPC *VAR_13;

  VAR_12 = FUNC_4(VAR_12);
  FUNC_15(VAR_7, &VAR_12, sizeof(VAR_12), 0);

  FUNC_16(VAR_7, VAR_1);


  VAR_13 = FUNC_17(VAR_7, VAR_0, VAR_6);
  FUNC_13(VAR_13);
  FUNC_12(VAR_13);
 }

 FUNC_3(VAR_7);
 FUNC_10(VAR_7);

 FUNC_6(VAR_6->AdminThreadList);
 {
  if (FUNC_2(VAR_6->AdminThreadList, VAR_3))
  {
   FUNC_11(VAR_3);
  }
  if (FUNC_2(VAR_6->AdminSockList, VAR_7))
  {
   FUNC_10(VAR_7);
  }
 }
 FUNC_18(VAR_6->AdminThreadList);
}
