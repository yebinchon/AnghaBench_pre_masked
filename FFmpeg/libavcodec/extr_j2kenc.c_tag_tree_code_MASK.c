
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val; struct TYPE_3__* parent; scalar_t__ vis; } ;
typedef TYPE_1__ Jpeg2000TgtNode ;
typedef int Jpeg2000EncoderContext ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(Jpeg2000EncoderContext *VAR_0, Jpeg2000TgtNode *VAR_1, int VAR_2)
{
    Jpeg2000TgtNode *VAR_3[30];
    int VAR_4 = 1, VAR_5 = 0;
    VAR_3[0] = VAR_1;

    VAR_1 = VAR_1->parent;
    while(VAR_1){
        if (VAR_1->vis){
            VAR_5 = VAR_1->val;
            break;
        }
        VAR_1->vis++;
        VAR_3[VAR_4++] = VAR_1;
        VAR_1 = VAR_1->parent;
    }
    while(--VAR_4 >= 0){
        if (VAR_3[VAR_4]->val >= VAR_2){
            FUNC_0(VAR_0, 0, VAR_2 - VAR_5);
            break;
        }
        FUNC_0(VAR_0, 0, VAR_3[VAR_4]->val - VAR_5);
        FUNC_0(VAR_0, 1, 1);
        VAR_5 = VAR_3[VAR_4]->val;
    }
}
