
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int state; int is_synced; int header_bytes_needed; int sync_offset; } ;
typedef TYPE_1__ DiracParseContext ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(DiracParseContext *VAR_1,
                          const uint8_t *VAR_2, int VAR_3)
{
    uint32_t VAR_4 = VAR_1->state;
    int VAR_5 = 0;

    if (!VAR_1->is_synced) {
        for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
            VAR_4 = (VAR_4 << 8) | VAR_2[VAR_5];
            if (VAR_4 == VAR_0) {
                VAR_4 = -1;
                VAR_1->is_synced = 1;
                VAR_1->header_bytes_needed = 9;
                VAR_1->sync_offset = VAR_5;
                break;
            }
        }
    }

    if (VAR_1->is_synced) {
        VAR_1->sync_offset = 0;
        for (; VAR_5 < VAR_3; VAR_5++) {
            if (VAR_4 == VAR_0) {
                if ((VAR_3 - VAR_5) >= VAR_1->header_bytes_needed) {
                    VAR_1->state = -1;
                    return VAR_5 + VAR_1->header_bytes_needed;
                } else {
                    VAR_1->header_bytes_needed = 9 - (VAR_3 - VAR_5);
                    break;
                }
            } else
                VAR_4 = (VAR_4 << 8) | VAR_2[VAR_5];
        }
    }
    VAR_1->state = VAR_4;
    return -1;
}
