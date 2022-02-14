
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int omx; } ;
struct TYPE_13__ {scalar_t__ direction; scalar_t__ marks_num; } ;
struct TYPE_12__ {int * pMarkData; int * hMarkTargetComponent; } ;
struct TYPE_11__ {int * pMarkData; int * hMarkTargetComponent; } ;
typedef TYPE_1__ OMX_MARKTYPE ;
typedef int * OMX_HANDLETYPE ;
typedef TYPE_2__ OMX_BUFFERHEADERTYPE ;
typedef TYPE_3__ MMALOMX_PORT_T ;
typedef TYPE_4__ MMALOMX_COMPONENT_T ;


 int FUNC_0 (TYPE_3__*,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,int ,int ,int ,int *) ;

void FUNC_2(MMALOMX_COMPONENT_T *VAR_2,
   MMALOMX_PORT_T *VAR_3, OMX_BUFFERHEADERTYPE *VAR_4)
{

   if (VAR_3->direction == VAR_0 &&
       !VAR_4->hMarkTargetComponent && VAR_3->marks_num)
   {
         OMX_MARKTYPE *VAR_5;
         FUNC_0(VAR_3, VAR_5);
         VAR_4->hMarkTargetComponent = VAR_5->hMarkTargetComponent;
         VAR_4->pMarkData = VAR_5->pMarkData;
   }

   if (VAR_4->hMarkTargetComponent &&
       VAR_4->hMarkTargetComponent == (OMX_HANDLETYPE)&VAR_2->omx)
   {
      FUNC_1(VAR_2, VAR_1, 0, 0, VAR_4->pMarkData);
      VAR_4->hMarkTargetComponent = ((void*)0);
      VAR_4->pMarkData = ((void*)0);
   }
}
