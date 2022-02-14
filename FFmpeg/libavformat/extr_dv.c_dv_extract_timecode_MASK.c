
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_1__* sys; } ;
struct TYPE_4__ {int ltc_divisor; } ;
typedef TYPE_2__ DVDemuxContext ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (char*,int ,int) ;
 int * FUNC_2 (int const*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(DVDemuxContext* VAR_1, const uint8_t* VAR_2, char *VAR_3)
{
    const uint8_t *VAR_4;




    int VAR_5 = VAR_1->sys->ltc_divisor == 25 || VAR_1->sys->ltc_divisor == 50;

    VAR_4 = FUNC_2(VAR_2, VAR_0);
    if (!VAR_4)
        return 0;
    FUNC_1(VAR_3, FUNC_0(VAR_4 + 1), VAR_5);
    return 1;
}
