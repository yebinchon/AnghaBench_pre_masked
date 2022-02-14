
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int kind; int bitsize; struct TYPE_10__* ptr; } ;
typedef TYPE_1__ Type ;
struct TYPE_11__ {TYPE_1__* ty; } ;
typedef TYPE_2__ Node ;


 int VAR_0 ;
 int VAR_1 ;






 TYPE_2__* FUNC_0 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static Node *FUNC_3(Node *VAR_3) {
    if (!VAR_3)
        return ((void*)0);
    Type *VAR_4 = VAR_3->ty;
    switch (VAR_4->kind) {
    case 133:

        return FUNC_1(VAR_1, FUNC_2(VAR_4->ptr), VAR_3);
    case 130:

        return FUNC_1(VAR_0, FUNC_2(VAR_4), VAR_3);
    case 128: case 131: case 132:

        return FUNC_0(VAR_2, VAR_3);
    case 129:
        if (VAR_4->bitsize > 0)
            return FUNC_0(VAR_2, VAR_3);
    }
    return VAR_3;
}
