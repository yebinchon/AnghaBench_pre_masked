
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char const*,char*,int) ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_1)
{
    const unsigned char *VAR_2 = VAR_1->buf;
    unsigned VAR_3, VAR_4 = 0;


    if (*VAR_2++ != 0)
        return 0;


    VAR_3 = *VAR_2++;
    VAR_4 = VAR_3 & 0x7F;
    if (VAR_3 & 0x80) {
        VAR_3 = *VAR_2++;
        VAR_4 = (VAR_4 << 7) | (VAR_3 & 0x7F);
    }
    if (VAR_3 & 0x80 || VAR_4 > 1024 || VAR_4 < 21)
        return 0;

    if (FUNC_0(VAR_2, "\r\nVersion:Vivo/", 15))
        return 0;
    VAR_2 += 15;

    if (*VAR_2 < '0' || *VAR_2 > '2')
        return 0;

    return VAR_0;
}
