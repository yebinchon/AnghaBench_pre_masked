
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tSDP_RECORD ;
struct TYPE_8__ {size_t num_attr; TYPE_1__* attr_entry; } ;
typedef TYPE_2__ tSDP_ATTR_SEQ ;
struct TYPE_9__ {size_t id; } ;
typedef TYPE_3__ tSDP_ATTRIBUTE ;
typedef size_t UINT16 ;
struct TYPE_7__ {size_t start; size_t end; } ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 (int *,size_t,size_t) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;

UINT16 FUNC_2(tSDP_RECORD *VAR_2, tSDP_ATTR_SEQ *VAR_3)
{
    tSDP_ATTRIBUTE *VAR_4;
    UINT16 VAR_5 = 0;
    UINT16 VAR_6;
    BOOLEAN VAR_7 = VAR_0;
    UINT16 VAR_8 = 0, VAR_9 = 0;

    for (VAR_6 = 0; VAR_6 < VAR_3->num_attr; VAR_6++) {
        if (VAR_7 == VAR_0) {
            VAR_8 = VAR_3->attr_entry[VAR_6].start;
            VAR_9 = VAR_3->attr_entry[VAR_6].end;
        }
        VAR_4 = FUNC_0 (VAR_2,
                                          VAR_8,
                                          VAR_9);
        if (VAR_4) {
            VAR_5 += FUNC_1 (VAR_4);


            if (VAR_8 != VAR_9) {

                VAR_8 = VAR_4->id + 1;
                VAR_6--;
                VAR_7 = VAR_1;
            } else {
                VAR_7 = VAR_0;
            }
        } else {
            VAR_7 = VAR_0;
        }
    }
    return VAR_5;
}
