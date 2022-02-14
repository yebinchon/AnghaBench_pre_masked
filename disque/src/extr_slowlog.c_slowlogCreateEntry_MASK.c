
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int argc; long long duration; scalar_t__ id; int time; TYPE_2__** argv; } ;
typedef TYPE_1__ slowlogEntry ;
typedef int sds ;
struct TYPE_9__ {scalar_t__ type; int ptr; } ;
typedef TYPE_2__ robj ;
struct TYPE_10__ {int slowlog_entry_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 void* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,char*,unsigned long) ;
 int FUNC_4 () ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned long) ;
 TYPE_5__ VAR_3 ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (int) ;

slowlogEntry *FUNC_9(robj **VAR_4, int VAR_5, long long VAR_6) {
    slowlogEntry *VAR_7 = FUNC_8(sizeof(*VAR_7));
    int VAR_8, VAR_9 = VAR_5;

    if (VAR_9 > VAR_1) VAR_9 = VAR_1;
    VAR_7->argc = VAR_9;
    VAR_7->argv = FUNC_8(sizeof(robj*)*VAR_9);
    for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {



        if (VAR_9 != VAR_5 && VAR_8 == VAR_9-1) {
            VAR_7->argv[VAR_8] = FUNC_0(VAR_0,
                FUNC_3(FUNC_4(),"... (%d more arguments)",
                VAR_5-VAR_9+1));
        } else {

            if (VAR_4[VAR_8]->type == VAR_0 &&
                FUNC_2(VAR_4[VAR_8]) &&
                FUNC_5(VAR_4[VAR_8]->ptr) > VAR_2)
            {
                sds VAR_10 = FUNC_6(VAR_4[VAR_8]->ptr, VAR_2);

                VAR_10 = FUNC_3(VAR_10,"... (%lu more bytes)",
                    (unsigned long)
                    FUNC_5(VAR_4[VAR_8]->ptr) - VAR_2);
                VAR_7->argv[VAR_8] = FUNC_0(VAR_0,VAR_10);
            } else {
                VAR_7->argv[VAR_8] = VAR_4[VAR_8];
                FUNC_1(VAR_4[VAR_8]);
            }
        }
    }
    VAR_7->time = FUNC_7(((void*)0));
    VAR_7->duration = VAR_6;
    VAR_7->id = VAR_3.slowlog_entry_id++;
    return VAR_7;
}
