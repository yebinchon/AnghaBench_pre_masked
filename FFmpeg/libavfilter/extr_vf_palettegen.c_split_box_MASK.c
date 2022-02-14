
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct range_box {int start; int len; int variance; void* color; int sorted_by; } ;
struct TYPE_3__ {int refs; int nb_boxes; struct range_box* boxes; } ;
typedef TYPE_1__ PaletteGenContext ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int ,struct range_box*) ;

__attribute__((used)) static void FUNC_2(PaletteGenContext *VAR_0, struct range_box *VAR_1, int VAR_2)
{
    struct range_box *VAR_3 = &VAR_0->boxes[VAR_0->nb_boxes++];
    VAR_3->start = VAR_2 + 1;
    VAR_3->len = VAR_1->start + VAR_1->len - VAR_3->start;
    VAR_3->sorted_by = VAR_1->sorted_by;
    VAR_1->len -= VAR_3->len;

    FUNC_0(VAR_1->len >= 1);
    FUNC_0(VAR_3->len >= 1);

    VAR_1->color = FUNC_1(VAR_0->refs, VAR_1);
    VAR_3->color = FUNC_1(VAR_0->refs, VAR_3);
    VAR_1->variance = -1;
    VAR_3->variance = -1;
}
