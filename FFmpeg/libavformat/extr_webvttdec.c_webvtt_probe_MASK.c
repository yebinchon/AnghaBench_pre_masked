
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int * buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (char*,int const) ;
 int FUNC_2 (int const*,char*,int) ;

__attribute__((used)) static int FUNC_3(const AVProbeData *VAR_1)
{
    const uint8_t *VAR_2 = VAR_1->buf;

    if (FUNC_0(VAR_2) == 0xEFBBBF)
        VAR_2 += 3;
    if (!FUNC_2(VAR_2, "WEBVTT", 6) &&
        (!VAR_2[6] || FUNC_1("\n\r\t ", VAR_2[6])))
        return VAR_0;
    return 0;
}
