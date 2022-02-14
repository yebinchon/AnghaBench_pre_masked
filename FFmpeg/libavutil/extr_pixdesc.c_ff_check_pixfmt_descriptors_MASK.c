
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int member_0; } ;
typedef TYPE_1__ uint8_t ;
typedef int uint16_t ;
struct TYPE_10__ {int nb_components; int log2_chroma_w; int log2_chroma_h; int flags; int step; int depth; int shift; int offset; int plane; struct TYPE_10__* comp; scalar_t__* name; } ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef TYPE_2__ AVComponentDescriptor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_4 (int*,void*,int*,TYPE_2__ const*,int ,int ,int,int,int ) ;
 int FUNC_5 (int*,TYPE_1__**,int*,TYPE_2__ const*,int ,int ,int,int) ;

void FUNC_6(void){
    int VAR_3, VAR_4;

    for (VAR_3=0; VAR_3<FUNC_0(VAR_2); VAR_3++) {
        const AVPixFmtDescriptor *VAR_5 = &VAR_2[VAR_3];
        uint8_t VAR_6[4][8+6+3] = {{0}};
        uint8_t *VAR_7[4] = {VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3]};
        int VAR_8[4] = {0,0,0,0};
        uint16_t VAR_9[2];

        if (!VAR_5->name && !VAR_5->nb_components && !VAR_5->log2_chroma_w && !VAR_5->log2_chroma_h && !VAR_5->flags)
            continue;

        FUNC_1(VAR_5->log2_chroma_w <= 3);
        FUNC_1(VAR_5->log2_chroma_h <= 3);
        FUNC_1(VAR_5->nb_components <= 4);
        FUNC_1(VAR_5->name && VAR_5->name[0]);
        FUNC_2(FUNC_3(VAR_5->name) == VAR_3);

        for (VAR_4=0; VAR_4<FUNC_0(VAR_5->comp); VAR_4++) {
            const AVComponentDescriptor *VAR_10 = &VAR_5->comp[VAR_4];
            if(VAR_4>=VAR_5->nb_components) {
                FUNC_1(!VAR_10->plane && !VAR_10->step && !VAR_10->offset && !VAR_10->shift && !VAR_10->depth);
                continue;
            }
            if (VAR_5->flags & VAR_1) {
                FUNC_1(VAR_10->step >= VAR_10->depth);
            } else {
                FUNC_1(8*VAR_10->step >= VAR_10->depth);
            }
            if (VAR_5->flags & VAR_0)
                continue;
            FUNC_4(VAR_9, (void*)VAR_7, VAR_8, VAR_5, 0, 0, VAR_4, 2, 0);
            FUNC_1(VAR_9[0] == 0 && VAR_9[1] == 0);
            VAR_9[0] = VAR_9[1] = (1<<VAR_10->depth) - 1;
            FUNC_5(VAR_9, VAR_7, VAR_8, VAR_5, 0, 0, VAR_4, 2);
        }
    }
}
