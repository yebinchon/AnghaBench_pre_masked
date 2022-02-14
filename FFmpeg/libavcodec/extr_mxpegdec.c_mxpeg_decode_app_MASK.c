
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int gb; } ;
struct TYPE_5__ {TYPE_1__ jpg; } ;
typedef TYPE_2__ MXpegDecodeContext ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(MXpegDecodeContext *VAR_0,
                            const uint8_t *VAR_1, int VAR_2)
{
    int VAR_3;
    if (VAR_2 < 2)
        return 0;
    VAR_3 = FUNC_0(VAR_1);
    FUNC_2(&VAR_0->jpg.gb, 8*FUNC_1(VAR_3,VAR_2));

    return 0;
}
