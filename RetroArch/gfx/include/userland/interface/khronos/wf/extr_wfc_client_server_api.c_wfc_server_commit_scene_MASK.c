
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int result ;
typedef int msg ;
struct TYPE_12__ {size_t element_count; TYPE_1__* elements; int commit_count; } ;
typedef TYPE_4__ WFC_SCENE_T ;
struct TYPE_14__ {int type; } ;
struct TYPE_11__ {void* ptr; } ;
struct TYPE_10__ {int * ptr; } ;
struct TYPE_13__ {size_t flags; TYPE_7__ header; int scene; TYPE_3__ scene_taken_data; TYPE_2__ scene_taken_cb; int context; } ;
typedef TYPE_5__ WFC_IPC_MSG_COMMIT_SCENE_T ;
typedef int * WFC_CALLBACK_T ;
typedef int WFCContext ;
typedef scalar_t__ VCOS_STATUS_T ;
struct TYPE_9__ {int source_stream; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *,TYPE_4__ const*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,size_t,int ,...) ;
 scalar_t__ FUNC_3 (TYPE_7__*,int,size_t*,size_t*) ;

uint32_t FUNC_4(WFCContext VAR_5, const WFC_SCENE_T *VAR_6,
      uint32_t VAR_7, WFC_CALLBACK_T VAR_8, void *VAR_9)
{
   WFC_IPC_MSG_COMMIT_SCENE_T VAR_10;
   VCOS_STATUS_T VAR_11 = VAR_2;
   uint32_t VAR_12 = VAR_0;
   size_t VAR_13 = sizeof(VAR_12);
   uint32_t VAR_14;

   FUNC_2("%s: context 0x%x commit %u elements %u flags 0x%x",
         VAR_1, VAR_5, VAR_6->commit_count, VAR_6->element_count, VAR_7);
   for (VAR_14 = 0; VAR_14 < VAR_6->element_count; VAR_14++)
   {
      FUNC_2("%s: element[%u] stream 0x%x", VAR_1, VAR_14, VAR_6->elements[VAR_14].source_stream);
   }

   VAR_10.header.type = VAR_3;
   VAR_10.context = VAR_5;
   VAR_10.flags = VAR_7;
   VAR_10.scene_taken_cb.ptr = VAR_8;
   VAR_10.scene_taken_data.ptr = VAR_9;
   FUNC_0(&VAR_10.scene, VAR_6, sizeof(*VAR_6));

   if (VAR_7 & VAR_4)
   {

      FUNC_1(VAR_8 != ((void*)0));
      FUNC_1(VAR_9 != ((void*)0));
   }
   else
   {

      FUNC_1(VAR_8 == ((void*)0));
      FUNC_1(VAR_9 == ((void*)0));
   }

   VAR_11 = FUNC_3(&VAR_10.header, sizeof(VAR_10), &VAR_12, &VAR_13);


   if (VAR_11 != VAR_2)
      VAR_12 = VAR_11;

   return VAR_12;
}
