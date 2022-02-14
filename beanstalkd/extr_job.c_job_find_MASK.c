
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_5__ {scalar_t__ id; } ;
struct TYPE_6__ {struct TYPE_6__* ht_next; TYPE_1__ r; } ;
typedef TYPE_2__ Job ;


 int FUNC_0 (scalar_t__) ;
 TYPE_2__** VAR_0 ;

Job *
FUNC_1(uint64 VAR_1)
{
    int VAR_2 = FUNC_0(VAR_1);
    Job *VAR_3 = VAR_0[VAR_2];

    while (VAR_3 && VAR_3->r.id != VAR_1)
        VAR_3 = VAR_3->ht_next;

    return VAR_3;
}
