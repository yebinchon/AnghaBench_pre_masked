
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_4__ {int frame_start_found; int state64; } ;
struct TYPE_5__ {int size; scalar_t__ lastmarker; int startpos; int framesize; TYPE_1__ pc; } ;
typedef TYPE_1__ ParseContext ;
typedef TYPE_2__ DCAParseContext ;


 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;





 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(DCAParseContext *VAR_1, const uint8_t *VAR_2,
                              int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    uint64_t VAR_7;
    ParseContext *VAR_8 = &VAR_1->pc;

    VAR_4 = VAR_8->frame_start_found;
    VAR_7 = VAR_8->state64;
    VAR_5 = VAR_1->size;

    VAR_6 = 0;
    if (!VAR_4) {
        for (; VAR_6 < VAR_3; VAR_6++) {
            VAR_5++;
            VAR_7 = (VAR_7 << 8) | VAR_2[VAR_6];

            if (FUNC_5(VAR_7) &&
                (!VAR_1->lastmarker ||
                  VAR_1->lastmarker == FUNC_1(VAR_7) ||
                  VAR_1->lastmarker == 128)) {
                if (!VAR_1->lastmarker)
                    VAR_1->startpos = FUNC_4(VAR_7) ? VAR_5 - 4 : VAR_5 - 6;

                if (FUNC_4(VAR_7))
                    VAR_1->lastmarker = FUNC_3(VAR_7);
                else
                    VAR_1->lastmarker = FUNC_1(VAR_7);

                VAR_4 = 1;
                VAR_5 = 0;

                VAR_6++;
                break;
            }
        }
    }

    if (VAR_4) {
        for (; VAR_6 < VAR_3; VAR_6++) {
            VAR_5++;
            VAR_7 = (VAR_7 << 8) | VAR_2[VAR_6];

            if (VAR_4 == 1) {
                switch (VAR_1->lastmarker) {
                case 130:
                    if (VAR_5 == 2) {
                        VAR_1->framesize = FUNC_0(VAR_7);
                        VAR_4 = 2;
                    }
                    break;
                case 129:
                    if (VAR_5 == 2) {
                        VAR_1->framesize = FUNC_0(FUNC_7(VAR_7));
                        VAR_4 = 4;
                    }
                    break;
                case 132:
                    if (VAR_5 == 4) {
                        VAR_1->framesize = FUNC_0(FUNC_6(VAR_7));
                        VAR_4 = 4;
                    }
                    break;
                case 131:
                    if (VAR_5 == 4) {
                        VAR_1->framesize = FUNC_0(FUNC_6(FUNC_7(VAR_7)));
                        VAR_4 = 4;
                    }
                    break;
                case 128:
                    if (VAR_5 == 6) {
                        VAR_1->framesize = FUNC_2(VAR_7);
                        VAR_4 = 4;
                    }
                    break;
                default:
                    FUNC_8(0);
                }
                continue;
            }

            if (VAR_4 == 2 && FUNC_4(VAR_7) &&
                VAR_1->framesize <= VAR_5 + 2) {
                VAR_1->framesize = VAR_5 + 2;
                VAR_4 = 3;
                continue;
            }

            if (VAR_4 == 3) {
                if (VAR_5 == VAR_1->framesize + 4) {
                    VAR_1->framesize += FUNC_2(VAR_7);
                    VAR_4 = 4;
                }
                continue;
            }

            if (VAR_1->framesize > VAR_5)
                continue;

            if (FUNC_5(VAR_7) &&
                (VAR_1->lastmarker == FUNC_1(VAR_7) ||
                 VAR_1->lastmarker == 128)) {
                VAR_8->frame_start_found = 0;
                VAR_8->state64 = -1;
                VAR_1->size = 0;
                return FUNC_4(VAR_7) ? VAR_6 - 3 : VAR_6 - 5;
            }
        }
    }

    VAR_8->frame_start_found = VAR_4;
    VAR_8->state64 = VAR_7;
    VAR_1->size = VAR_5;
    return VAR_0;
}
