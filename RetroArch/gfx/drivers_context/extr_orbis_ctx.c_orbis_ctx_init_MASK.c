
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int video_frame_info_t ;
typedef void orbis_ctx_data_t ;
struct TYPE_3__ {int size; int flags; int processOrder; int systemSharedMemorySize; int videoSharedMemorySize; int maxMappedFlexibleMemory; int drawCommandBufferSize; int lcueResourceBufferSize; int unk_0x5C; scalar_t__ dbgPosCmd_0x4C; scalar_t__ dbgPosCmd_0x48; int dbgPosCmd_0x44; int dbgPosCmd_0x40; } ;
typedef int EGLint ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int const,int ,int*,int*,int*,int const*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 void* VAR_5 ;
 int FUNC_5 (void*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void *FUNC_8(video_frame_info_t *VAR_6, void *VAR_7)
{
    orbis_ctx_data_t *VAR_8 = (orbis_ctx_data_t *)FUNC_0(1, sizeof(*VAR_8));

    if (!VAR_8)
        return ((void*)0);

    VAR_5 = VAR_8;
    return VAR_8;

error:
    FUNC_5(VAR_7);
    return ((void*)0);
}
