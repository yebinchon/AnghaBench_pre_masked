
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int is_md5; void*** md5; } ;
typedef TYPE_1__ HEVCSEIPictureHash ;
typedef int GetBitContext ;


 void* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(HEVCSEIPictureHash *VAR_0, GetBitContext *VAR_1)
{
    int VAR_2, VAR_3;
    uint8_t VAR_4;


    VAR_4 = FUNC_0(VAR_1, 8);

    for (VAR_2 = 0; VAR_2 < 3 ; VAR_2++) {
        if (VAR_4 == 0) {
            VAR_0->is_md5 = 1;
            for (VAR_3 = 0; VAR_3 < 16; VAR_3++)
                VAR_0->md5[VAR_2][VAR_3] = FUNC_0(VAR_1, 8);
        } else if (VAR_4 == 1) {

            FUNC_1(VAR_1, 16);
        } else if (VAR_4 == 2) {

            FUNC_1(VAR_1, 32);
        }
    }
    return 0;
}
