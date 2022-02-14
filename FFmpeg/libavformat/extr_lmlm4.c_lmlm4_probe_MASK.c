
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (unsigned char const*) ;
 int FUNC_1 (unsigned char const*) ;
 unsigned int FUNC_2 (unsigned char const*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static int FUNC_3(const AVProbeData *VAR_4)
{
    const unsigned char *VAR_5 = VAR_4->buf;
    unsigned int VAR_6, VAR_7;

    VAR_6 = FUNC_0(VAR_5 + 2);
    VAR_7 = FUNC_2(VAR_5 + 4);

    if (!FUNC_0(VAR_5) && VAR_6 <= VAR_3 && VAR_7 &&
        VAR_6 != VAR_1 && VAR_7 <= VAR_2) {
        if (VAR_6 == VAR_3) {
            if ((FUNC_0(VAR_5 + 8) & 0xfffe) != 0xfffc)
                return 0;


            return VAR_0 / 3;
        } else if (FUNC_1(VAR_5 + 8) == 0x000001) {
            return VAR_0 / 5;
        }
    }

    return 0;
}
