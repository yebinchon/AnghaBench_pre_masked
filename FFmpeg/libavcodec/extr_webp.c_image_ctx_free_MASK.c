
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int vlc; } ;
struct TYPE_5__ {scalar_t__ role; int nb_huffman_groups; TYPE_4__* huffman_groups; int frame; int is_alpha_primary; TYPE_4__* color_cache; } ;
typedef TYPE_1__ ImageContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_4(ImageContext *VAR_2)
{
    int VAR_3, VAR_4;

    FUNC_1(VAR_2->color_cache);
    if (VAR_2->role != VAR_1 && !VAR_2->is_alpha_primary)
        FUNC_0(&VAR_2->frame);
    if (VAR_2->huffman_groups) {
        for (VAR_3 = 0; VAR_3 < VAR_2->nb_huffman_groups; VAR_3++) {
            for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
                FUNC_2(&VAR_2->huffman_groups[VAR_3 * VAR_0 + VAR_4].vlc);
        }
        FUNC_1(VAR_2->huffman_groups);
    }
    FUNC_3(VAR_2, 0, sizeof(*VAR_2));
}
