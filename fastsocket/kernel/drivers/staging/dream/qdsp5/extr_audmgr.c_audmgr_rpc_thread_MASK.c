
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct rpc_request_hdr {int xid; int procedure; int type; } ;
struct TYPE_3__ {int accept_stat; } ;
struct TYPE_4__ {TYPE_1__ acc_hdr; } ;
struct rpc_reply_hdr {TYPE_2__ data; int reply_stat; } ;
struct audmgr {int wait; int * task; int ept; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct rpc_request_hdr*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,void**,int,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (scalar_t__,scalar_t__,void*,int,void*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(void *VAR_5)
{
 struct audmgr *VAR_6 = VAR_5;
 struct rpc_request_hdr *VAR_7 = ((void*)0);
 uint32_t VAR_8;
 int VAR_9;

 FUNC_5("audmgr_rpc_thread() start\n");

 while (!FUNC_2()) {
  if (VAR_7) {
   FUNC_1(VAR_7);
   VAR_7 = ((void*)0);
  }
  VAR_9 = FUNC_3(VAR_6->ept, (void **) &VAR_7, -1, -1);
  if (VAR_9 < 0) {
   FUNC_4("audmgr: rpc read failed (%d)\n", VAR_9);
   break;
  }
  if (VAR_9 < VAR_1)
   continue;

  VAR_8 = FUNC_0(VAR_7->type);
  if (VAR_8 == VAR_4) {
   struct rpc_reply_hdr *VAR_10 = (void *) VAR_7;
   uint32_t VAR_11;
   if (VAR_9 < VAR_2)
    continue;
   VAR_11 = FUNC_0(VAR_10->reply_stat);
   if (VAR_11 == VAR_0) {
    VAR_11 = FUNC_0(VAR_10->data.acc_hdr.accept_stat);
    FUNC_5("audmgr: rpc_reply status %d\n", VAR_11);
   } else {
    FUNC_5("audmgr: rpc_reply denied!\n");
   }

   continue;
  }

  if (VAR_9 < VAR_3)
   continue;

  FUNC_6(FUNC_0(VAR_7->procedure),
        FUNC_0(VAR_7->xid),
        (void *) (VAR_7 + 1),
        VAR_9 - sizeof(*VAR_7),
        VAR_5);
 }
 FUNC_5("audmgr_rpc_thread() exit\n");
 if (VAR_7) {
  FUNC_1(VAR_7);
  VAR_7 = ((void*)0);
 }
 VAR_6->task = ((void*)0);
 FUNC_7(&VAR_6->wait);
 return 0;
}
