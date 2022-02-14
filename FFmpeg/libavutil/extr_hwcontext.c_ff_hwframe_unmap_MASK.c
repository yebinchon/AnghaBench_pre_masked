
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int hw_frames_ctx; int source; int (* unmap ) (int *,TYPE_1__*) ;} ;
typedef TYPE_1__ HWMapDescriptor ;
typedef int AVHWFramesContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, uint8_t *VAR_1)
{
    HWMapDescriptor *VAR_2 = (HWMapDescriptor*)VAR_1;
    AVHWFramesContext *VAR_3 = VAR_0;

    if (VAR_2->unmap)
        VAR_2->unmap(VAR_3, VAR_2);

    FUNC_1(&VAR_2->source);

    FUNC_0(&VAR_2->hw_frames_ctx);

    FUNC_2(VAR_2);
}
