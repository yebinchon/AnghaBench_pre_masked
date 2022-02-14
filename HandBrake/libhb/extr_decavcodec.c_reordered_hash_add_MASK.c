
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sequence; } ;
typedef TYPE_1__ reordered_data_t ;
struct TYPE_7__ {TYPE_1__** reordered_hash; } ;
typedef TYPE_2__ hb_work_private_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(hb_work_private_t * VAR_1, reordered_data_t * VAR_2)
{
    int VAR_3 = VAR_2->sequence & VAR_0;





    FUNC_0(VAR_1->reordered_hash[VAR_3]);
    VAR_1->reordered_hash[VAR_3] = VAR_2;
}
