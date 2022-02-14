
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef scalar_t__ int64_t ;
struct TYPE_19__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_20__ {int object_level; int null; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_18__ {TYPE_3__* module; } ;
struct TYPE_17__ {scalar_t__ type; scalar_t__ (* pf_func ) (TYPE_2__*) ;int psz_name; int guid; } ;
typedef int GUID_T ;
typedef scalar_t__ ASF_OBJECT_TYPE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_2__*,int ,char*) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,char*) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,char*) ;
 TYPE_10__* VAR_5 ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*,int *) ;
 int FUNC_11 (TYPE_2__*,int *) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_12( VC_CONTAINER_T *VAR_6, ASF_OBJECT_TYPE_T VAR_7 )
{
   VC_CONTAINER_MODULE_T *VAR_8 = VAR_6->priv->module;
   VC_CONTAINER_STATUS_T VAR_9 = VAR_4;
   int64_t VAR_10 = 0;
   unsigned int VAR_11;


   for( VAR_11 = 0; VAR_5[VAR_11].type && VAR_5[VAR_11].type != VAR_7; VAR_11++ );


   if(!VAR_5[VAR_11].type)
   {
      FUNC_9(0);
      return VAR_2;
   }






   if(!FUNC_11(VAR_6, &VAR_8->null))
   {
      VAR_5[VAR_11].pf_func(VAR_6);
      VAR_10 = FUNC_2(VAR_6);
   }
   FUNC_10(VAR_6, &VAR_8->null);


   if(VAR_7 == VAR_1)
   {
      FUNC_4(VAR_6, VAR_10, "Header Extension Data Size");

      VAR_9 = VAR_5[VAR_11].pf_func(VAR_6);
      return VAR_9;
   }



   if(FUNC_3(VAR_6, VAR_5[VAR_11].guid, "Object ID") != sizeof(GUID_T))
      return VAR_3;

   FUNC_1(VAR_6, "Object Name: %s", VAR_5[VAR_11].psz_name);

   FUNC_5(VAR_6, VAR_10 + VAR_0, "Object Size");

   VAR_8->object_level++;


   VAR_9 = VAR_5[VAR_11].pf_func(VAR_6);

   VAR_8->object_level--;

   if(VAR_9 != VAR_4)
      FUNC_0(VAR_6, "object %s appears to be corrupted", VAR_5[VAR_11].psz_name);

   return VAR_9;
}
