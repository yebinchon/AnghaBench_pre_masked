
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VCOS_UNSIGNED ;
typedef int VCOS_STATUS_T ;
struct TYPE_7__ {int num_subpools; int num_extension_blocks; TYPE_1__* subpools; } ;
typedef TYPE_2__ VCOS_BLOCKPOOL_T ;
struct TYPE_6__ {int * mem; int * start; int magic; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int ,TYPE_2__*,int,int) ;

VCOS_STATUS_T FUNC_2(VCOS_BLOCKPOOL_T *VAR_6,
      VCOS_UNSIGNED VAR_7, VCOS_UNSIGNED VAR_8)
{
   VCOS_UNSIGNED VAR_9;
   FUNC_0(VAR_6);

   FUNC_1("%s: pool %p num_extensions %d num_blocks %d",
         VAR_4, VAR_6, VAR_7, VAR_8);


   if (VAR_6->num_subpools > 1)
      return VAR_2;

   if (VAR_7 < 1 ||
         VAR_7 > VAR_0 - 1)
      return VAR_3;

   if (VAR_8 < 1)
      return VAR_3;

   VAR_6->num_subpools += VAR_7;
   VAR_6->num_extension_blocks = VAR_8;


   for (VAR_9 = 1; VAR_9 < VAR_6->num_subpools; ++VAR_9)
   {
      VAR_6->subpools[VAR_9].magic = VAR_1;
      VAR_6->subpools[VAR_9].start = ((void*)0);
      VAR_6->subpools[VAR_9].mem = ((void*)0);
   }

   return VAR_5;
}
