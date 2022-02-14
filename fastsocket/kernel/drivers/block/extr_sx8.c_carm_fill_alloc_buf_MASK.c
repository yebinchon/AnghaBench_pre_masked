
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct carm_msg_allocbuf {int n_sg; TYPE_1__* sg; void* n_msg; void* msg_pool; void* n_rbuf; void* rbuf_pool; void* n_evt; void* evt_pool; void* len; void* addr; int sg_type; void* handle; int subtype; int type; } ;
struct carm_host {int shm_dma; } ;
struct TYPE_2__ {void* len; void* start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct carm_msg_allocbuf*,int ,int) ;

__attribute__((used)) static unsigned int FUNC_3(struct carm_host *VAR_7,
     unsigned int VAR_8, void *VAR_9)
{
 struct carm_msg_allocbuf *VAR_10 = VAR_9;

 FUNC_2(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->type = VAR_0;
 VAR_10->subtype = VAR_2;
 VAR_10->handle = FUNC_1(FUNC_0(VAR_8));
 VAR_10->n_sg = 1;
 VAR_10->sg_type = VAR_6;
 VAR_10->addr = FUNC_1(VAR_7->shm_dma + (VAR_3 >> 1));
 VAR_10->len = FUNC_1(VAR_3 >> 1);
 VAR_10->evt_pool = FUNC_1(VAR_7->shm_dma + (16 * 1024));
 VAR_10->n_evt = FUNC_1(1024);
 VAR_10->rbuf_pool = FUNC_1(VAR_7->shm_dma);
 VAR_10->n_rbuf = FUNC_1(VAR_5);
 VAR_10->msg_pool = FUNC_1(VAR_7->shm_dma + VAR_4);
 VAR_10->n_msg = FUNC_1(VAR_1);
 VAR_10->sg[0].start = FUNC_1(VAR_7->shm_dma + (VAR_3 >> 1));
 VAR_10->sg[0].len = FUNC_1(65536);

 return sizeof(struct carm_msg_allocbuf);
}
