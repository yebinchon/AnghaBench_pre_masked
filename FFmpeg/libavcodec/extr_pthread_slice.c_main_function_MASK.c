
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* internal; } ;
struct TYPE_6__ {int (* mainfunc ) (TYPE_3__*) ;} ;
struct TYPE_5__ {TYPE_2__* thread_ctx; } ;
typedef TYPE_2__ SliceThreadContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0) {
    AVCodecContext *VAR_1 = VAR_0;
    SliceThreadContext *VAR_2 = VAR_1->internal->thread_ctx;
    VAR_2->mainfunc(VAR_1);
}
