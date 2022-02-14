
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ width; scalar_t__ height; scalar_t__ format; } ;
struct TYPE_11__ {TYPE_2__* cur_pic_ptr; } ;
struct TYPE_10__ {TYPE_5__* f; } ;
struct TYPE_9__ {TYPE_1__* f; } ;
struct TYPE_8__ {scalar_t__ width; scalar_t__ height; scalar_t__ format; } ;
typedef TYPE_3__ H264Picture ;
typedef TYPE_4__ H264Context ;
typedef TYPE_5__ AVFrame ;



__attribute__((used)) static int FUNC_0(const H264Context *VAR_0, const H264Picture *VAR_1)
{
    const AVFrame *VAR_2 = VAR_1->f;
    return (VAR_0->cur_pic_ptr->f->width != VAR_2->width ||
            VAR_0->cur_pic_ptr->f->height != VAR_2->height ||
            VAR_0->cur_pic_ptr->f->format != VAR_2->format);
}
