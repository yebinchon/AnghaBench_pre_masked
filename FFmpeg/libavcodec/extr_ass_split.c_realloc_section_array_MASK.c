
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int offset_count; int offset; int size; } ;
struct TYPE_5__ {size_t current_section; int ass; } ;
typedef TYPE_1__ ASSSplitContext ;
typedef TYPE_2__ ASSSection ;


 TYPE_2__* VAR_0 ;
 int * FUNC_0 (void*,int,int) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static uint8_t *FUNC_2(ASSSplitContext *VAR_1)
{
    const ASSSection *VAR_2 = &VAR_0[VAR_1->current_section];
    int *VAR_3 = (int *)((uint8_t *)&VAR_1->ass + VAR_2->offset_count);
    void **VAR_4 = (void **)((uint8_t *)&VAR_1->ass + VAR_2->offset);
    uint8_t *VAR_5 = FUNC_0(*VAR_4, (*VAR_3+1), VAR_2->size);
    if (!VAR_5)
        return ((void*)0);
    *VAR_4 = VAR_5;
    VAR_5 += *VAR_3 * VAR_2->size;
    FUNC_1(VAR_5, 0, VAR_2->size);
    (*VAR_3)++;
    return VAR_5;
}
