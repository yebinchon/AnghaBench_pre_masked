
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
struct TYPE_10__ {scalar_t__ brand; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_8__ {TYPE_3__* module; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,char*) ;
 int FUNC_2 (TYPE_2__*,int,char*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_5 )
{
   VC_CONTAINER_MODULE_T *VAR_6 = VAR_5->priv->module;

   FUNC_1(VAR_5, VAR_6->brand, "major_brand");
   FUNC_2(VAR_5, 512, "minor_version");
   if(VAR_6->brand == VAR_3)
   {
      FUNC_1(VAR_5, VAR_3, "compatible_brands");
      return FUNC_0(VAR_5);
   }

   if(VAR_6->brand == VAR_4)
      FUNC_1(VAR_5, VAR_4, "compatible_brands");
   FUNC_1(VAR_5, VAR_1, "compatible_brands");
   FUNC_1(VAR_5, VAR_2, "compatible_brands");
   FUNC_1(VAR_5, VAR_0, "compatible_brands");

   return FUNC_0(VAR_5);
}
