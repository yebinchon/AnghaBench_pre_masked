
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * pAppPrivate; scalar_t__ pOutputPortPrivate; } ;
struct TYPE_7__ {int free_in_buffers; int num_free_in_buffers; int input_cond; int input_mutex; scalar_t__ input_zerocopy; } ;
typedef TYPE_1__* OMX_PTR ;
typedef int OMX_HANDLETYPE ;
typedef int OMX_ERRORTYPE ;
typedef TYPE_2__ OMX_BUFFERHEADERTYPE ;
typedef TYPE_1__ OMXCodecContext ;
typedef int AVFrame ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int ,TYPE_2__*) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static OMX_ERRORTYPE FUNC_3(OMX_HANDLETYPE VAR_1, OMX_PTR VAR_2,
                                       OMX_BUFFERHEADERTYPE *VAR_3)
{
    OMXCodecContext *VAR_4 = VAR_2;
    if (VAR_4->input_zerocopy) {
        if (VAR_3->pAppPrivate) {
            if (VAR_3->pOutputPortPrivate)
                FUNC_2(VAR_3->pAppPrivate);
            else
                FUNC_1((AVFrame**)&VAR_3->pAppPrivate);
            VAR_3->pAppPrivate = ((void*)0);
        }
    }
    FUNC_0(&VAR_4->input_mutex, &VAR_4->input_cond,
                  &VAR_4->num_free_in_buffers, VAR_4->free_in_buffers, VAR_3);
    return VAR_0;
}
