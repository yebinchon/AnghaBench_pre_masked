
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_msg_header {int dummy; } ;
struct st_hba {int req_head; int rq_size; scalar_t__ dma_mem; } ;
struct req_msg {int dummy; } ;



__attribute__((used)) static struct req_msg *FUNC_0(struct st_hba *VAR_0)
{
 return (struct req_msg *)(VAR_0->dma_mem +
  VAR_0->req_head * VAR_0->rq_size + sizeof(struct st_msg_header));
}
