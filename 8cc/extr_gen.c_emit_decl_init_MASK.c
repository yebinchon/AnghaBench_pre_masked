
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_9__ {scalar_t__ bitsize; } ;
struct TYPE_8__ {scalar_t__ kind; } ;
struct TYPE_7__ {scalar_t__ kind; scalar_t__ initoff; TYPE_4__* totype; TYPE_3__* initval; } ;
typedef TYPE_1__ Node ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (TYPE_4__*,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*,scalar_t__) ;
 TYPE_1__* FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(Vector *VAR_2, int VAR_3, int VAR_4) {
    FUNC_2(VAR_2, VAR_3, VAR_4);
    for (int VAR_5 = 0; VAR_5 < FUNC_6(VAR_2); VAR_5++) {
        Node *VAR_6 = FUNC_5(VAR_2, VAR_5);
        FUNC_0(VAR_6->kind == VAR_0);
        bool VAR_7 = (VAR_6->totype->bitsize > 0);
        if (VAR_6->initval->kind == VAR_1 && !VAR_7) {
            FUNC_4(VAR_6->initval, VAR_6->totype, VAR_6->initoff + VAR_3);
        } else {
            FUNC_1(VAR_6->initval);
            FUNC_3(VAR_6->totype, VAR_6->initoff + VAR_3);
        }
    }
}
