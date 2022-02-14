
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int used_for_off_screen; } ;
typedef TYPE_1__ WFC_STREAM_T ;
typedef int WFCNativeStreamType ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ) ;
 TYPE_1__* FUNC_2 (int ) ;

bool FUNC_3(WFCNativeStreamType VAR_1)


{
   bool VAR_2;

   FUNC_1("%s: stream 0x%x", VAR_0, VAR_1);

   WFC_STREAM_T *VAR_3 = FUNC_2(VAR_1);
   if (!VAR_3)
      return 0;

   VAR_2 = VAR_3->used_for_off_screen;

   FUNC_0(VAR_3);

   return VAR_2;

}
