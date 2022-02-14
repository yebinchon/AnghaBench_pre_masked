
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int job ;
struct TYPE_9__ {TYPE_1__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_10__ {int nullbulk; } ;
struct TYPE_8__ {int ptr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_5__ VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int ) ;

void FUNC_5(client *VAR_2) {
    if (FUNC_4(VAR_2,VAR_2->argv[1]->ptr,FUNC_3(VAR_2->argv[1]->ptr))
        == VAR_0) return;

    job *VAR_3 = FUNC_2(VAR_2->argv[1]->ptr);
    if (!VAR_3) {
        FUNC_0(VAR_2,VAR_1.nullbulk);
        return;
    }
    FUNC_1(VAR_2,VAR_3);
}
