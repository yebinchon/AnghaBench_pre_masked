
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * ReferenceFrames; } ;
typedef TYPE_1__ VAPictureParameterBufferH264 ;
struct TYPE_12__ {int max_size; int * va_pics; scalar_t__ size; } ;
struct TYPE_11__ {int short_ref_count; TYPE_2__** long_ref; TYPE_2__** short_ref; } ;
struct TYPE_10__ {scalar_t__ reference; } ;
typedef TYPE_2__ H264Picture ;
typedef TYPE_3__ H264Context ;
typedef TYPE_4__ DPB ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_2__ const*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(VAPictureParameterBufferH264 *VAR_0,
                                      const H264Context *VAR_1)
{
    DPB VAR_2;
    int VAR_3;

    VAR_2.size = 0;
    VAR_2.max_size = FUNC_0(VAR_0->ReferenceFrames);
    VAR_2.va_pics = VAR_0->ReferenceFrames;
    for (VAR_3 = 0; VAR_3 < VAR_2.max_size; VAR_3++)
        FUNC_2(&VAR_2.va_pics[VAR_3]);

    for (VAR_3 = 0; VAR_3 < VAR_1->short_ref_count; VAR_3++) {
        const H264Picture *VAR_4 = VAR_1->short_ref[VAR_3];
        if (VAR_4 && VAR_4->reference && FUNC_1(&VAR_2, VAR_4) < 0)
            return -1;
    }

    for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
        const H264Picture *VAR_5 = VAR_1->long_ref[VAR_3];
        if (VAR_5 && VAR_5->reference && FUNC_1(&VAR_2, VAR_5) < 0)
            return -1;
    }
    return 0;
}
