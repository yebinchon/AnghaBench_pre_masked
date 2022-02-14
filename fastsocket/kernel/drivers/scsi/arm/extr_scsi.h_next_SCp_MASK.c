
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_pointer {int buffers_residual; scalar_t__ this_residual; int * ptr; TYPE_1__* buffer; } ;
struct TYPE_4__ {scalar_t__ length; } ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static inline int FUNC_2(struct scsi_pointer *VAR_0)
{
 int VAR_1 = VAR_0->buffers_residual;
 if (VAR_1) {
  VAR_0->buffer = FUNC_0(VAR_0->buffer);
  VAR_0->buffers_residual--;
  VAR_0->ptr = FUNC_1(VAR_0->buffer);
  VAR_0->this_residual = VAR_0->buffer->length;
 } else {
  VAR_0->ptr = ((void*)0);
  VAR_0->this_residual = 0;
 }
 return VAR_1;
}
