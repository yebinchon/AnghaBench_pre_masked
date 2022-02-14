
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_pointer {unsigned int ptr; unsigned int this_residual; scalar_t__ buffers_residual; TYPE_1__* buffer; scalar_t__ Status; } ;
struct TYPE_2__ {unsigned int length; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct scsi_pointer *VAR_0, unsigned int VAR_1)
{
 VAR_0->ptr += VAR_1;
 if ((VAR_0->this_residual -= VAR_1) == 0) {
  if ((--VAR_0->buffers_residual) == 0)
   VAR_0->Status = 0;
  else {
   VAR_0->buffer++;
   VAR_0->ptr = FUNC_0(VAR_0->buffer);
   VAR_0->this_residual = VAR_0->buffer->length;
  }
 }
}
