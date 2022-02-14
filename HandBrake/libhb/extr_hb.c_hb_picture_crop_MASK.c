
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int fmt; } ;
struct TYPE_9__ {TYPE_2__* plane; TYPE_1__ f; } ;
typedef TYPE_3__ hb_buffer_t ;
struct TYPE_10__ {int log2_chroma_w; int log2_chroma_h; } ;
struct TYPE_8__ {int stride; int * data; } ;
typedef TYPE_4__ AVPixFmtDescriptor ;


 TYPE_4__* FUNC_0 (int ) ;

int FUNC_1(uint8_t *VAR_0[], int VAR_1[], hb_buffer_t *VAR_2,
                    int VAR_3, int VAR_4)
{
    const AVPixFmtDescriptor *VAR_5 = FUNC_0(VAR_2->f.fmt);
    int VAR_6, VAR_7;

    if (VAR_5 == ((void*)0))
        return -1;

    VAR_6 = VAR_5->log2_chroma_w;
    VAR_7 = VAR_5->log2_chroma_h;

    VAR_0[0] = VAR_2->plane[0].data + VAR_3 * VAR_2->plane[0].stride + VAR_4;
    VAR_0[1] = VAR_2->plane[1].data + (VAR_3 >> VAR_7) * VAR_2->plane[1].stride +
              (VAR_4 >> VAR_6);
    VAR_0[2] = VAR_2->plane[2].data + (VAR_3 >> VAR_7) * VAR_2->plane[2].stride +
              (VAR_4 >> VAR_6);
    VAR_0[3] = ((void*)0);

    VAR_1[0] = VAR_2->plane[0].stride;
    VAR_1[1] = VAR_2->plane[1].stride;
    VAR_1[2] = VAR_2->plane[2].stride;
    VAR_1[3] = 0;

    return 0;
}
