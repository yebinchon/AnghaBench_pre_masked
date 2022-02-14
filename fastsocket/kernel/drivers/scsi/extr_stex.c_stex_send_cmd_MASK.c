
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct st_hba {scalar_t__ mmio_base; int req_head; int out_req_cnt; TYPE_1__* ccb; } ;
struct req_msg {int tag; } ;
struct TYPE_2__ {struct req_msg* req; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct st_hba *VAR_3, struct req_msg *VAR_4, u16 VAR_5)
{
 VAR_4->tag = FUNC_0(VAR_5);

 VAR_3->ccb[VAR_5].req = VAR_4;
 VAR_3->out_req_cnt++;

 FUNC_2(VAR_3->req_head, VAR_3->mmio_base + VAR_1);
 FUNC_2(VAR_2, VAR_3->mmio_base + VAR_0);
 FUNC_1(VAR_3->mmio_base + VAR_0);
}
