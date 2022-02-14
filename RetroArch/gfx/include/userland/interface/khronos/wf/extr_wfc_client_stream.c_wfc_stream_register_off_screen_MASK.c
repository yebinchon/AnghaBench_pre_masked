
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int used_for_off_screen; } ;
typedef TYPE_1__ WFC_STREAM_T ;
typedef scalar_t__ WFCNativeStreamType ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (scalar_t__) ;

void FUNC_4(WFCNativeStreamType VAR_2, bool VAR_3)


{
   if(VAR_2 == VAR_1)
      {return;}

   FUNC_1("%s: stream 0x%x", VAR_0, VAR_2);

   WFC_STREAM_T *VAR_4 = FUNC_3(VAR_2);
   if (!VAR_4)
      return;

   VAR_4->used_for_off_screen = VAR_3;

   if (VAR_3)
      FUNC_0(VAR_4);
   else
   {

      FUNC_2(VAR_4);
   }
}
