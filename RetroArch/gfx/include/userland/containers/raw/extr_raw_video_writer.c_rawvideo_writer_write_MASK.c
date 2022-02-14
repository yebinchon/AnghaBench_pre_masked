
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int line ;
struct TYPE_12__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_13__ {int flags; int frame_size; int size; char* data; } ;
typedef TYPE_3__ VC_CONTAINER_PACKET_T ;
struct TYPE_14__ {scalar_t__ non_standard; scalar_t__ yuv4mpeg2; int header_done; } ;
typedef TYPE_4__ VC_CONTAINER_MODULE_T ;
struct TYPE_11__ {TYPE_4__* module; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,char*,unsigned int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 unsigned int FUNC_4 (char*,int,char*,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_5( VC_CONTAINER_T *VAR_2,
   VC_CONTAINER_PACKET_T *VAR_3 )
{
   VC_CONTAINER_MODULE_T *VAR_4 = VAR_2->priv->module;
   VC_CONTAINER_STATUS_T VAR_5;

   if (VAR_4->yuv4mpeg2 && !VAR_4->header_done)
   {
      VAR_5 = FUNC_3(VAR_2);
      if (VAR_5 != VAR_1)
         return VAR_5;
   }

   if (VAR_4->yuv4mpeg2 &&
       (VAR_3->flags & VAR_0))
   {

      FUNC_1(VAR_2, "FRAME", sizeof("FRAME")-1);



      if (VAR_4->non_standard)
      {
         unsigned int VAR_6;
         char VAR_7[32];
         VAR_6 = FUNC_4(VAR_7, sizeof(VAR_7), " S%i",
            VAR_3->frame_size ? VAR_3->frame_size : VAR_3->size);
         if (VAR_6 < sizeof(VAR_7))
            FUNC_1(VAR_2, VAR_7, VAR_6);
      }

      FUNC_2(VAR_2, 0x0a);
   }


   FUNC_1(VAR_2, VAR_3->data, VAR_3->size);

   return FUNC_0(VAR_2);
}
