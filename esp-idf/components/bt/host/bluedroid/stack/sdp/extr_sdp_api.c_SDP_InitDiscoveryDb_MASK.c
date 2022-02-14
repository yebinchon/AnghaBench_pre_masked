
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tSDP_UUID ;
struct TYPE_5__ {int mem_size; int mem_free; scalar_t__ num_attr_filters; int * attr_filters; scalar_t__ num_uuid_filters; int * uuid_filters; int * p_free_mem; int * p_first_rec; } ;
typedef TYPE_1__ tSDP_DISCOVERY_DB ;
typedef int UINT8 ;
typedef int UINT32 ;
typedef scalar_t__ UINT16 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int,int,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,size_t) ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;

BOOLEAN FUNC_3 (tSDP_DISCOVERY_DB *VAR_4, UINT32 VAR_5, UINT16 VAR_6,
                             tSDP_UUID *VAR_7, UINT16 VAR_8, UINT16 *VAR_9)
{

    UINT16 VAR_10;


    if (VAR_4 == ((void*)0) || (sizeof (tSDP_DISCOVERY_DB) > VAR_5) ||
            VAR_8 > VAR_1 || VAR_6 > VAR_2) {
        FUNC_0("SDP_InitDiscoveryDb Illegal param: p_db 0x%x, len %d, num_uuid %d, num_attr %d",
                        (UINT32)VAR_4, VAR_5, VAR_6, VAR_8);

        return (VAR_0);
    }

    FUNC_1 (VAR_4, 0, (size_t)VAR_5);

    VAR_4->mem_size = VAR_5 - sizeof (tSDP_DISCOVERY_DB);
    VAR_4->mem_free = VAR_4->mem_size;
    VAR_4->p_first_rec = ((void*)0);
    VAR_4->p_free_mem = (UINT8 *)(VAR_4 + 1);

    for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
        VAR_4->uuid_filters[VAR_10] = *VAR_7++;
    }

    VAR_4->num_uuid_filters = VAR_6;

    for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
        VAR_4->attr_filters[VAR_10] = *VAR_9++;
    }


    FUNC_2( VAR_8, VAR_4 );

    VAR_4->num_attr_filters = VAR_8;

    return (VAR_3);
}
