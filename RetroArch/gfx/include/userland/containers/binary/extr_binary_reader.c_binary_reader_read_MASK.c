
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_12__ {unsigned int size; int data; int buffer_size; scalar_t__ flags; scalar_t__ track; scalar_t__ pts; scalar_t__ dts; } ;
typedef TYPE_3__ VC_CONTAINER_PACKET_T ;
struct TYPE_13__ {scalar_t__ status; unsigned int block_size; unsigned int default_block_size; scalar_t__ init; } ;
typedef TYPE_4__ VC_CONTAINER_MODULE_T ;
struct TYPE_10__ {TYPE_4__* module; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 unsigned int FUNC_1 (TYPE_2__*,int ,unsigned int) ;
 unsigned int FUNC_2 (TYPE_2__*,unsigned int) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_4( VC_CONTAINER_T *VAR_4,
   VC_CONTAINER_PACKET_T *VAR_5, uint32_t VAR_6 )
{
   VC_CONTAINER_MODULE_T *VAR_7 = VAR_4->priv->module;
   unsigned int VAR_8;

   if(VAR_7->status != VAR_2)
      return VAR_7->status;

   if(!VAR_7->block_size)
   {
      VAR_7->block_size = VAR_7->default_block_size;
      VAR_7->init = 0;
   }

   VAR_5->size = VAR_7->block_size;
   VAR_5->dts = VAR_5->pts = VAR_3;
   if(VAR_7->init) VAR_5->dts = VAR_5->pts = 0;
   VAR_5->track = 0;
   VAR_5->flags = 0;

   if(VAR_6 & VAR_1)
   {
      VAR_8 = FUNC_2(VAR_4, VAR_7->block_size);
      VAR_7->block_size -= VAR_8;
      VAR_7->status = FUNC_3(VAR_4);
      return VAR_7->status;
   }

   if(VAR_6 & VAR_0)
      return VAR_2;

   VAR_8 = FUNC_0(VAR_7->block_size, VAR_5->buffer_size);
   VAR_8 = FUNC_1(VAR_4, VAR_5->data, VAR_8);
   VAR_7->block_size -= VAR_8;
   VAR_5->size = VAR_8;

   VAR_7->status = VAR_8 ? VAR_2 : FUNC_3(VAR_4);
   return VAR_7->status;
}
