
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_13__ {int tracks_num; int * tracks; TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_14__ {int null; int temp; scalar_t__ mdat_offset; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_12__ {TYPE_3__* module; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,int *) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_7( VC_CONTAINER_T *VAR_1 )
{
   VC_CONTAINER_MODULE_T *VAR_2 = VAR_1->priv->module;
   VC_CONTAINER_STATUS_T VAR_3;
   int64_t VAR_4;

   VAR_4 = FUNC_1(VAR_1) - VAR_2->mdat_offset;


   VAR_3 = FUNC_4(VAR_1, VAR_0);


   FUNC_0(VAR_1, VAR_2->mdat_offset);
   FUNC_2(VAR_1, (uint32_t)VAR_4, "mdat size" );

   for(; VAR_1->tracks_num > 0; VAR_1->tracks_num--)
      FUNC_5(VAR_1, VAR_1->tracks[VAR_1->tracks_num-1]);

   FUNC_6(VAR_1, &VAR_2->temp);
   FUNC_6(VAR_1, &VAR_2->null);
   FUNC_3(VAR_2);

   return VAR_3;
}
