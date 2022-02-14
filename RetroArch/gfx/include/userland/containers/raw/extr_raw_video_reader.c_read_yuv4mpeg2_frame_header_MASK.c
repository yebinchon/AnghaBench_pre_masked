
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int header ;
struct TYPE_11__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_12__ {unsigned int block_size; int frame_header_size; int option; scalar_t__ non_standard; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_10__ {TYPE_3__* module; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,unsigned int*) ;
 int FUNC_6 (int ,char*,unsigned int*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_7( VC_CONTAINER_T *VAR_3 )
{
   VC_CONTAINER_MODULE_T *VAR_4 = VAR_3->priv->module;
   unsigned int VAR_5 = VAR_0 - 5;
   unsigned int VAR_6;
   char VAR_7[5];

   if (FUNC_1(VAR_3, VAR_7, sizeof(VAR_7)) != sizeof(VAR_7) ||
          FUNC_4(VAR_7, "FRAME", sizeof(VAR_7)))
   {
      FUNC_0(VAR_3, "missing frame marker");
      return FUNC_2(VAR_3) != VAR_2 ?
         FUNC_2(VAR_3) : VAR_1;
   }


   while (FUNC_5(VAR_3, &VAR_5) == VAR_2)
   {
      if (VAR_4->non_standard && FUNC_6(VAR_4->option, "S%i", &VAR_6) == 1)
         VAR_4->block_size = VAR_6;
   }


   if (FUNC_3(VAR_3) != 0x0a)
   {
      FUNC_0(VAR_3, "missing end of frame header marker");
      return VAR_1;
   }

   VAR_4->frame_header_size = VAR_0 - VAR_5 - 1;
   return VAR_2;
}
