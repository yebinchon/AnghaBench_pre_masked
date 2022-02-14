
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t buf_size; size_t buf_count; } ;
typedef TYPE_1__ alsa_qsa_t ;



__attribute__((used)) static size_t FUNC_0(void *VAR_0)
{
   alsa_qsa_t *VAR_1 = (alsa_qsa_t*)VAR_0;
   return VAR_1->buf_size * VAR_1->buf_count;
}
