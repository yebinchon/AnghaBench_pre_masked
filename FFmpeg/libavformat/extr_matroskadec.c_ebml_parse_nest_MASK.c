
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int int64_t ;
struct TYPE_9__ {double f; int s; int i; int u; } ;
struct TYPE_12__ {int type; TYPE_1__ def; int data_offset; scalar_t__ id; } ;
struct TYPE_11__ {int num_levels; TYPE_2__* levels; } ;
struct TYPE_10__ {int length; } ;
typedef TYPE_3__ MatroskaDemuxContext ;
typedef TYPE_4__ EbmlSyntax ;


 int FUNC_0 (int ) ;





 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,void*) ;

__attribute__((used)) static int FUNC_3(MatroskaDemuxContext *VAR_2, EbmlSyntax *VAR_3,
                           void *VAR_4)
{
    int VAR_5;

    if (VAR_4) {
        for (int VAR_6 = 0; VAR_3[VAR_6].id; VAR_6++)
            switch (VAR_3[VAR_6].type) {
            case 129:
                *(uint64_t *) ((char *) VAR_4 + VAR_3[VAR_6].data_offset) = VAR_3[VAR_6].def.u;
                break;
            case 131:
                *(int64_t *) ((char *) VAR_4 + VAR_3[VAR_6].data_offset) = VAR_3[VAR_6].def.i;
                break;
            case 132:
                *(double *) ((char *) VAR_4 + VAR_3[VAR_6].data_offset) = VAR_3[VAR_6].def.f;
                break;
            case 130:
            case 128:

                if (VAR_3[VAR_6].def.s) {
                    uint8_t **VAR_7 = (uint8_t **) ((uint8_t *) VAR_4 + VAR_3[VAR_6].data_offset);
                    *VAR_7 = FUNC_1(VAR_3[VAR_6].def.s);
                    if (!*VAR_7)
                        return FUNC_0(VAR_0);
                }
                break;
            }

        if (!VAR_2->levels[VAR_2->num_levels - 1].length) {
            VAR_2->num_levels--;
            return 0;
        }
    }

    do {
        VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
    } while (!VAR_5);

    return VAR_5 == VAR_1 ? 0 : VAR_5;
}
