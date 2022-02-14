
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent_code; int string_code; int char_code; int match_len; } ;
typedef TYPE_1__ MLZDict ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(MLZDict* VAR_1, int VAR_2, int VAR_3, int VAR_4) {
    VAR_1[VAR_2].parent_code = VAR_3;
    VAR_1[VAR_2].string_code = VAR_2;
    VAR_1[VAR_2].char_code = VAR_4;
    if (VAR_3 < VAR_0) {
        VAR_1[VAR_2].match_len = 2;
    } else {
        VAR_1[VAR_2].match_len = (VAR_1[VAR_3].match_len) + 1;
    }
}
