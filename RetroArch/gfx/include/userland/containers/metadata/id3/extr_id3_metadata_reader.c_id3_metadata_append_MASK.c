
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {unsigned int meta_num; TYPE_2__** meta; } ;
typedef TYPE_1__ VC_CONTAINER_T ;
struct TYPE_11__ {scalar_t__ key; char* value; unsigned int size; } ;
typedef TYPE_2__ VC_CONTAINER_METADATA_T ;
typedef scalar_t__ VC_CONTAINER_METADATA_KEY_T ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 TYPE_2__** FUNC_4 (TYPE_2__**,int) ;

__attribute__((used)) static VC_CONTAINER_METADATA_T *FUNC_5( VC_CONTAINER_T *VAR_0,
                                                     VC_CONTAINER_METADATA_KEY_T VAR_1,
                                                     unsigned int VAR_2 )
{
   VC_CONTAINER_METADATA_T *VAR_3, **VAR_4;
   unsigned int VAR_5;

   for (VAR_5 = 0; VAR_5 != VAR_0->meta_num; ++VAR_5)
   {
      if (VAR_1 == VAR_0->meta[VAR_5]->key) break;
   }


   if (VAR_5 < VAR_0->meta_num) return ((void*)0);


   VAR_2 = FUNC_0(VAR_2, 512);


   if((VAR_3 = FUNC_2(sizeof(VC_CONTAINER_METADATA_T) + VAR_2)) == ((void*)0))
      return ((void*)0);




   if((VAR_4 = FUNC_4(VAR_0->meta, sizeof(VC_CONTAINER_METADATA_T *) * (VAR_0->meta_num + 1))) == ((void*)0))
   {
      FUNC_1(VAR_3);
      return ((void*)0);
   }

   VAR_0->meta = VAR_4;
   FUNC_3(VAR_3, 0, sizeof(VC_CONTAINER_METADATA_T) + VAR_2);
   VAR_0->meta[VAR_0->meta_num] = VAR_3;
   VAR_3->key = VAR_1;
   VAR_3->value = (char *)&VAR_3[1];
   VAR_3->size = VAR_2;
   VAR_0->meta_num++;

   return VAR_3;
}
