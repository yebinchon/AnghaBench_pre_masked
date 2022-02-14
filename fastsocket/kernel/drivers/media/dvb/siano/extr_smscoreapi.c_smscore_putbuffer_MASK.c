
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smscore_device_t {int bufferslock; int buffers; int buffer_mng_waitq; } ;
struct smscore_buffer_t {int entry; } ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct smscore_device_t *VAR_0,
  struct smscore_buffer_t *VAR_1) {
 FUNC_1(&VAR_0->buffer_mng_waitq);
 FUNC_0(&VAR_1->entry, &VAR_0->buffers, &VAR_0->bufferslock);
}
