
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* internal; } ;
struct TYPE_6__ {int entries_count; int entries; } ;
struct TYPE_5__ {TYPE_2__* thread_ctx; } ;
typedef TYPE_2__ SliceThreadContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ,int ,int) ;

void FUNC_1(AVCodecContext *VAR_0)
{
    SliceThreadContext *VAR_1 = VAR_0->internal->thread_ctx;
    FUNC_0(VAR_1->entries, 0, VAR_1->entries_count * sizeof(int));
}
