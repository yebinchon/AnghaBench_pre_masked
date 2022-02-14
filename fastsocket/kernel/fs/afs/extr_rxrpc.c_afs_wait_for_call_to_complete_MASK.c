
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct afs_call {int error; scalar_t__ state; TYPE_1__* type; int * rxcall; int rx_queue; int waitq; } ;
struct TYPE_2__ {int (* destructor ) (struct afs_call*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct afs_call*) ;
 int FUNC_7 (struct afs_call*) ;
 int FUNC_8 (struct sk_buff*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 struct sk_buff* FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct afs_call*) ;

__attribute__((used)) static int FUNC_18(struct afs_call *VAR_7)
{
 struct sk_buff *VAR_8;
 int VAR_9;

 FUNC_0(VAR_6, VAR_5);

 FUNC_3("");

 FUNC_5(&VAR_7->waitq, &VAR_6);
 for (;;) {
  FUNC_13(VAR_3);


  if (!FUNC_16(&VAR_7->rx_queue)) {
   FUNC_1(VAR_4);
   FUNC_6(VAR_7);
   continue;
  }

  VAR_9 = VAR_7->error;
  if (VAR_7->state >= VAR_0)
   break;
  VAR_9 = -VAR_1;
  if (FUNC_14(VAR_5))
   break;
  FUNC_12();
 }

 FUNC_9(&VAR_7->waitq, &VAR_6);
 FUNC_1(VAR_4);


 if (VAR_7->state < VAR_0) {
  FUNC_2("call incomplete");
  FUNC_10(VAR_7->rxcall, VAR_2);
  while ((VAR_8 = FUNC_15(&VAR_7->rx_queue)))
   FUNC_8(VAR_8);
 }

 FUNC_2("call complete");
 FUNC_11(VAR_7->rxcall);
 VAR_7->rxcall = ((void*)0);
 VAR_7->type->destructor(VAR_7);
 FUNC_7(VAR_7);
 FUNC_4(" = %d", VAR_9);
 return VAR_9;
}
