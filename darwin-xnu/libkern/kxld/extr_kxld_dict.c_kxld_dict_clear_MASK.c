
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int resize_buckets; int buckets; scalar_t__ resize_threshold; scalar_t__ num_entries; int * cmp; int * hash; } ;
typedef TYPE_1__ KXLDDict ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(KXLDDict *VAR_0)
{
    FUNC_0(VAR_0);

    VAR_0->hash = ((void*)0);
    VAR_0->cmp = ((void*)0);
    VAR_0->num_entries = 0;
    VAR_0->resize_threshold = 0;
    FUNC_1(&VAR_0->buckets);
    FUNC_1(&VAR_0->resize_buckets);
}
