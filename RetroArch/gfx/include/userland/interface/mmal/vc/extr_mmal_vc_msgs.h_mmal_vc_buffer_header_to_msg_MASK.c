
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int data; int alloc_size; int dts; int pts; int flags; int length; int offset; int cmd; } ;
struct TYPE_7__ {int buffer_header_type_specific; TYPE_1__ buffer_header; } ;
typedef TYPE_2__ mmal_worker_buffer_from_host ;
struct TYPE_8__ {int * type; int data; int alloc_size; int dts; int pts; int flags; int length; int offset; int cmd; } ;
typedef TYPE_3__ MMAL_BUFFER_HEADER_T ;



__attribute__((used)) static inline void FUNC_0(mmal_worker_buffer_from_host *VAR_0,
                                                MMAL_BUFFER_HEADER_T *VAR_1)
{
   VAR_0->buffer_header.cmd = VAR_1->cmd;
   VAR_0->buffer_header.offset = VAR_1->offset;
   VAR_0->buffer_header.length = VAR_1->length;
   VAR_0->buffer_header.flags = VAR_1->flags;
   VAR_0->buffer_header.pts = VAR_1->pts;
   VAR_0->buffer_header.dts = VAR_1->dts;
   VAR_0->buffer_header.alloc_size = VAR_1->alloc_size;
   VAR_0->buffer_header.data = VAR_1->data;
   VAR_0->buffer_header_type_specific = *VAR_1->type;
}
