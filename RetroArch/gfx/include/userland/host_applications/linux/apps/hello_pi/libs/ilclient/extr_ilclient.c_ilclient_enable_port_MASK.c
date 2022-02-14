
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int comp; } ;
typedef scalar_t__ OMX_ERRORTYPE ;
typedef TYPE_1__ COMPONENT_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int) ;

void FUNC_3(COMPONENT_T *VAR_2, int VAR_3)
{
   OMX_ERRORTYPE VAR_4;
   VAR_4 = FUNC_0(VAR_2->comp, VAR_0, VAR_3, ((void*)0));
   FUNC_2(VAR_4 == VAR_1);
   if(FUNC_1(VAR_2, VAR_0, VAR_3) < 0)
      FUNC_2(0);
}
