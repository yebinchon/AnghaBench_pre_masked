
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_15__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_16__ {scalar_t__ size; scalar_t__ frame_size; } ;
typedef TYPE_3__ VC_CONTAINER_PACKET_T ;
struct TYPE_17__ {int null_io; } ;
typedef TYPE_4__ VC_CONTAINER_MODULE_T ;
struct TYPE_14__ {TYPE_4__* module; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_2__*,int *,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,int *) ;

__attribute__((used)) static int64_t FUNC_9( VC_CONTAINER_T *VAR_3,
   VC_CONTAINER_PACKET_T *VAR_4 )
{
   VC_CONTAINER_MODULE_T *VAR_5 = VAR_3->priv->module;
   VC_CONTAINER_STATUS_T VAR_6 = VAR_2;
   int64_t VAR_7 = 0;
   int VAR_8;


   VAR_7 = FUNC_1(VAR_3);

   VAR_8 = FUNC_8(VAR_3, &VAR_5->null_io);
   FUNC_6(VAR_8 == 0);

   FUNC_2(VAR_8);

   do {


      FUNC_3(VAR_3, ((void*)0), VAR_4->frame_size ? VAR_4->frame_size : VAR_4->size);
      FUNC_0(VAR_3);


      FUNC_3(VAR_3, ((void*)0), VAR_0 + VAR_1);


      if (FUNC_5(VAR_3) != VAR_2) break;


      VAR_6 = FUNC_4(VAR_3);
      if (VAR_6 != VAR_2) break;
   } while(0);

   VAR_7 += FUNC_1(VAR_3);

   FUNC_7(VAR_3, &VAR_5->null_io);

   return VAR_7;
}
