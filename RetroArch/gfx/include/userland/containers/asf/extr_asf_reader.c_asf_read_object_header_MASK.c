
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_10__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_11__ {int object_level; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_9__ {TYPE_3__* module; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_4( VC_CONTAINER_T *VAR_3, int64_t VAR_4 )
{
   VC_CONTAINER_MODULE_T *VAR_5 = VAR_3->priv->module;
   VC_CONTAINER_STATUS_T VAR_6 = VAR_2;
   int64_t VAR_7 = FUNC_2(VAR_3);


   if((VAR_4 -= 6) < 0) return VAR_1;

   FUNC_0(VAR_3, "Number of Header Objects");
   FUNC_1(VAR_3, "Reserved1");
   FUNC_1(VAR_3, "Reserved2");


   VAR_5->object_level++;
   while(VAR_6 == VAR_2 && VAR_4 >= VAR_0)
   {
      VAR_7 = FUNC_2(VAR_3);
      VAR_6 = FUNC_3(VAR_3, VAR_4);
      VAR_4 -= (FUNC_2(VAR_3) - VAR_7);
   }
   VAR_5->object_level--;

   return VAR_6;
}
