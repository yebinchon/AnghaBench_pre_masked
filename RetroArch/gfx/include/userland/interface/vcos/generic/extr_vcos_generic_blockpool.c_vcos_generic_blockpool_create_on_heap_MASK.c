
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VCOS_UNSIGNED ;
typedef scalar_t__ VCOS_STATUS_T ;
struct TYPE_6__ {TYPE_1__* subpools; } ;
typedef TYPE_2__ VCOS_BLOCKPOOL_T ;
struct TYPE_5__ {int flags; } ;


 size_t FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int ,void*,size_t,int ,int ,char const*) ;
 int FUNC_3 (char*,int ,int ,int ,char const*) ;
 void* FUNC_4 (size_t,char const*) ;

VCOS_STATUS_T FUNC_5(VCOS_BLOCKPOOL_T *VAR_4,
      VCOS_UNSIGNED VAR_5, VCOS_UNSIGNED VAR_6, VCOS_UNSIGNED VAR_7,
      VCOS_UNSIGNED VAR_8, const char *VAR_9)
{
   VCOS_STATUS_T VAR_10 = VAR_3;
   size_t VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_7);
   void* VAR_12 = FUNC_4(VAR_11, VAR_9);

   FUNC_3("%s: num_blocks %d block_size %d name %s",
         VAR_2, VAR_5, VAR_6, VAR_9);

   if (! VAR_12)
      return VAR_1;

   VAR_10 = FUNC_2(VAR_4, VAR_5,
         VAR_6, VAR_12, VAR_11, VAR_7, VAR_8, VAR_9);

   if (VAR_10 != VAR_3)
      goto fail;

   VAR_4->subpools[0].flags |= VAR_0;
   return VAR_10;

fail:
   FUNC_1(VAR_12);
   return VAR_10;
}
