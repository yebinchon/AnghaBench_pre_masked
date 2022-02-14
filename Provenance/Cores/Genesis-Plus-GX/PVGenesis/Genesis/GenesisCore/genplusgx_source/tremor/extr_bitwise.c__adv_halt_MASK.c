
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int headend; scalar_t__ headbit; TYPE_2__* head; scalar_t__ headptr; } ;
typedef TYPE_3__ oggpack_buffer ;
struct TYPE_6__ {scalar_t__ length; scalar_t__ begin; TYPE_1__* buffer; } ;
struct TYPE_5__ {scalar_t__ data; } ;



__attribute__((used)) static void FUNC_0(oggpack_buffer *VAR_0){
  VAR_0->headptr=VAR_0->head->buffer->data+VAR_0->head->begin+VAR_0->head->length;
  VAR_0->headend=-1;
  VAR_0->headbit=0;
}
