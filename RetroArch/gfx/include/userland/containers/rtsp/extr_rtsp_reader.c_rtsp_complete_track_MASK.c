
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


struct TYPE_18__ {TYPE_2__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_T ;
struct TYPE_19__ {int * reader_uri; int reader; scalar_t__ rtp_port; int control_uri; } ;
typedef TYPE_4__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_20__ {TYPE_1__* priv; } ;
typedef TYPE_5__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_21__ {scalar_t__ uri_has_network_info; } ;
typedef TYPE_6__ VC_CONTAINER_MODULE_T ;
struct TYPE_17__ {TYPE_4__* module; } ;
struct TYPE_16__ {TYPE_6__* module; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_5__*,TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_7( VC_CONTAINER_T *VAR_8,
      VC_CONTAINER_TRACK_T *VAR_9 )
{
   VC_CONTAINER_MODULE_T *VAR_10 = VAR_8->priv->module;
   VC_CONTAINER_TRACK_MODULE_T *VAR_11 = VAR_9->priv->module;
   VC_CONTAINER_STATUS_T VAR_12 = VAR_7;

   if (!VAR_11->control_uri)
   {
      FUNC_0(VAR_8, "RTSP: Track control URI is missing");
      return VAR_4;
   }

   if (VAR_10->uri_has_network_info)
   {
      int VAR_13;

      if (!FUNC_6(VAR_11->reader_uri, ""))
      {
         FUNC_0(VAR_8, "RTSP: Failed to set track reader URI host");
         return VAR_5;
      }

      VAR_12 = FUNC_3(VAR_8, VAR_11);

      for (VAR_13 = 0; VAR_12 == VAR_6 && VAR_13 < VAR_0; VAR_13++)
      {

         VAR_11->rtp_port = 0;
         VAR_12 = FUNC_3(VAR_8, VAR_11);
      }


      if (VAR_12 == VAR_7)
         VAR_12 = FUNC_4(VAR_11->reader, VAR_3, 0);

      if (VAR_12 == VAR_7)
         VAR_12 = FUNC_4(VAR_11->reader, VAR_2, VAR_1);
   } else {
      VAR_12 = FUNC_2(VAR_8, VAR_11);
   }

   FUNC_5(VAR_11->reader_uri);
   VAR_11->reader_uri = ((void*)0);

   if (VAR_12 == VAR_7)
      VAR_12 = FUNC_1(VAR_8, VAR_9);

   return VAR_12;
}
