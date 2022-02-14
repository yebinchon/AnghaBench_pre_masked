
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_10__ {int packet_size; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_8__ {TYPE_3__* module; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,char*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_2 )
{
   VC_CONTAINER_MODULE_T *VAR_3 = VAR_2->priv->module;

   FUNC_0(VAR_2, &VAR_1, "File ID");
   FUNC_2(VAR_2, 0, "File Size");
   FUNC_2(VAR_2, 0, "Creation Date");
   FUNC_2(VAR_2, 0, "Data Packets Count");
   FUNC_2(VAR_2, 0, "Play Duration");
   FUNC_2(VAR_2, 0, "Send Duration");
   FUNC_2(VAR_2, 0, "Preroll");
   FUNC_1(VAR_2, 0, "Flags");
   FUNC_1(VAR_2, VAR_3->packet_size, "Minimum Data Packet Size");
   FUNC_1(VAR_2, VAR_3->packet_size, "Maximum Data Packet Size");
   FUNC_1(VAR_2, 0, "Maximum Bitrate");

   return VAR_0;
}
