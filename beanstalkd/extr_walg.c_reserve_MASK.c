
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int resv; TYPE_2__* tail; TYPE_1__* cur; int use; } ;
typedef TYPE_3__ Wal ;
struct TYPE_8__ {int free; int resv; } ;
struct TYPE_7__ {int free; int resv; } ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(Wal *VAR_0, int VAR_1)
{
    int VAR_2;


    if (!VAR_0->use) return 1;

    if (VAR_0->cur->free >= VAR_1) {
        VAR_0->cur->free -= VAR_1;
        VAR_0->cur->resv += VAR_1;
        VAR_0->resv += VAR_1;
        return VAR_1;
    }

    VAR_2 = FUNC_1(VAR_0, VAR_1);
    if (VAR_2 != VAR_1) {
        FUNC_2("needfree");
        return 0;
    }

    VAR_0->tail->free -= VAR_1;
    VAR_0->tail->resv += VAR_1;
    VAR_0->resv += VAR_1;
    if (!FUNC_0(VAR_0, VAR_1)) {

        VAR_0->resv -= VAR_1;
        VAR_0->tail->resv -= VAR_1;
        VAR_0->tail->free += VAR_1;
        return 0;
    }

    return VAR_1;
}
