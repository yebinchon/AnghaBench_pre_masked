
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* priv; TYPE_3__* out; TYPE_3__* in; } ;
typedef TYPE_1__ VC_PACKETIZER_T ;
struct TYPE_13__ {int time; int stream; } ;
typedef TYPE_2__ VC_PACKETIZER_PRIVATE_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_FOURCC_T ;
struct TYPE_14__ {int codec_variant; scalar_t__ extradata_size; int extradata; } ;
typedef TYPE_3__ VC_CONTAINER_ES_FORMAT_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*,scalar_t__) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;

VC_PACKETIZER_T *FUNC_8( VC_CONTAINER_ES_FORMAT_T *VAR_2,
   VC_CONTAINER_FOURCC_T VAR_3, VC_CONTAINER_STATUS_T *VAR_4 )
{
   VC_CONTAINER_STATUS_T VAR_5 = VAR_1;
   VC_PACKETIZER_T *VAR_6 = 0;


   VAR_6 = FUNC_1( sizeof(*VAR_6) + sizeof(*VAR_6->priv));
   if(!VAR_6) { VAR_5 = VAR_0; goto error; }
   FUNC_2(VAR_6, 0, sizeof(*VAR_6) + sizeof(*VAR_6->priv));
   VAR_6->priv = (VC_PACKETIZER_PRIVATE_T *)(VAR_6 + 1);
   FUNC_0( &VAR_6->priv->stream );

   VAR_6->in = FUNC_4(VAR_2->extradata_size);
   if(!VAR_6->in) { VAR_5 = VAR_0; goto error; }
   VAR_6->out = FUNC_4(VAR_2->extradata_size);
   if(!VAR_6->out) { VAR_5 = VAR_0; goto error; }

   FUNC_3( VAR_6->in, VAR_2, VAR_2->extradata_size );
   VAR_6->in->extradata_size = 0;
   FUNC_3( VAR_6->out, VAR_6->in, VAR_2->extradata_size );
   VAR_6->in->extradata_size = VAR_2->extradata_size;
   VAR_6->out->extradata = VAR_6->in->extradata;
   VAR_6->out->extradata_size = VAR_6->in->extradata_size;
   VAR_6->out->codec_variant = VAR_3;

   FUNC_5(&VAR_6->priv->time, 1000000);

   VAR_5 = FUNC_7(VAR_6);
   if(VAR_5 != VAR_1)
      goto error;

 end:
   if(VAR_4) *VAR_4 = VAR_5;
   return VAR_6;

 error:
   if(VAR_6) FUNC_6(VAR_6);
   VAR_6 = ((void*)0);
   goto end;
}
