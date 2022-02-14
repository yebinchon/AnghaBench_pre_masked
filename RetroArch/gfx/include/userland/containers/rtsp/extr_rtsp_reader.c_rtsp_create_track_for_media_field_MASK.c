
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_TRACK_T ;
struct TYPE_15__ {char* payload_type; char* media_type; scalar_t__ reader_uri; int rtp_port; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_16__ {scalar_t__ tracks_num; TYPE_2__** tracks; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_13__ {TYPE_3__* module; } ;


 int FUNC_0 (TYPE_4__*,char*,scalar_t__) ;
 int FUNC_1 (TYPE_4__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_2 (char**) ;
 int FUNC_3 (char*,char*,int *) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 TYPE_2__* FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_7 (scalar_t__,int ,char*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_11(VC_CONTAINER_T *VAR_6,
      char *VAR_7,
      VC_CONTAINER_TRACK_T **VAR_8 )
{
   VC_CONTAINER_TRACK_T *VAR_9 = ((void*)0);
   VC_CONTAINER_TRACK_MODULE_T *VAR_10 = ((void*)0);
   char *VAR_11 = VAR_7;
   char *VAR_12;
   char *VAR_13;
   char *VAR_14;
   char *VAR_15;

   *VAR_8 = ((void*)0);
   if (VAR_6->tracks_num == VAR_2)
   {
      FUNC_0(VAR_6, "RTSP: Too many media items in SDP data, only %d are supported.", VAR_2);
      return VAR_3;
   }




   VAR_12 = FUNC_2(&VAR_11);
   VAR_13 = FUNC_2(&VAR_11);
   VAR_14 = FUNC_2(&VAR_11);
   VAR_15 = FUNC_2(&VAR_11);
   if (!*VAR_12 || !*VAR_13 || FUNC_4(VAR_14, "RTP/AVP") || !*VAR_15)
   {
      FUNC_1(VAR_6, "RTSP: Failure to parse media field");
      return VAR_3;
   }

   VAR_9 = FUNC_5(VAR_6, sizeof(VC_CONTAINER_TRACK_MODULE_T));
   if (!VAR_9) goto out_of_memory_error;
   VAR_10 = VAR_9->priv->module;



   FUNC_3(VAR_13, "%hu", &VAR_10->rtp_port);
   VAR_10->payload_type = VAR_15;
   VAR_10->media_type = VAR_12;

   VAR_10->reader_uri = FUNC_8();
   if (!VAR_10->reader_uri) goto out_of_memory_error;
   if (!FUNC_10(VAR_10->reader_uri, VAR_1)) goto out_of_memory_error;
   if (!FUNC_7(VAR_10->reader_uri, VAR_0, VAR_15)) goto out_of_memory_error;

   VAR_6->tracks[VAR_6->tracks_num++] = VAR_9;
   *VAR_8 = VAR_9;
   return VAR_5;

out_of_memory_error:
   if (VAR_9)
   {
      if (VAR_10->reader_uri)
         FUNC_9(VAR_10->reader_uri);
      FUNC_6(VAR_6, VAR_9);
   }
   FUNC_1(VAR_6, "RTSP: Memory allocation failure creating track");
   return VAR_4;
}
