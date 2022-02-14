
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_11__ {char* comms_buffer; int cseq_value; } ;
typedef TYPE_4__ VC_CONTAINER_MODULE_T ;
struct TYPE_9__ {TYPE_1__* io; TYPE_4__* module; } ;
struct TYPE_8__ {char* uri; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,char*,scalar_t__,scalar_t__) ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*,int,char*,int ,...) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_5( VC_CONTAINER_T *VAR_6 )
{
   VC_CONTAINER_MODULE_T *VAR_7 = VAR_6->priv->module;
   char *VAR_8 = VAR_7->comms_buffer, *VAR_9 = VAR_8 + VAR_0;
   char *VAR_10 = VAR_6->priv->io->uri;

   if (FUNC_3(VAR_10) > VAR_3)
   {
      FUNC_0(VAR_6, "RTSP: URI is too long (%d>%d)", FUNC_3(VAR_10), VAR_3);
      return VAR_5;
   }

   VAR_8 += FUNC_2(VAR_8, VAR_9 - VAR_8, VAR_2, VAR_1, VAR_10);
   if (VAR_8 < VAR_9)
      VAR_8 += FUNC_2(VAR_8, VAR_9 - VAR_8, VAR_4, VAR_7->cseq_value++);
   FUNC_4(VAR_8 < VAR_9);

   return FUNC_1(VAR_6);
}
