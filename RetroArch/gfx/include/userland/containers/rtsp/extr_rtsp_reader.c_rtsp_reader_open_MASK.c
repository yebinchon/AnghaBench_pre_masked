
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_20__ {size_t tracks_num; TYPE_4__* priv; TYPE_3__** tracks; } ;
typedef TYPE_5__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_21__ {int uri_has_network_info; char* comms_buffer; int header_list; scalar_t__ cseq_value; int next_rtp_port; TYPE_3__** tracks; } ;
typedef TYPE_6__ VC_CONTAINER_MODULE_T ;
typedef int VC_CONTAINERS_LIST_COMPARATOR_T ;
struct TYPE_19__ {int pf_seek; int pf_read; int (* pf_close ) (TYPE_5__*) ;TYPE_1__* io; TYPE_6__* module; int uri; } ;
struct TYPE_18__ {TYPE_2__* priv; } ;
struct TYPE_17__ {int module; } ;
struct TYPE_16__ {int uri; } ;
typedef int RTSP_HEADER_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*,char*,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_2 (int,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_6__*,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_6 (TYPE_5__*,int ) ;
 int FUNC_7 (TYPE_5__*) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_8 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (TYPE_5__*,int ,int ) ;
 int FUNC_12 (int ,int,int ) ;
 int FUNC_13 (int ) ;

VC_CONTAINER_STATUS_T FUNC_14( VC_CONTAINER_T *VAR_17 )
{
   VC_CONTAINER_MODULE_T *VAR_18 = 0;
   VC_CONTAINER_STATUS_T VAR_19 = VAR_13;
   uint32_t VAR_20;


   if (!FUNC_13(VAR_17->priv->uri) ||
       (FUNC_9(FUNC_13(VAR_17->priv->uri), VAR_7) &&
        FUNC_9(FUNC_13(VAR_17->priv->uri), VAR_6)))
      return VAR_11;


   if ((VAR_18 = (VC_CONTAINER_MODULE_T *)FUNC_3(sizeof(VC_CONTAINER_MODULE_T))) == ((void*)0))
   {
      VAR_19 = VAR_12;
      goto error;
   }

   FUNC_4(VAR_18, 0, sizeof(*VAR_18));
   VAR_17->priv->module = VAR_18;
   VAR_17->tracks = VAR_18->tracks;
   VAR_18->next_rtp_port = VAR_2;
   VAR_18->cseq_value = 0;
   VAR_18->uri_has_network_info =
         (FUNC_10(VAR_17->priv->io->uri, VAR_4, VAR_5) == 0);
   VAR_18->comms_buffer = (char *)FUNC_2(1, VAR_0+1);
   if (!VAR_18->comms_buffer) { VAR_19 = VAR_12; goto error; }


   VAR_18->header_list = FUNC_12(VAR_3, sizeof(RTSP_HEADER_T),
         (VC_CONTAINERS_LIST_COMPARATOR_T)VAR_14);
   if (!VAR_18->header_list) { VAR_19 = VAR_12; goto error; }

   VAR_19 = FUNC_5(VAR_17);
   for (VAR_20 = 0; VAR_19 == VAR_13 && VAR_20 < VAR_17->tracks_num; VAR_20++)
      VAR_19 = FUNC_8(VAR_17, VAR_17->tracks[VAR_20]->priv->module);
   for (VAR_20 = 0; VAR_19 == VAR_13 && VAR_20 < VAR_17->tracks_num; VAR_20++)
      VAR_19 = FUNC_6(VAR_17, VAR_17->tracks[VAR_20]->priv->module);
   if (VAR_19 != VAR_13)
      goto error;


   FUNC_11(VAR_17, VAR_8, VAR_1);

   VAR_17->priv->pf_close = FUNC_7;
   VAR_17->priv->pf_read = VAR_15;
   VAR_17->priv->pf_seek = VAR_16;

   if(FUNC_1(VAR_17) != VAR_13) goto error;
   return VAR_13;

error:
   if(VAR_19 == VAR_13 || VAR_19 == VAR_9)
      VAR_19 = VAR_10;
   FUNC_0(VAR_17, "error opening RTSP stream (%i)", VAR_19);
   FUNC_7(VAR_17);
   return VAR_19;
}
