
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ num_attributes; TYPE_2__* attribute; } ;
typedef TYPE_1__ tSDP_RECORD ;
struct TYPE_6__ {scalar_t__ id; } ;
typedef TYPE_2__ tSDP_ATTRIBUTE ;
typedef scalar_t__ UINT16 ;



tSDP_ATTRIBUTE *FUNC_0 (tSDP_RECORD *VAR_0, UINT16 VAR_1,
        UINT16 VAR_2)
{
    tSDP_ATTRIBUTE *VAR_3;
    UINT16 VAR_4;


    for (VAR_4 = 0, VAR_3 = &VAR_0->attribute[0]; VAR_4 < VAR_0->num_attributes;
            VAR_4++, VAR_3++) {
        if ((VAR_3->id >= VAR_1) && (VAR_3->id <= VAR_2)) {
            return (VAR_3);
        }
    }


    return (((void*)0));
}
