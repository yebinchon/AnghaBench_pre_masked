
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {char* control_uri; int session_header; } ;
typedef TYPE_2__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_11__ {TYPE_1__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_12__ {char* comms_buffer; int cseq_value; } ;
typedef TYPE_4__ VC_CONTAINER_MODULE_T ;
struct TYPE_9__ {TYPE_4__* module; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*,scalar_t__,scalar_t__) ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*,int,char*,int ,...) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_5( VC_CONTAINER_T *VAR_7,
      VC_CONTAINER_TRACK_MODULE_T *VAR_8 )
{
   VC_CONTAINER_MODULE_T *VAR_9 = VAR_7->priv->module;
   char *VAR_10 = VAR_9->comms_buffer, *VAR_11 = VAR_10 + VAR_0;
   char *VAR_12 = VAR_8->control_uri;

   if (FUNC_3(VAR_12) > VAR_2)
   {
      FUNC_0(VAR_7, "RTSP: Control URI is too long (%d>%d)", FUNC_3(VAR_12), VAR_2);
      return VAR_6;
   }

   VAR_10 += FUNC_2(VAR_10, VAR_11 - VAR_10, VAR_1, VAR_4, VAR_12);
   if (VAR_10 < VAR_11)
      VAR_10 += FUNC_2(VAR_10, VAR_11 - VAR_10, VAR_3, VAR_8->session_header);
   if (VAR_10 < VAR_11)
      VAR_10 += FUNC_2(VAR_10, VAR_11 - VAR_10, VAR_5, VAR_9->cseq_value++);
   FUNC_4(VAR_10 < VAR_11);

   return FUNC_1(VAR_7);
}
