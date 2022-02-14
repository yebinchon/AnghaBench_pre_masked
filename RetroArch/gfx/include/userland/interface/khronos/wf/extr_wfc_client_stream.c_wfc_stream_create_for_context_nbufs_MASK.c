
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ info; } ;
typedef TYPE_2__ WFC_STREAM_T ;
typedef scalar_t__ WFCNativeStreamType ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int,int) ;
 int FUNC_2 (char*,int ,int,scalar_t__,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,int,int,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__) ;
 TYPE_2__* FUNC_7 (scalar_t__) ;

uint32_t FUNC_8
   (WFCNativeStreamType VAR_3, uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6)

{
   WFC_STREAM_T *VAR_7;
   bool VAR_8 = 0;

   if(!FUNC_3(VAR_3 != VAR_1))
      {return 1;}

   VAR_7 = FUNC_7(VAR_3);
   if (VAR_7)
   {
      uint32_t VAR_9 = VAR_7->info.flags;


      FUNC_0(VAR_7);

      if (VAR_9 != VAR_2)
      {
         FUNC_1("%s: stream flags mismatch (expected 0x%x, got 0x%x)", VAR_0, VAR_2, VAR_9);
         return 1;
      }
   }
   else
   {

      if (FUNC_5(VAR_3, VAR_2) != 0)
         return 1;
      VAR_8 = 1;
   }


   if (!FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6))
   {

      FUNC_2("%s: failed to allocate %u buffers for stream %X size %ux%u", VAR_0, VAR_6, VAR_3, VAR_4, VAR_5);
      if (VAR_8)
         FUNC_6(VAR_3);
      return 1;
   }

   return 0;
}
