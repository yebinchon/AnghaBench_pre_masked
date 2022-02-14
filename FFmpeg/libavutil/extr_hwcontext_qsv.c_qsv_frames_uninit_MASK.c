
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* internal; } ;
struct TYPE_6__ {int child_frames_ref; int surfaces_internal; int surface_ptrs; int mem_ids; int session_cond; int session_lock; scalar_t__ session_upload_init; int * session_upload; scalar_t__ session_download_init; int * session_download; } ;
struct TYPE_5__ {TYPE_2__* priv; } ;
typedef TYPE_2__ QSVFramesContext ;
typedef TYPE_3__ AVHWFramesContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(AVHWFramesContext *VAR_0)
{
    QSVFramesContext *VAR_1 = VAR_0->internal->priv;

    if (VAR_1->session_download) {
        FUNC_1(VAR_1->session_download);
        FUNC_0(VAR_1->session_download);
    }
    VAR_1->session_download = ((void*)0);
    VAR_1->session_download_init = 0;

    if (VAR_1->session_upload) {
        FUNC_1(VAR_1->session_upload);
        FUNC_0(VAR_1->session_upload);
    }
    VAR_1->session_upload = ((void*)0);
    VAR_1->session_upload_init = 0;






    FUNC_3(&VAR_1->mem_ids);
    FUNC_3(&VAR_1->surface_ptrs);
    FUNC_3(&VAR_1->surfaces_internal);
    FUNC_2(&VAR_1->child_frames_ref);
}
