
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {TYPE_2__* decoder_ref; int frame; } ;
typedef TYPE_1__ RKMPPFrameContext ;
typedef int AVDRMFrameDescriptor ;
typedef TYPE_2__ AVBufferRef ;


 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, uint8_t *VAR_1)
{
    AVDRMFrameDescriptor *VAR_2 = (AVDRMFrameDescriptor *)VAR_1;
    AVBufferRef *VAR_3 = (AVBufferRef *)VAR_0;
    RKMPPFrameContext *VAR_4 = (RKMPPFrameContext *)VAR_3->data;

    FUNC_2(&VAR_4->frame);
    FUNC_0(&VAR_4->decoder_ref);
    FUNC_0(&VAR_3);

    FUNC_1(VAR_2);
}
