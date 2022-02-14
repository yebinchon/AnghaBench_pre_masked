
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int avctx; } ;
struct TYPE_6__ {int val; int vis; struct TYPE_6__* parent; } ;
typedef TYPE_1__ Jpeg2000TgtNode ;
typedef TYPE_2__ Jpeg2000DecoderContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_2(Jpeg2000DecoderContext *VAR_2, Jpeg2000TgtNode *VAR_3,
                           int VAR_4)
{
    Jpeg2000TgtNode *VAR_5[30];
    int VAR_6 = -1, VAR_7 = 0;

    if (!VAR_3) {
        FUNC_0(VAR_2->avctx, VAR_1, "missing node\n");
        return VAR_0;
    }

    while (VAR_3 && !VAR_3->vis) {
        VAR_5[++VAR_6] = VAR_3;
        VAR_3 = VAR_3->parent;
    }

    if (VAR_3)
        VAR_7 = VAR_3->val;
    else
        VAR_7 = VAR_5[VAR_6]->val;

    while (VAR_7 < VAR_4 && VAR_6 >= 0) {
        if (VAR_7 < VAR_5[VAR_6]->val)
            VAR_7 = VAR_5[VAR_6]->val;
        while (VAR_7 < VAR_4) {
            int VAR_8;
            if ((VAR_8 = FUNC_1(VAR_2, 1)) > 0) {
                VAR_5[VAR_6]->vis++;
                break;
            } else if (!VAR_8)
                VAR_7++;
            else
                return VAR_8;
        }
        VAR_5[VAR_6]->val = VAR_7;
        VAR_6--;
    }
    return VAR_7;
}
