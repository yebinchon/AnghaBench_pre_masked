
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double d; long long i; } ;
struct unit_value {scalar_t__ unit; TYPE_1__ val; } ;
struct TYPE_5__ {double bin_val; char* bin_str; double dec_val; char* dec_str; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 long long FUNC_1 (long long,int ,scalar_t__) ;
 int FUNC_2 (char*,int,char*,char*,char const*,char*) ;
 scalar_t__ FUNC_3 (double) ;
 scalar_t__ FUNC_4 (double) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_5 (char*,int,char*,long long,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static char *FUNC_6(char *VAR_7, int VAR_8, struct unit_value VAR_9)
{
    double VAR_10;
    long long int VAR_11;
    int VAR_12 = 0;

    if (VAR_9.unit == VAR_3) {
        VAR_10 = VAR_9.val.d;
        VAR_12 = 1;
    } else {
        VAR_10 = VAR_11 = VAR_9.val.i;
    }

    if (VAR_9.unit == VAR_3 && VAR_6) {
        double VAR_13;
        int VAR_14, VAR_15;
        VAR_13 = VAR_10;
        VAR_15 = (int)VAR_13 / 60;
        VAR_13 = VAR_13 - VAR_15 * 60;
        VAR_14 = VAR_15 / 60;
        VAR_15 %= 60;
        FUNC_5(VAR_7, VAR_8, "%d:%02d:%09.6f", VAR_14, VAR_15, VAR_13);
    } else {
        const char *VAR_16 = "";

        if (VAR_5 && VAR_10 > 1) {
            long long int VAR_17;

            if (VAR_9.unit == VAR_2 && VAR_4) {
                VAR_17 = (long long int) (FUNC_4(VAR_10)) / 10;
                VAR_17 = FUNC_1(VAR_17, 0, FUNC_0(VAR_1) - 1);
                VAR_10 /= VAR_1[VAR_17].bin_val;
                VAR_16 = VAR_1[VAR_17].bin_str;
            } else {
                VAR_17 = (long long int) (FUNC_3(VAR_10)) / 3;
                VAR_17 = FUNC_1(VAR_17, 0, FUNC_0(VAR_1) - 1);
                VAR_10 /= VAR_1[VAR_17].dec_val;
                VAR_16 = VAR_1[VAR_17].dec_str;
            }
            VAR_11 = VAR_10;
        }

        if (VAR_12 || (VAR_5 && VAR_10 != (long long int)VAR_10))
            FUNC_5(VAR_7, VAR_8, "%f", VAR_10);
        else
            FUNC_5(VAR_7, VAR_8, "%lld", VAR_11);
        FUNC_2(VAR_7, VAR_8, "%s%s%s", *VAR_16 || VAR_0 ? " " : "",
                 VAR_16, VAR_0 ? VAR_9.unit : "");
    }

    return VAR_7;
}
