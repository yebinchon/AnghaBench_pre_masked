
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_15__ {TYPE_1__* priv_data; } ;
struct TYPE_14__ {int * linesize; scalar_t__* data; } ;
struct TYPE_13__ {int size; int flags; int * data; } ;
struct TYPE_12__ {scalar_t__ type; int p; int length; int size; } ;
typedef TYPE_1__ SUNRASTContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*,int ,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,scalar_t__,int const*,int ) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_2, AVPacket *VAR_3,
                                const AVFrame *VAR_4, int *VAR_5)
{
    SUNRASTContext *VAR_6 = VAR_2->priv_data;
    int VAR_7;

    if ((VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_6->size, 0)) < 0)
        return VAR_7;

    FUNC_1(&VAR_6->p, VAR_3->data, VAR_3->size);
    FUNC_4(VAR_2);
    FUNC_5(VAR_2, VAR_4->data[0],
                              (const uint32_t *)VAR_4->data[1],
                              VAR_4->linesize[0]);

    if (VAR_6->type == VAR_1)
        FUNC_0(&VAR_3->data[16], VAR_6->length);

    *VAR_5 = 1;
    VAR_3->flags |= VAR_0;
    VAR_3->size = FUNC_2(&VAR_6->p);
    return 0;
}
