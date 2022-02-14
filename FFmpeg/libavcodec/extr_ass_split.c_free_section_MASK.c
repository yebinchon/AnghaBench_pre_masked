
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {scalar_t__ type; int offset; scalar_t__ name; } ;
struct TYPE_7__ {int offset; int offset_count; scalar_t__ format_header; TYPE_3__* fields; int size; } ;
struct TYPE_6__ {int ass; } ;
typedef TYPE_1__ ASSSplitContext ;
typedef TYPE_2__ ASSSection ;
typedef TYPE_3__ ASSFields ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(ASSSplitContext *VAR_1, const ASSSection *VAR_2)
{
    uint8_t *VAR_3 = (uint8_t *)&VAR_1->ass + VAR_2->offset;
    int VAR_4, VAR_5, *VAR_6, VAR_7 = 1;

    if (VAR_2->format_header) {
        VAR_3 = *(void **)VAR_3;
        VAR_6 = (int *)((uint8_t *)&VAR_1->ass + VAR_2->offset_count);
    } else
        VAR_6 = &VAR_7;

    if (VAR_3)
        for (VAR_4=0; VAR_4<*VAR_6; VAR_4++, VAR_3 += VAR_2->size)
            for (VAR_5=0; VAR_2->fields[VAR_5].name; VAR_5++) {
                const ASSFields *VAR_8 = &VAR_2->fields[VAR_5];
                if (VAR_8->type == VAR_0)
                    FUNC_0(VAR_3 + VAR_8->offset);
            }
    *VAR_6 = 0;

    if (VAR_2->format_header)
        FUNC_0((uint8_t *)&VAR_1->ass + VAR_2->offset);
}
