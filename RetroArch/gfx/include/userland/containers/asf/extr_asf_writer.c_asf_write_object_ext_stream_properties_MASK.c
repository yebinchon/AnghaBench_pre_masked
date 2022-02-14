
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
struct TYPE_10__ {scalar_t__ current_track; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_8__ {TYPE_3__* module; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,char*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_1 )
{
   VC_CONTAINER_MODULE_T *VAR_2 = VAR_1->priv->module;

   FUNC_2(VAR_1, 0, "Start Time");
   FUNC_2(VAR_1, 0, "End Time");
   FUNC_1(VAR_1, 0, "Data Bitrate");
   FUNC_1(VAR_1, 0, "Buffer Size");
   FUNC_1(VAR_1, 0, "Initial Buffer Fullness");
   FUNC_1(VAR_1, 0, "Alternate Data Bitrate");
   FUNC_1(VAR_1, 0, "Alternate Buffer Size");
   FUNC_1(VAR_1, 0, "Alternate Initial Buffer Fullness");
   FUNC_1(VAR_1, 0, "Maximum Object Size");
   FUNC_1(VAR_1, 0, "Flags");
   FUNC_0(VAR_1, VAR_2->current_track + 1, "Stream Number");
   FUNC_0(VAR_1, 0, "Stream Language ID Index");
   FUNC_2(VAR_1, 0, "Average Time Per Frame");
   FUNC_0(VAR_1, 0, "Stream Name Count");
   FUNC_0(VAR_1, 0, "Payload Extension System Count");




   return VAR_0;
}
