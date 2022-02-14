
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_14__ {unsigned int tracks_num; TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_15__ {int null_io; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_13__ {TYPE_3__* module; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (char,char,char,char) ;
 int FUNC_3 (TYPE_2__*,int ,char*) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,char*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,unsigned int,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,int *) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_9( VC_CONTAINER_T *VAR_1, uint32_t VAR_2 )
{
   VC_CONTAINER_MODULE_T *VAR_3 = VAR_1->priv->module;
   VC_CONTAINER_STATUS_T VAR_4;
   unsigned int VAR_5;

   FUNC_3(VAR_1, FUNC_2('L','I','S','T'), "Chunk ID");
   FUNC_4(VAR_1, VAR_2, "LIST Size");
   FUNC_3(VAR_1, FUNC_2('h','d','r','l'), "Chunk ID");
   if ((VAR_4 = FUNC_1(VAR_1)) != VAR_0) return VAR_4;


   if ((VAR_4 = FUNC_5(VAR_1)) != VAR_0)
      return VAR_4;

   for (VAR_5 = 0; VAR_5 < VAR_1->tracks_num; VAR_5++)
   {
      uint32_t VAR_6 = 0;


      if(!FUNC_8(VAR_1, &VAR_3->null_io))
      {
         VAR_4 = FUNC_6(VAR_1, VAR_5, 0);
         if (VAR_4 != VAR_0) return VAR_4;
         VAR_6 = FUNC_0(VAR_1) - 8;
      }
      FUNC_7(VAR_1, &VAR_3->null_io);

      VAR_4 = FUNC_6(VAR_1, VAR_5, VAR_6);
      if (VAR_4 != VAR_0) return VAR_4;
   }

   return VAR_4;
}
