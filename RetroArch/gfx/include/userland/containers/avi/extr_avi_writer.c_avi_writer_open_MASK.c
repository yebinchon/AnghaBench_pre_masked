
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int * tracks; scalar_t__ tracks_num; TYPE_2__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_15__ {scalar_t__ size; } ;
struct TYPE_18__ {struct TYPE_18__* avi_frame_buffer; int * tracks; TYPE_1__ frame_packet; int temp_io; int null_io; } ;
typedef TYPE_4__ VC_CONTAINER_MODULE_T ;
struct TYPE_16__ {int pf_control; int pf_write; int pf_close; TYPE_4__* module; int uri; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char,char,char,char) ;
 int FUNC_4 (TYPE_3__*,int ,char*) ;
 int FUNC_5 (TYPE_3__*,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (TYPE_4__*) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_11 (TYPE_3__*,int *) ;
 int FUNC_12 (int ,int ,char*,char const**) ;
 char* FUNC_13 (int ) ;

VC_CONTAINER_STATUS_T FUNC_14( VC_CONTAINER_T *VAR_7 )
{
   const char *VAR_8 = FUNC_13(VAR_7->priv->uri);
   VC_CONTAINER_STATUS_T VAR_9 = VAR_3;
   VC_CONTAINER_MODULE_T *VAR_10 = 0;


   FUNC_12(VAR_7->priv->uri, 0, "container", &VAR_8);


   if(!VAR_8)
      return VAR_1;
   if(FUNC_9(VAR_8, "avi") && FUNC_9(VAR_8, "divx"))
      return VAR_1;


   VAR_10 = FUNC_7(sizeof(*VAR_10));
   if(!VAR_10) { VAR_9 = VAR_2; goto error; }
   FUNC_8(VAR_10, 0, sizeof(*VAR_10));
   VAR_7->priv->module = VAR_10;


   VAR_9 = FUNC_10(VAR_7, &VAR_10->null_io);
   if(VAR_9 != VAR_3) goto error;

   if(FUNC_1(VAR_7))
   {

       VAR_9 = FUNC_11(VAR_7, &VAR_10->temp_io);
       if(VAR_9 != VAR_3) goto error;
   }
   else
   {
      VAR_10->avi_frame_buffer = FUNC_7(VAR_0);
      if(!VAR_10->avi_frame_buffer)
         { VAR_9 = VAR_2; goto error; }
   }
   VAR_10->frame_packet.size = 0;

   VAR_7->tracks = VAR_10->tracks;


   FUNC_4(VAR_7, FUNC_3('R','I','F','F'), "RIFF ID");
   FUNC_5(VAR_7, 0, "fileSize");
   FUNC_4(VAR_7, FUNC_3('A','V','I',' '), "fileType");

   if((VAR_9 = FUNC_2(VAR_7)) != VAR_3) goto error;

   VAR_7->priv->pf_close = VAR_4;
   VAR_7->priv->pf_write = VAR_6;
   VAR_7->priv->pf_control = VAR_5;

   return VAR_3;

 error:
   FUNC_0(VAR_7, "error opening stream");
   VAR_7->tracks_num = 0;
   VAR_7->tracks = ((void*)0);
   if(VAR_10)
   {
      if(VAR_10->avi_frame_buffer) FUNC_6(VAR_10->avi_frame_buffer);
      FUNC_6(VAR_10);
   }
   return VAR_9;
}
