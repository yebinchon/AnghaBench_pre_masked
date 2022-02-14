
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef char uint8_t ;
typedef scalar_t__ int64_t ;
struct TYPE_15__ {TYPE_2__* priv; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_14__ {int pf_close; TYPE_1__* io; } ;
struct TYPE_13__ {scalar_t__ size; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,char*,int ) ;
 int FUNC_2 (TYPE_3__*,char*,int) ;
 int FUNC_3 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;

VC_CONTAINER_STATUS_T FUNC_9( VC_CONTAINER_T *VAR_4 )
{
   VC_CONTAINER_STATUS_T VAR_5 = VAR_0;
   uint8_t VAR_6[10];
   int64_t VAR_7;

   if (FUNC_2(VAR_4, VAR_6, 10) != 10)
     return VAR_1;


   while ((VAR_6[0] == 'I') && (VAR_6[1] == 'D') && (VAR_6[2] == '3'))
   {
      if ((VAR_5 = FUNC_8(VAR_4)) != VAR_2)
      {
         FUNC_1(VAR_4, "error reading ID3v2 tag (%i)", VAR_5);
      }

      if (FUNC_2(VAR_4, VAR_6, 10) != 10) break;
   }

   VAR_7 = FUNC_4(VAR_4);


   if (VAR_4->priv->io->size >= FUNC_0(128) && FUNC_5(VAR_4))
   {
      FUNC_3(VAR_4, VAR_4->priv->io->size - FUNC_0(128));
      if (FUNC_2(VAR_4, VAR_6, 3) != 3) goto end;

      if ((VAR_6[0] == 'T') && (VAR_6[1] == 'A') && (VAR_6[2] == 'G'))
      {
         if ((VAR_5 = FUNC_7(VAR_4)) != VAR_2)
         {
            FUNC_1(VAR_4, "error reading ID3v1 tag (%i)", VAR_5);
         }
      }
   }

end:

   if (FUNC_4(VAR_4) != VAR_7)
      FUNC_3(VAR_4, VAR_7);

   VAR_4->priv->pf_close = VAR_3;

   if((VAR_5 = FUNC_6(VAR_4)) != VAR_2) goto error;

   return VAR_2;

error:
   FUNC_1(VAR_4, "error opening stream (%i)", VAR_5);
   return VAR_5;
}
