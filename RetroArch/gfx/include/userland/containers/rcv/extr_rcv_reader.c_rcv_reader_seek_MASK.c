
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_SEEK_MODE_T ;
typedef int VC_CONTAINER_SEEK_FLAGS_T ;
struct TYPE_9__ {scalar_t__ mid_frame; scalar_t__ frame_read; scalar_t__ index; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_7__ {TYPE_3__* module; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *,int) ;
 scalar_t__ FUNC_3 (scalar_t__,int,int *,int *,int*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_4( VC_CONTAINER_T *VAR_3, int64_t *VAR_4,
   VC_CONTAINER_SEEK_MODE_T VAR_5, VC_CONTAINER_SEEK_FLAGS_T VAR_6)
{
   int VAR_7 = 1;
   int64_t VAR_8;
   int64_t VAR_9 = *VAR_4;
   VC_CONTAINER_STATUS_T VAR_10 = VAR_0;
   VC_CONTAINER_MODULE_T *VAR_11 = VAR_3->priv->module;
   FUNC_1(VAR_5);

   if(VAR_11->index)
      VAR_10 = FUNC_3(VAR_11->index, VAR_6 & VAR_1, &VAR_9, &VAR_8, &VAR_7);

   if(VAR_10 == VAR_2 && !VAR_7)
   {

      VAR_11->frame_read = 0;
      VAR_11->mid_frame = 0;
      *VAR_4 = VAR_9;
      VAR_10 = FUNC_0(VAR_3, VAR_8);
   }
   else
   {

      VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_6 & VAR_1);
   }

   return VAR_10;
}
