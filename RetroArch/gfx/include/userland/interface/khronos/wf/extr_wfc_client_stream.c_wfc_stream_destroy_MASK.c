
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ registrations; } ;
typedef TYPE_1__ WFC_STREAM_T ;
typedef int WFCNativeStreamType ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int ) ;

void FUNC_6(WFCNativeStreamType VAR_1)


{
   FUNC_1("%s: stream: %X", VAR_0, VAR_1);

   WFC_STREAM_T *VAR_2 = FUNC_5(VAR_1);

   if (VAR_2)
   {



      if (VAR_2->registrations> 0)
      {
         VAR_2->registrations--;
         FUNC_2("%s: stream: %X ready to destroy?", VAR_0, VAR_1);
      }
      else
      {
         FUNC_0("%s: stream: %X destroyed when unregistered", VAR_0, VAR_1);
      }


      FUNC_4(VAR_2);
   }
   else
   {
      FUNC_3("%s: stream %X doesn't exist", VAR_0, VAR_1);
   }

}
