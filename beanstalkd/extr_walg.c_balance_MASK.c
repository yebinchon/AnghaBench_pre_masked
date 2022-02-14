
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* cur; int tail; } ;
typedef TYPE_1__ Wal ;
struct TYPE_9__ {int resv; } ;


 int FUNC_0 (TYPE_1__*,TYPE_4__*,int) ;
 int FUNC_1 (int ,TYPE_4__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(Wal *VAR_0, int VAR_1)
{


    while (VAR_0->cur->resv < VAR_1) {
        int VAR_2 = VAR_0->cur->resv;

        int VAR_3 = FUNC_2(VAR_0, VAR_2);
        if (VAR_3 != VAR_2) {
            FUNC_3("needfree");
            return 0;
        }

        FUNC_1(VAR_0->tail, VAR_0->cur, VAR_2);
        FUNC_4(VAR_0);
    }


    return FUNC_0(VAR_0, VAR_0->cur, VAR_1);
}
