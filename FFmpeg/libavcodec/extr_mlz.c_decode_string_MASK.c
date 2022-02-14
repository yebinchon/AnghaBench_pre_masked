
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int context; TYPE_1__* dict; } ;
struct TYPE_4__ {int char_code; int parent_code; int match_len; } ;
typedef TYPE_1__ MLZDict ;
typedef TYPE_2__ MLZ ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_1(MLZ* VAR_3, unsigned char *VAR_4, int VAR_5, int *VAR_6, unsigned long VAR_7) {
    MLZDict* VAR_8 = VAR_3->dict;
    unsigned long VAR_9, VAR_10;
    int VAR_11, VAR_12, VAR_13;

    VAR_9 = 0;
    VAR_11 = VAR_5;
    *VAR_6 = 128;

    while (VAR_9 < VAR_7) {
        switch (VAR_11) {
        case 128:
            return VAR_9;
            break;
        default:
            if (VAR_11 < VAR_2) {
                *VAR_6 = VAR_11;
                VAR_4[0] = VAR_11;
                VAR_9++;
                return VAR_9;
            } else {
                VAR_10 = VAR_8[VAR_11].match_len - 1;
                VAR_13 = VAR_8[VAR_11].char_code;
                if (VAR_10 >= VAR_7) {
                    FUNC_0(VAR_3->context, VAR_0, "MLZ offset error.\n");
                    return VAR_9;
                }
                VAR_4[VAR_10] = VAR_13;
                VAR_9++;
            }
            VAR_11 = VAR_8[VAR_11].parent_code;
            if ((VAR_11 < 0) || (VAR_11 > (VAR_1 - 1))) {
                FUNC_0(VAR_3->context, VAR_0, "MLZ dic index error.\n");
                return VAR_9;
            }
            if (VAR_11 > VAR_2) {
                VAR_12 = VAR_8[VAR_11].parent_code;
                VAR_10 = (VAR_8[VAR_11].match_len) - 1;
                if (VAR_12 < 0 || VAR_12 > VAR_1-1) {
                    FUNC_0(VAR_3->context, VAR_0, "MLZ dic index error.\n");
                    return VAR_9;
                }
                if (( VAR_10 > (VAR_1 - 1))) {
                    FUNC_0(VAR_3->context, VAR_0, "MLZ dic offset error.\n");
                    return VAR_9;
                }
            }
            break;
        }
    }
    return VAR_9;
}
