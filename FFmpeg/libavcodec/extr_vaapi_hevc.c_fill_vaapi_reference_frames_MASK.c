
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__ const* ReferenceFrames; } ;
typedef TYPE_1__ VAPictureParameterBufferHEVC ;
struct TYPE_14__ {TYPE_2__ const* DPB; TYPE_2__ const* ref; } ;
struct TYPE_13__ {int flags; } ;
typedef TYPE_2__ const HEVCFrame ;
typedef TYPE_3__ HEVCContext ;


 int FUNC_0 (TYPE_2__ const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__ const*,TYPE_2__ const*,int) ;
 int FUNC_2 (TYPE_3__ const*,TYPE_2__ const*) ;
 int FUNC_3 (TYPE_2__ const*) ;

__attribute__((used)) static void FUNC_4(const HEVCContext *VAR_2, VAPictureParameterBufferHEVC *VAR_3)
{
    const HEVCFrame *VAR_4 = VAR_2->ref;
    int VAR_5, VAR_6, VAR_7;

    for (VAR_5 = 0, VAR_6 = 0; VAR_5 < FUNC_0(VAR_3->ReferenceFrames); VAR_5++) {
        const HEVCFrame *VAR_8 = ((void*)0);

        while (!VAR_8 && VAR_6 < FUNC_0(VAR_2->DPB)) {
            if (&VAR_2->DPB[VAR_6] != VAR_4 && (VAR_2->DPB[VAR_6].flags & (VAR_0 | VAR_1)))
                VAR_8 = &VAR_2->DPB[VAR_6];
            VAR_6++;
        }

        FUNC_3(&VAR_3->ReferenceFrames[VAR_5]);

        if (VAR_8) {
            VAR_7 = FUNC_2(VAR_2, VAR_8);
            FUNC_1(&VAR_3->ReferenceFrames[VAR_5], VAR_8, VAR_7);
        }
    }
}
