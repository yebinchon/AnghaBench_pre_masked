
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int residue_count; int codebook_count; int floor_count; int mapping_count; TYPE_6__* mappings; TYPE_6__* floors; TYPE_6__* codebooks; int * mdct; TYPE_6__* modes; TYPE_6__* residues; TYPE_6__* fdsp; TYPE_6__* saved; TYPE_6__* channel_residues; } ;
typedef TYPE_4__ vorbis_context ;
struct TYPE_8__ {TYPE_6__* list; } ;
struct TYPE_7__ {TYPE_6__* lsp; TYPE_6__* book_list; TYPE_6__** map; } ;
struct TYPE_9__ {TYPE_2__ t1; TYPE_1__ t0; } ;
struct TYPE_11__ {scalar_t__ floor_type; struct TYPE_11__* mux; struct TYPE_11__* angle; struct TYPE_11__* magnitude; TYPE_3__ data; int vlc; struct TYPE_11__* codevectors; struct TYPE_11__* classifs; } ;


 int FUNC_0 (TYPE_6__**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(vorbis_context *VAR_0)
{
    int VAR_1;

    FUNC_0(&VAR_0->channel_residues);
    FUNC_0(&VAR_0->saved);
    FUNC_0(&VAR_0->fdsp);

    if (VAR_0->residues)
        for (VAR_1 = 0; VAR_1 < VAR_0->residue_count; VAR_1++)
            FUNC_0(&VAR_0->residues[VAR_1].classifs);
    FUNC_0(&VAR_0->residues);
    FUNC_0(&VAR_0->modes);

    FUNC_2(&VAR_0->mdct[0]);
    FUNC_2(&VAR_0->mdct[1]);

    if (VAR_0->codebooks)
        for (VAR_1 = 0; VAR_1 < VAR_0->codebook_count; ++VAR_1) {
            FUNC_0(&VAR_0->codebooks[VAR_1].codevectors);
            FUNC_1(&VAR_0->codebooks[VAR_1].vlc);
        }
    FUNC_0(&VAR_0->codebooks);

    if (VAR_0->floors)
        for (VAR_1 = 0; VAR_1 < VAR_0->floor_count; ++VAR_1) {
            if (VAR_0->floors[VAR_1].floor_type == 0) {
                FUNC_0(&VAR_0->floors[VAR_1].data.t0.map[0]);
                FUNC_0(&VAR_0->floors[VAR_1].data.t0.map[1]);
                FUNC_0(&VAR_0->floors[VAR_1].data.t0.book_list);
                FUNC_0(&VAR_0->floors[VAR_1].data.t0.lsp);
            } else {
                FUNC_0(&VAR_0->floors[VAR_1].data.t1.list);
            }
        }
    FUNC_0(&VAR_0->floors);

    if (VAR_0->mappings)
        for (VAR_1 = 0; VAR_1 < VAR_0->mapping_count; ++VAR_1) {
            FUNC_0(&VAR_0->mappings[VAR_1].magnitude);
            FUNC_0(&VAR_0->mappings[VAR_1].angle);
            FUNC_0(&VAR_0->mappings[VAR_1].mux);
        }
    FUNC_0(&VAR_0->mappings);
}
