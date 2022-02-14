
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exp; double bin_val; double dec_val; } ;


 double FUNC_0 (double) ;
 TYPE_1__* VAR_0 ;
 double FUNC_1 (char const*,char**) ;
 double FUNC_2 (char const*,char**,int) ;

double FUNC_3(const char *VAR_1, char **VAR_2)
{
    double VAR_3;
    char *VAR_4;
    if(VAR_1[0]=='0' && (VAR_1[1]|0x20)=='x') {
        VAR_3 = FUNC_2(VAR_1, &VAR_4, 16);
    } else
        VAR_3 = FUNC_1(VAR_1, &VAR_4);

    if (VAR_4!=VAR_1) {
        if (VAR_4[0] == 'd' && VAR_4[1] == 'B') {

            VAR_3 = FUNC_0(VAR_3 / 20);
            VAR_4 += 2;
        } else if (*VAR_4 >= 'E' && *VAR_4 <= 'z') {
            int VAR_5= VAR_0[*VAR_4 - 'E'].exp;
            if (VAR_5) {
                if (VAR_4[1] == 'i') {
                    VAR_3*= VAR_0[*VAR_4 - 'E'].bin_val;
                    VAR_4+=2;
                } else {
                    VAR_3*= VAR_0[*VAR_4 - 'E'].dec_val;
                    VAR_4++;
                }
            }
        }

        if (*VAR_4=='B') {
            VAR_3*=8;
            VAR_4++;
        }
    }


    if (VAR_2)
        *VAR_2 = VAR_4;
    return VAR_3;
}
