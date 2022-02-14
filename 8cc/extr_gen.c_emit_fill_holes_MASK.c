
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_7__ {int initoff; TYPE_1__* totype; } ;
struct TYPE_6__ {int size; } ;
typedef TYPE_2__ Node ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 TYPE_2__** FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__**,int,int,int ) ;
 TYPE_2__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(Vector *VAR_1, int VAR_2, int VAR_3) {


    int VAR_4 = FUNC_4(VAR_1);
    Node **VAR_5 = FUNC_1(VAR_4 * sizeof(Node *));
    for (int VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
        VAR_5[VAR_6] = FUNC_3(VAR_1, VAR_6);
    FUNC_2(VAR_5, VAR_4, sizeof(Node *), VAR_0);

    int VAR_7 = 0;
    for (int VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
        Node *VAR_9 = VAR_5[VAR_8];
        if (VAR_7 < VAR_9->initoff)
            FUNC_0(VAR_7 + VAR_2, VAR_9->initoff + VAR_2);
        VAR_7 = VAR_9->initoff + VAR_9->totype->size;
    }
    FUNC_0(VAR_7 + VAR_2, VAR_3 + VAR_2);
}
