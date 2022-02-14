
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int size; int data; } ;
struct TYPE_13__ {int height; } ;
struct TYPE_12__ {int mb_stride; } ;
struct TYPE_11__ {int qscale_table_buf; } ;
typedef TYPE_1__ Picture ;
typedef TYPE_2__ MpegEncContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*,int,int) ;

int FUNC_4(MpegEncContext *VAR_1, AVFrame *VAR_2, Picture *VAR_3, int VAR_4)
{
    AVBufferRef *VAR_5 = FUNC_2(VAR_3->qscale_table_buf);
    int VAR_6 = 2*VAR_1->mb_stride + 1;
    if(!VAR_5)
        return FUNC_0(VAR_0);
    FUNC_1(VAR_5->size >= VAR_6 + VAR_1->mb_stride * ((VAR_2->height+15)/16));
    VAR_5->size -= VAR_6;
    VAR_5->data += VAR_6;
    return FUNC_3(VAR_2, VAR_5, VAR_1->mb_stride, VAR_4);
}
