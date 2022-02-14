
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int comp; } ;
typedef int OMX_STATETYPE ;
typedef scalar_t__ OMX_ERRORTYPE ;
typedef TYPE_1__ COMPONENT_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (int) ;

int FUNC_5(COMPONENT_T *VAR_3, OMX_STATETYPE VAR_4)
{
   OMX_ERRORTYPE VAR_5;
   VAR_5 = FUNC_0(VAR_3->comp, VAR_0, VAR_4, ((void*)0));
   FUNC_4(VAR_5 == VAR_1);
   if(FUNC_3(VAR_3, VAR_0, VAR_4) < 0)
   {
      FUNC_1("ilclient: could not change component state to %d", VAR_4);
      FUNC_2(VAR_3, VAR_2, 0, 1, 0, 1);
      return -1;
   }
   return 0;
}
