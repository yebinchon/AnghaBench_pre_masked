
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int VC_URI_PARTS_T ;
struct TYPE_14__ {int reader_uri; } ;
typedef TYPE_4__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_15__ {TYPE_3__* priv; } ;
typedef TYPE_5__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_13__ {TYPE_2__* module; TYPE_1__* io; } ;
struct TYPE_12__ {int media_item; } ;
struct TYPE_11__ {char* uri; } ;


 int FUNC_0 (TYPE_5__*,char*,...) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_4 (char*,int,char*,int ) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,char const*,int) ;
 char* FUNC_7 (char*,char) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,char*) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,char*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_13( VC_CONTAINER_T *VAR_4,
      VC_CONTAINER_TRACK_MODULE_T *VAR_5 )
{
   VC_CONTAINER_STATUS_T VAR_6;
   VC_URI_PARTS_T *VAR_7 = ((void*)0);
   const char *VAR_8;
   int VAR_9;
   char *VAR_10 = ((void*)0);
   char *VAR_11;




   VAR_7 = FUNC_8();
   if (!VAR_7)
   {
      FUNC_0(VAR_4, "RTSP: Failed to create RTSP URI");
      VAR_6 = VAR_3;
      goto tidy_up;
   }

   if (!FUNC_9(VAR_7, VAR_4->priv->io->uri))
   {
      FUNC_0(VAR_4, "RTSP: Failed to parse RTSP URI <%s>", VAR_4->priv->io->uri);
      VAR_6 = VAR_2;
      goto tidy_up;
   }

   VAR_8 = FUNC_10(VAR_7);
   if (!VAR_8 || !*VAR_8)
   {
      FUNC_0(VAR_4, "RTSP: RTSP URI path missing <%s>", VAR_4->priv->io->uri);
      VAR_6 = VAR_2;
      goto tidy_up;
   }

   VAR_9 = FUNC_5(VAR_8);
   VAR_10 = (char *)FUNC_1(1, VAR_9 + VAR_1 + 1);
   if (!VAR_7)
   {
      FUNC_0(VAR_4, "RTSP: Failed to create buffer for RTP path");
      VAR_6 = VAR_3;
      goto tidy_up;
   }

   FUNC_6(VAR_10, VAR_8, VAR_9);
   VAR_11 = FUNC_7(VAR_10, '.');
   if (!VAR_11)
      VAR_11 = VAR_10 + FUNC_5(VAR_10);

   FUNC_4(VAR_11, VAR_9 + VAR_1 - (VAR_11 - VAR_10),
            VAR_0, VAR_4->priv->module->media_item);
   if (!FUNC_12(VAR_5->reader_uri, VAR_10))
   {
      FUNC_0(VAR_4, "RTSP: Failed to store RTP path <%s>", VAR_10);
      VAR_6 = VAR_3;
      goto tidy_up;
   }

   FUNC_2(VAR_10);
   FUNC_11(VAR_7);

   return FUNC_3(VAR_4, VAR_5);

tidy_up:
   if (VAR_10) FUNC_2(VAR_10);
   if (VAR_7) FUNC_11(VAR_7);
   return VAR_6;
}
