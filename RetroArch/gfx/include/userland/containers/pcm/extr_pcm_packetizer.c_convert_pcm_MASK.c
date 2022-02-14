
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int tmp ;
struct TYPE_6__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_PACKETIZER_T ;
struct TYPE_7__ {scalar_t__ conversion; } ;
typedef TYPE_3__ VC_PACKETIZER_MODULE_T ;
typedef int VC_CONTAINER_BYTESTREAM_T ;
struct TYPE_5__ {TYPE_3__* module; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int,size_t) ;
 int FUNC_1 (int *,int *,size_t) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int **,int *,size_t) ;

__attribute__((used)) static void FUNC_4( VC_PACKETIZER_T *VAR_1,
   VC_CONTAINER_BYTESTREAM_T *VAR_2, size_t VAR_3, uint8_t *VAR_4 )
{
   VC_PACKETIZER_MODULE_T *VAR_5 = VAR_1->priv->module;
   uint8_t VAR_6[256];
   size_t VAR_7;

   while(VAR_3)
   {
      VAR_7 = FUNC_0(sizeof(VAR_6), VAR_3);
      FUNC_1(VAR_2, VAR_6, VAR_7);
      if (VAR_5->conversion == VAR_0)
         FUNC_3(&VAR_4, VAR_6, VAR_7);
      else
         FUNC_2(VAR_2, VAR_7);
      VAR_3 -= VAR_7;
   }
}
