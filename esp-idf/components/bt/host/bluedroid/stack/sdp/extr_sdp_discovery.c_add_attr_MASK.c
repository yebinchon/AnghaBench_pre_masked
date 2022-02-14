
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* p_first_attr; } ;
typedef TYPE_3__ tSDP_DISC_REC ;
struct TYPE_9__ {int u16; int u32; TYPE_4__* p_sub_attr; int u8; int array; } ;
struct TYPE_10__ {TYPE_1__ v; } ;
struct TYPE_12__ {int attr_id; int attr_len_type; struct TYPE_12__* p_next_attr; TYPE_2__ attr_value; } ;
typedef TYPE_4__ tSDP_DISC_ATTR ;
struct TYPE_13__ {int mem_free; scalar_t__ p_free_mem; } ;
typedef TYPE_5__ tSDP_DISCOVERY_DB ;
typedef int UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
typedef int INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ,int ) ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (int,int*) ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;





 int* FUNC_5 (int*,int,int*) ;
 int FUNC_6 (int*) ;

__attribute__((used)) static UINT8 *FUNC_7 (UINT8 *VAR_6, tSDP_DISCOVERY_DB *VAR_7, tSDP_DISC_REC *VAR_8,
                        UINT16 VAR_9, tSDP_DISC_ATTR *VAR_10, UINT8 VAR_11)
{
    tSDP_DISC_ATTR *VAR_12;
    UINT32 VAR_13;
    UINT32 VAR_14;
    UINT16 VAR_15;
    UINT16 VAR_16;
    UINT8 VAR_17;
    UINT8 *VAR_18;
    UINT8 VAR_19 = VAR_11 & VAR_4;

    VAR_11 &= ~(VAR_4);

    VAR_17 = *VAR_6++;
    VAR_6 = FUNC_5 (VAR_6, VAR_17, &VAR_13);

    VAR_13 &= VAR_5;
    VAR_15 = (VAR_17 >> 3) & 0x0f;


    if (VAR_13 > 4) {
        VAR_14 = VAR_13 - 4 + (UINT16)sizeof (tSDP_DISC_ATTR);
    } else {
        VAR_14 = sizeof (tSDP_DISC_ATTR);
    }


    VAR_14 = (VAR_14 + 3) & ~3;


    if (VAR_7->mem_free < VAR_14) {
        return (((void*)0));
    }

    VAR_12 = (tSDP_DISC_ATTR *) VAR_7->p_free_mem;
    VAR_12->attr_id = VAR_9;
    VAR_12->attr_len_type = (UINT16)VAR_13 | (VAR_15 << 12);
    VAR_12->p_next_attr = ((void*)0);


    switch (VAR_15) {
    case 130:
        if ( (VAR_19 != 0) && (VAR_13 == 2) ) {
            FUNC_1 (VAR_16, VAR_6);
            if (VAR_16 != VAR_1) {
                VAR_6 -= 2;
            } else {

                VAR_7->p_free_mem += sizeof (tSDP_DISC_ATTR);
                VAR_7->mem_free -= sizeof (tSDP_DISC_ATTR);
                VAR_18 = VAR_6 + VAR_13;
                VAR_14 = 0;


                if (VAR_11 >= VAR_2) {
                    FUNC_3 ("SDP - attr nesting too deep\n");
                    return (VAR_18);
                }


                VAR_6 = FUNC_7 (VAR_6, VAR_7, VAR_8, VAR_1, VAR_12, (UINT8)(VAR_11 + 1));

                break;
            }
        }


    case 131:
        switch (VAR_13) {
        case 1:
            VAR_12->attr_value.v.u8 = *VAR_6++;
            break;
        case 2:
            FUNC_1 (VAR_12->attr_value.v.u16, VAR_6);
            break;
        case 4:
            FUNC_2 (VAR_12->attr_value.v.u32, VAR_6);
            break;
        default:
            FUNC_0 (VAR_6, VAR_12->attr_value.v.array, (INT32)VAR_13);
            break;
        }
        break;

    case 128:
        switch (VAR_13) {
        case 2:
            FUNC_1 (VAR_12->attr_value.v.u16, VAR_6);
            break;
        case 4:
            FUNC_2 (VAR_12->attr_value.v.u32, VAR_6);
            if (VAR_12->attr_value.v.u32 < 0x10000) {
                VAR_13 = 2;
                VAR_12->attr_len_type = (UINT16)VAR_13 | (VAR_15 << 12);
                VAR_12->attr_value.v.u16 = (UINT16) VAR_12->attr_value.v.u32;

            }
            break;
        case 16:

            if (FUNC_6 (VAR_6)) {
                if ((VAR_6[0] == 0) && (VAR_6[1] == 0)) {
                    VAR_12->attr_len_type = (VAR_12->attr_len_type & ~VAR_5) | 2;
                    VAR_6 += 2;
                    FUNC_1 (VAR_12->attr_value.v.u16, VAR_6);
                    VAR_6 += VAR_3 - 4;
                } else {
                    VAR_12->attr_len_type = (VAR_12->attr_len_type & ~VAR_5) | 4;
                    FUNC_2 (VAR_12->attr_value.v.u32, VAR_6);
                    VAR_6 += VAR_3 - 4;
                }
            } else {







                FUNC_0 (VAR_6, VAR_12->attr_value.v.array, (INT32)VAR_13);
            }
            break;
        default:
            FUNC_4 ("SDP - bad len in UUID attr: %d\n", VAR_13);
            return (VAR_6 + VAR_13);
        }
        break;

    case 133:
    case 134:

        VAR_7->p_free_mem += sizeof (tSDP_DISC_ATTR);
        VAR_7->mem_free -= sizeof (tSDP_DISC_ATTR);
        VAR_18 = VAR_6 + VAR_13;
        VAR_14 = 0;


        if (VAR_11 >= VAR_2) {
            FUNC_3 ("SDP - attr nesting too deep\n");
            return (VAR_18);
        }
        if (VAR_19 != 0 || VAR_9 == VAR_0) {
            VAR_11 |= VAR_4;
        }


        while (VAR_6 < VAR_18) {

            VAR_6 = FUNC_7 (VAR_6, VAR_7, VAR_8, 0, VAR_12, (UINT8)(VAR_11 + 1));

            if (!VAR_6) {
                return (((void*)0));
            }
        }
        break;

    case 132:
    case 129:
        FUNC_0 (VAR_6, VAR_12->attr_value.v.array, (INT32)VAR_13);
        break;

    case 135:
        switch (VAR_13) {
        case 1:
            VAR_12->attr_value.v.u8 = *VAR_6++;
            break;
        default:
            FUNC_4 ("SDP - bad len in boolean attr: %d\n", VAR_13);
            return (VAR_6 + VAR_13);
        }
        break;

    default:
        break;
    }

    VAR_7->p_free_mem += VAR_14;
    VAR_7->mem_free -= VAR_14;


    if (!VAR_10) {
        if (!VAR_8->p_first_attr) {
            VAR_8->p_first_attr = VAR_12;
        } else {
            tSDP_DISC_ATTR *VAR_20 = VAR_8->p_first_attr;

            while (VAR_20->p_next_attr) {
                VAR_20 = VAR_20->p_next_attr;
            }

            VAR_20->p_next_attr = VAR_12;
        }
    } else {
        if (!VAR_10->attr_value.v.p_sub_attr) {
            VAR_10->attr_value.v.p_sub_attr = VAR_12;


        } else {
            tSDP_DISC_ATTR *VAR_21 = VAR_10->attr_value.v.p_sub_attr;



            while (VAR_21->p_next_attr) {
                VAR_21 = VAR_21->p_next_attr;
            }

            VAR_21->p_next_attr = VAR_12;

        }
    }

    return (VAR_6);
}
