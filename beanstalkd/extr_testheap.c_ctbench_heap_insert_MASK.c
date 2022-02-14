
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__** data; int setpos; int less; } ;
struct TYPE_11__ {int id; int pri; } ;
struct TYPE_12__ {TYPE_1__ r; } ;
typedef TYPE_2__ Job ;
typedef TYPE_3__ Heap ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__** FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__**) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_8 (int,int ,int,int ,int ) ;

void
FUNC_9(int VAR_2)
{
    Job **VAR_3 = FUNC_1(VAR_2, sizeof *VAR_3);
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        VAR_3[VAR_4] = FUNC_8(1, 0, 1, 0, 0);
        FUNC_0(VAR_3[VAR_4]);
        VAR_3[VAR_4]->r.pri = -VAR_3[VAR_4]->r.id;
    }
    Heap VAR_5 = {
        .less = VAR_0,
        .setpos = VAR_1,
    };

    FUNC_2();
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        FUNC_5(&VAR_5, VAR_3[VAR_4]);
    }
    FUNC_3();

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
        FUNC_7(FUNC_6(&VAR_5, 0));
    FUNC_4(VAR_5.data);
    FUNC_4(VAR_3);
}
