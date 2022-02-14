
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int64_t FUNC_3(const char* VAR_1, int64_t* VAR_2, int64_t* VAR_3)
{
    int64_t VAR_4 = VAR_3[1] - VAR_3[0];
    int64_t VAR_5 = VAR_2[1] - VAR_2[0];
    int64_t VAR_6 = VAR_4 >> VAR_0;
    int64_t VAR_7 = VAR_5 - VAR_4;
    int64_t VAR_8 = VAR_6 - VAR_7;
    FUNC_2("%s: dt_real_time = %lli us, dt_sys_time = %lli us, calc_correction = %lli us, error = %lli us\n",
            VAR_1, VAR_4, VAR_5, VAR_6, VAR_8);

    FUNC_1(VAR_5 > 0 && VAR_4 > 0);
    FUNC_0(100, 0, VAR_8);
    return VAR_7;
}
