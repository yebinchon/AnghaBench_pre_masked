
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int * pb; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int*,int,int const**) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int const*) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_3, uint8_t *VAR_4, int VAR_5,
                       const uint8_t **VAR_6)
{
    AVIOContext *VAR_7 = VAR_3->pb;
    int VAR_8;

    for (;;) {
        VAR_8 = FUNC_1(VAR_7, VAR_4, VAR_2, VAR_6);
        if (VAR_8 != VAR_2)
            return VAR_8 < 0 ? VAR_8 : VAR_0;

        if ((*VAR_6)[0] != 0x47) {


            if (FUNC_2(VAR_3, VAR_5, *VAR_6) < 0)
                return FUNC_0(VAR_1);
            else
                continue;
        } else {
            break;
        }
    }
    return 0;
}
