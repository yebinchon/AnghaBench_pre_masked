
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {TYPE_5__* session_header; TYPE_5__* control_uri; scalar_t__ reader_uri; scalar_t__ reader; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_16__ {unsigned int tracks_num; TYPE_2__* priv; TYPE_7__** tracks; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_17__ {scalar_t__ header_list; struct TYPE_17__* comms_buffer; } ;
typedef TYPE_5__ VC_CONTAINER_MODULE_T ;
struct TYPE_18__ {TYPE_1__* priv; } ;
struct TYPE_14__ {TYPE_5__* module; } ;
struct TYPE_13__ {TYPE_3__* module; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_4__*,TYPE_7__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_7( VC_CONTAINER_T *VAR_1 )
{
   VC_CONTAINER_MODULE_T *VAR_2 = VAR_1->priv->module;
   unsigned int VAR_3;

   for(VAR_3 = 0; VAR_3 < VAR_1->tracks_num; VAR_3++)
   {
      VC_CONTAINER_TRACK_MODULE_T *VAR_4 = VAR_1->tracks[VAR_3]->priv->module;

      if (VAR_4->control_uri && VAR_4->session_header)
      {


         if (FUNC_2(VAR_1, VAR_4) == VAR_0)
            (void)FUNC_1(VAR_1);
      }

      if (VAR_4->reader)
         FUNC_3(VAR_4->reader);
      if (VAR_4->reader_uri)
         FUNC_6(VAR_4->reader_uri);
      if (VAR_4->control_uri)
         FUNC_0(VAR_4->control_uri);
      if (VAR_4->session_header)
         FUNC_0(VAR_4->session_header);
      FUNC_4(VAR_1, VAR_1->tracks[VAR_3]);
   }
   VAR_1->tracks = ((void*)0);
   VAR_1->tracks_num = 0;
   if (VAR_2)
   {
      if (VAR_2->comms_buffer)
         FUNC_0(VAR_2->comms_buffer);
      if (VAR_2->header_list)
         FUNC_5(VAR_2->header_list);
      FUNC_0(VAR_2);
   }
   VAR_1->priv->module = 0;
   return VAR_0;
}
