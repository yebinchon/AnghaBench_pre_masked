
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num_of_sources_or_masks; } ;
typedef TYPE_1__ WFC_STREAM_T ;
typedef int WFCNativeStreamType ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ,int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ) ;

bool FUNC_5(WFCNativeStreamType VAR_1, bool VAR_2)


{
   WFC_STREAM_T *VAR_3 = FUNC_4(VAR_1);

   if (!VAR_3)
      return 0;

   FUNC_1("%s: stream 0x%x %d->%d", VAR_0, VAR_1,
         VAR_3->num_of_sources_or_masks,
         VAR_2 ? VAR_3->num_of_sources_or_masks + 1 : VAR_3->num_of_sources_or_masks - 1);

   if(VAR_2)
   {
      VAR_3->num_of_sources_or_masks++;
      FUNC_0(VAR_3);
   }
   else
   {
      if(FUNC_2(VAR_3->num_of_sources_or_masks > 0))
         {VAR_3->num_of_sources_or_masks--;}


      FUNC_3(VAR_3);
   }

   return 1;
}
