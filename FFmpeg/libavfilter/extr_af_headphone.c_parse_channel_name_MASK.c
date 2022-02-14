
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef long long int64_t ;
struct TYPE_3__ {int lfe_channel; } ;
typedef TYPE_1__ HeadphoneContext ;


 int FUNC_0 (int ) ;
 long long VAR_0 ;
 int VAR_1 ;
 long long FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,char*,int*) ;

__attribute__((used)) static int FUNC_3(HeadphoneContext *VAR_2, int VAR_3, char **VAR_4, int *VAR_5, char *VAR_6)
{
    int VAR_7, VAR_8, VAR_9 = 0;
    int64_t VAR_10, VAR_11;

    if (FUNC_2(*VAR_4, "%7[A-Z]%n", VAR_6, &VAR_7)) {
        VAR_11 = VAR_10 = FUNC_1(VAR_6);
        if (VAR_10 == VAR_0)
            VAR_2->lfe_channel = VAR_3;
        for (VAR_8 = 32; VAR_8 > 0; VAR_8 >>= 1) {
            if (VAR_10 >= 1LL << VAR_8) {
                VAR_9 += VAR_8;
                VAR_10 >>= VAR_8;
            }
        }
        if (VAR_9 >= 64 || VAR_11 != 1LL << VAR_9)
            return FUNC_0(VAR_1);
        *VAR_5 = VAR_9;
        *VAR_4 += VAR_7;
        return 0;
    }
    return FUNC_0(VAR_1);
}
