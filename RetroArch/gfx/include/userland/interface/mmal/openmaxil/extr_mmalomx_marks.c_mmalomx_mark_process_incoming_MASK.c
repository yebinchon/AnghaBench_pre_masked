
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ direction; scalar_t__ marks_num; } ;
struct TYPE_16__ {unsigned int ports_num; TYPE_9__* ports; } ;
struct TYPE_15__ {scalar_t__ marks_num; scalar_t__ direction; int index; } ;
struct TYPE_14__ {int pMarkData; scalar_t__ hMarkTargetComponent; } ;
struct TYPE_13__ {int member_1; scalar_t__ member_0; int pMarkData; scalar_t__ hMarkTargetComponent; } ;
typedef TYPE_1__ OMX_MARKTYPE ;
typedef TYPE_2__ OMX_BUFFERHEADERTYPE ;
typedef TYPE_3__ MMALOMX_PORT_T ;
typedef TYPE_4__ MMALOMX_COMPONENT_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_9__*,TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ,int *) ;

void FUNC_3(MMALOMX_COMPONENT_T *VAR_5,
   MMALOMX_PORT_T *VAR_6, OMX_BUFFERHEADERTYPE *VAR_7)
{

   if (!VAR_7->hMarkTargetComponent && VAR_6->marks_num > 0 &&
       VAR_6->direction == VAR_2)
   {
      OMX_MARKTYPE *VAR_8;
      FUNC_0(VAR_6, VAR_8);
      VAR_7->hMarkTargetComponent = VAR_8->hMarkTargetComponent;
      VAR_7->pMarkData = VAR_8->pMarkData;

      FUNC_2(VAR_5, VAR_4,
         VAR_1, VAR_6->index, ((void*)0));
   }


   if (VAR_6->direction == VAR_2 && VAR_7->hMarkTargetComponent)
   {
      OMX_MARKTYPE VAR_9 = {VAR_7->hMarkTargetComponent, VAR_7->pMarkData};
      unsigned int VAR_10;
      for (VAR_10 = 0; VAR_10 < VAR_5->ports_num; VAR_10++)
      {
         if (VAR_5->ports[VAR_10].direction != VAR_3 ||
             VAR_5->ports[VAR_10].marks_num >= VAR_0)
            continue;

         FUNC_1((&VAR_5->ports[VAR_10]), (&VAR_9));
      }
   }
}
