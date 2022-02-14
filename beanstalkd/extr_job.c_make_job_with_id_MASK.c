
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef int uint32 ;
typedef void* int64 ;
typedef int Tube ;
struct TYPE_6__ {void* ttr; void* delay; int pri; scalar_t__ id; } ;
struct TYPE_7__ {int tube; TYPE_1__ r; } ;
typedef TYPE_2__ Job ;


 int FUNC_0 (int ,int *) ;
 TYPE_2__* FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*) ;

Job *
FUNC_4(uint32 VAR_1, int64 VAR_2, int64 VAR_3,
                 int VAR_4, Tube *VAR_5, uint64 VAR_6)
{
    Job *VAR_7;

    VAR_7 = FUNC_1(VAR_4);
    if (!VAR_7) {
        FUNC_3("OOM");
        return (Job *) 0;
    }

    if (VAR_6) {
        VAR_7->r.id = VAR_6;
        if (VAR_6 >= VAR_0) VAR_0 = VAR_6 + 1;
    } else {
        VAR_7->r.id = VAR_0++;
    }
    VAR_7->r.pri = VAR_1;
    VAR_7->r.delay = VAR_2;
    VAR_7->r.ttr = VAR_3;

    FUNC_2(VAR_7);

    FUNC_0(VAR_7->tube, VAR_5);

    return VAR_7;
}
