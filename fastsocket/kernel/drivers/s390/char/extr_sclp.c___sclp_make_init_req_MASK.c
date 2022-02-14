
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct sclp_req {int dummy; } ;
struct TYPE_4__ {int length; } ;
struct init_sccb {int mask_length; scalar_t__ sclp_send_mask; scalar_t__ sclp_receive_mask; void* send_mask; void* receive_mask; TYPE_1__ header; } ;
typedef int sccb_mask_t ;
struct TYPE_5__ {struct init_sccb* sccb; int * callback_data; int * callback; scalar_t__ start_count; int status; int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct init_sccb*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 TYPE_2__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline void
FUNC_2(u32 VAR_4, u32 VAR_5)
{
 struct init_sccb *VAR_6;

 VAR_6 = (struct init_sccb *) VAR_3;
 FUNC_0(VAR_6);
 FUNC_1(&VAR_2, 0, sizeof(struct sclp_req));
 VAR_2.command = VAR_0;
 VAR_2.status = VAR_1;
 VAR_2.start_count = 0;
 VAR_2.callback = ((void*)0);
 VAR_2.callback_data = ((void*)0);
 VAR_2.sccb = VAR_6;
 VAR_6->header.length = sizeof(struct init_sccb);
 VAR_6->mask_length = sizeof(sccb_mask_t);
 VAR_6->receive_mask = VAR_4;
 VAR_6->send_mask = VAR_5;
 VAR_6->sclp_receive_mask = 0;
 VAR_6->sclp_send_mask = 0;
}
