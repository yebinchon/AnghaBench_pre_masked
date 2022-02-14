
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* attr_filters; } ;
typedef TYPE_1__ tSDP_DISCOVERY_DB ;
typedef int UINT16 ;


 int VAR_0 ;

void FUNC_0( UINT16 VAR_1, tSDP_DISCOVERY_DB *VAR_2 )
{
    UINT16 VAR_3;
    UINT16 VAR_4;


    if (VAR_1 <= 1) {
        return;
    } else if (VAR_1 > VAR_0) {
        VAR_1 = VAR_0;
    }

    VAR_1--;
    for ( VAR_3 = 0; VAR_3 < VAR_1; ) {
        if ( VAR_2->attr_filters[VAR_3] > VAR_2->attr_filters[VAR_3 + 1] ) {

            VAR_4 = VAR_2->attr_filters[VAR_3];
            VAR_2->attr_filters[VAR_3] = VAR_2->attr_filters[VAR_3 + 1];
            VAR_2->attr_filters[VAR_3 + 1] = VAR_4;

            VAR_3 = 0;
        } else {
            VAR_3++;
        }
    }
}
